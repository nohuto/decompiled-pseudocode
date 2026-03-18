/*
 * XREFs of ??_G?$SignedWithClassSignature@VDMMVIDEOPRESENTTARGETSET@@@@UEAAPEAXI@Z @ 0x1C0035180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall SignedWithClassSignature<DMMVIDEOPRESENTTARGETSET>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[2] |= 0x6D640000u;
  *(_QWORD *)a1 = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
