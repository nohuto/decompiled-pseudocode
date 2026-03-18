/*
 * XREFs of ??_E?$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z @ 0x1C002D040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C002CF8C (--1-$Set@VDXGTARGETENTRY@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Set<DXGTARGETENTRY>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  Set<DXGTARGETENTRY>::~Set<DXGTARGETENTRY>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
