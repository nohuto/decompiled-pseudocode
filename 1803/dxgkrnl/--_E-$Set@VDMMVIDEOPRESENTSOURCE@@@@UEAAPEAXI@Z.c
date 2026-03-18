/*
 * XREFs of ??_E?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z @ 0x1C0043F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ @ 0x1C00436F0 (--1-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DMMVIDEOPRESENTSOURCE>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Set<DMMVIDEOPRESENTSOURCE>::~Set<DMMVIDEOPRESENTSOURCE>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
