/*
 * XREFs of CmpCreateGlobalKeyLockEntry @ 0x1405D9404
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x1405D92E8 (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14047F63C (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

_QWORD *__fastcall CmpCreateGlobalKeyLockEntry(volatile signed __int32 *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  char v4; // si
  _QWORD *TransientPoolWithTag; // rax

  v2 = 0LL;
  v4 = CmpReferenceKeyControlBlockUnsafe(a1);
  if ( v4 )
  {
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(v3, 0x20uLL, 0x33374D43u);
    v2 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, 0x20uLL);
      v4 = 0;
      v2[2] = 1LL;
      v2[3] = a1;
    }
    if ( v4 )
      CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  return v2;
}
