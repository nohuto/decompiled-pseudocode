/*
 * XREFs of ??_E?$Set@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x1C0045A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ @ 0x1C0024EC4 (--1-$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DMMVIDPNTARGETMODE>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Set<DMMVIDPNTARGETMODE>::~Set<DMMVIDPNTARGETMODE>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
