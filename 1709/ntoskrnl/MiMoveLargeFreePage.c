/*
 * XREFs of MiMoveLargeFreePage @ 0x14023312C
 * Callers:
 *     MiTransferPartitionPageRun @ 0x140238208 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiTryUnlinkNodeLargePage @ 0x140126570 (MiTryUnlinkNodeLargePage.c)
 */

__int64 __fastcall MiMoveLargeFreePage(__int64 a1, unsigned int a2, __int64 a3, __int16 *a4)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  int v8; // r13d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int16 v12; // cx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi

  v6 = MiLargePageSizes[a2];
  v7 = a1 & ~(v6 - 1);
  v8 = MiTryUnlinkNodeLargePage(v7, a2, 4);
  if ( v8 > 1 )
    return 0LL;
  v10 = 48 * v7 - 0x58000000000LL;
  if ( *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) != a3 )
  {
    v11 = (unsigned __int8)MiLockPageInline(48 * v7 - 0x58000000000LL);
    MiInsertLargePageInNodeListHelper(v7, v6, v8, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    return 0LL;
  }
  v12 = *a4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v14 = v10 + 48 * v6 - 48;
  if ( v14 >= v10 )
  {
    v15 = (unsigned __int64)(v12 & 0x3FF) << 40;
    do
    {
      MiLockPageAtDpcInline(v14);
      *(_QWORD *)(v14 + 40) = v15 | *(_QWORD *)(v14 + 40) & 0xFFFC00FFFFFFFFFFuLL;
      if ( v14 == v10 )
        MiInsertLargePageInNodeListHelper(v7, v6, v8, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v14 -= 48LL;
    }
    while ( v14 >= v10 );
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
