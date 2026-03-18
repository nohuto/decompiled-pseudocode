/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x1405D947C
 * Callers:
 *     CmLockKeyForWrite @ 0x1405D90F8 (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14047F63C (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

_QWORD *__fastcall CmpCreateSiloKeyLockEntry(volatile signed __int32 *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  char v4; // si
  _QWORD *TransientPoolWithTag; // rax

  v2 = 0LL;
  v4 = CmpReferenceKeyControlBlockUnsafe(a1);
  if ( v4 )
  {
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(v3, 0x20uLL, 0x34374D43u);
    v2 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, 0x20uLL);
      v4 = 0;
      v2[2] = a1;
    }
    if ( v4 )
      CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  return v2;
}
