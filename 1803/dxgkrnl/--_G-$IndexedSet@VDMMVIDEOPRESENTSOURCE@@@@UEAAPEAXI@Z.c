/*
 * XREFs of ??_G?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z @ 0x1C0043EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ @ 0x1C00436F0 (--1-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDEOPRESENTSOURCE>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  *P = &IndexedSet<DMMVIDEOPRESENTSOURCE>::`vftable';
  Set<DMMVIDEOPRESENTSOURCE>::~Set<DMMVIDEOPRESENTSOURCE>(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
