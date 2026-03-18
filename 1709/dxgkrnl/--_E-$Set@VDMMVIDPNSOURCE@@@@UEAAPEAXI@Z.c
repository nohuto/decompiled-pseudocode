/*
 * XREFs of ??_E?$Set@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C0036410
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C000A778 (--1-$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Set<DMMVIDPNSOURCE>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
