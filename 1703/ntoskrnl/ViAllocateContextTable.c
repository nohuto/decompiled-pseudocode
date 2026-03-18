/*
 * XREFs of ViAllocateContextTable @ 0x140766ECC
 * Callers:
 *     VfInsertContext @ 0x140250040 (VfInsertContext.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 */

_WORD *__fastcall ViAllocateContextTable(__int16 a1)
{
  _WORD *result; // rax

  result = ExAllocateFromNPagedLookasideList(&ViObjectContextTableLookaside);
  if ( result )
  {
    *result = a1;
    result[1] = 6;
    *((_DWORD *)result + 1) = 0;
    *((_QWORD *)result + 1) = 0LL;
    *((_QWORD *)result + 2) = 0LL;
  }
  return result;
}
