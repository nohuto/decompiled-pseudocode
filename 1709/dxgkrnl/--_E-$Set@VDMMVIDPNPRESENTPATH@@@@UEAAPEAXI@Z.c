/*
 * XREFs of ??_E?$Set@VDMMVIDPNPRESENTPATH@@@@UEAAPEAXI@Z @ 0x1C00363D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNPRESENTPATH@@@@UEAA@XZ @ 0x1C000E21C (--1-$Set@VDMMVIDPNPRESENTPATH@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Set<DMMVIDPNPRESENTPATH>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  Set<DMMVIDPNPRESENTPATH>::~Set<DMMVIDPNPRESENTPATH>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
