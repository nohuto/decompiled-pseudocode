/*
 * XREFs of ViGrowPoolAllocation @ 0x1407A6714
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     KeZeroSinglePage @ 0x140184D20 (KeZeroSinglePage.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall ViGrowPoolAllocation(_SLIST_HEADER *a1)
{
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  _SLIST_ENTRY *v3; // rbx
  _SLIST_HEADER *v5; // rsi
  __int64 v6; // rdi

  PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                          (POOL_TYPE)640,
                                          0x1000uLL,
                                          0x70706556u,
                                          HighPoolPriority);
  v3 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return RtlpInterlockedPopEntrySList(a1 + 4);
  KeZeroSinglePage(PoolWithTagPriority);
  *((_QWORD *)&v3->Next + 1) = a1;
  v3[1].Next = (_SLIST_ENTRY *)556929861;
  RtlpInterlockedPushEntrySList(a1 + 3, v3);
  v5 = a1 + 4;
  v6 = 126LL;
  do
  {
    v3 += 2;
    v3[1].Next = (_SLIST_ENTRY *)1;
    RtlpInterlockedPushEntrySList(v5, v3);
    --v6;
  }
  while ( v6 );
  v3[3].Next = (_SLIST_ENTRY *)1;
  return v3 + 2;
}
