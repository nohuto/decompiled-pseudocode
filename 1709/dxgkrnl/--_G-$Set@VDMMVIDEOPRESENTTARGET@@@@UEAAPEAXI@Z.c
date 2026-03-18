/*
 * XREFs of ??_G?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAPEAXI@Z @ 0x1C0035140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ @ 0x1C0034A2C (--1-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Set<DMMVIDEOPRESENTTARGET>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  Set<DMMVIDEOPRESENTTARGET>::~Set<DMMVIDEOPRESENTTARGET>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
