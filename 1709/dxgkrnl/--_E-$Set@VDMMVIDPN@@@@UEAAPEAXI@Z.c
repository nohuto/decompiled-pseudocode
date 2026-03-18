/*
 * XREFs of ??_E?$Set@VDMMVIDPN@@@@UEAAPEAXI@Z @ 0x1C00350C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C0034A00 (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Set<DMMVIDPN>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
