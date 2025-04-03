/* PROYECTO FINAL PROGRAMACIÓN 1: ASTEROIDES
INTEGRANTES DEL EQUIPO: jOSHUA IVÁN BRAVO GONZÁLEZ, DIEGO JOAO SÁNCHEZ LÓPEZ, RUBÉN ALEJANDRO HERNÁNDEZ DE LA TORRE Y MARIA FERNANDA HERNANDEZ PÉREZ PEÑA.
GRADO Y GRUPO: ISC-2A
*/

#include <stdio.h> //La librería stdio.h sirve para funciones básicas para mostrar y leer datos, asi como para el manejo de archivos
#include <conio.h> //La libreria conio.h la usamos para poder hacr uso de metodos de lectura especificos (como getch)
#include <stdlib.h> //La libreria stdlib.h nos sirve para aplicar la memoria dinamica y usar numeros aleatorios
#include <string.h> //la libreria string.h nos sirve para manejar de mejor manera los strings y modificarlos
#include <time.h> //la libreria time.h se usa para el manejo de numeros aleatorios
#include <windows.h> //la libreria windows.h nos sirve para manejar la pantalla para usar coordenadas

#include <graphics.h> //para el uso de graficos

//PROTOTIPOS DE LAS FUNCIONES
void menu();
void mostrarAyuda();


//FUNCIONES SIN PARAMETROS Y SIN RETORNO

//FUNCIONES CON PARAMETROS Y SIN RETORNO
void mostrarPuntaje();
//FUNCIONES SIN PARAMETROS Y CON RETORNO

//FUNCIONES CON PARAMETRO Y RETORNO
int disparar(Disparo* disparo, Nave* nave);
int colision(Disparo* disparo, Asteroide* asteroide);

using namespace std;

int main(){
    int opc;
    do{		//Bucle principal del programa

	cout<<"\t=== !ASTEROID! ===\n";
        cout<<"Jugar..................1\n";	
        cout<<"Puntuacion.............2\n";
        cout<<"Salir..................3\n";
        cout<<"Seleccione una opcion: ";
        fflush(stdin);
        cin>>opc;
	switch(opc){
            case 1: ""; break;
            case 2: ""; break;
            default: printf("Opcion no valida. Intente nuevamente.\n"); break;
        }
    }while(opc!='3');
    
	return 0;
}
//IMPLEMENTACION DE LAS FUNCIONES
int disparar(Disparo* disparo, Nave* nave){
	
}

int colision(Disparo* disparo, Asteroide* asteroide){
	
}
