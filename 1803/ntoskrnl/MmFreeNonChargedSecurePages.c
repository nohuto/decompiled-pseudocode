/*
 * XREFs of MmFreeNonChargedSecurePages @ 0x1402551CC
 * Callers:
 *     PspIumFreePartitionPages @ 0x14028536C (PspIumFreePartitionPages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1400B3C4C (MiPartitionObjectToPartition.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall MmFreeNonChargedSecurePages(ULONG_PTR **a1, int a2, ULONG_PTR *a3)
{
  ULONG_PTR *i; // rdi
  __int64 v6; // rbx
  unsigned __int8 v7; // r14
  char v8; // [rsp+58h] [rbp+10h] BYREF

  for ( i = MiPartitionObjectToPartition(a1, 1, &v8); a2; --a2 )
  {
    v6 = 48 * *a3 - 0x58000000000LL;
    v7 = MiLockPageInline(v6);
    *(_WORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
    *(_QWORD *)(v6 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( _InterlockedDecrement64((volatile signed __int64 *)i + 52) < 0 )
      KeBugCheckEx(0x1Au, 0x42403uLL, (ULONG_PTR)i, 0LL, 0LL);
    MiInsertPageInFreeOrZeroedList(*a3, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v7);
    ++a3;
  }
  if ( v8 )
    PsDereferencePartition(i[21]);
}
