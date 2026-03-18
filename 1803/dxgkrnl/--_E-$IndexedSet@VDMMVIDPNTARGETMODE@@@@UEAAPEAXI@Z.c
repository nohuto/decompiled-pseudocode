/*
 * XREFs of ??_E?$IndexedSet@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x1C0045970
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ @ 0x1C0024EC4 (--1-$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDPNTARGETMODE>::`vector deleting destructor'(_QWORD *P, char a2)
{
  *P = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  Set<DMMVIDPNTARGETMODE>::~Set<DMMVIDPNTARGETMODE>(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
