/*
 * XREFs of MmFreeNonChargedSecurePages @ 0x140217864
 * Callers:
 *     PspIumFreePartitionPages @ 0x14024F8A8 (PspIumFreePartitionPages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiPartitionObjectToPartition @ 0x14011CD74 (MiPartitionObjectToPartition.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall MmFreeNonChargedSecurePages(ULONG_PTR **a1, int a2, __int64 *a3)
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
