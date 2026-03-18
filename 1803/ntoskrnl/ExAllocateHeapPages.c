/*
 * XREFs of ExAllocateHeapPages @ 0x1400D85A4
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     ExpResizeBigPageTable @ 0x14014A110 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1402B8B38 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     InitializePool @ 0x1408ACB14 (InitializePool.c)
 * Callees:
 *     MiAllocatePoolPages @ 0x1400D85D8 (MiAllocatePoolPages.c)
 *     RtlpHpAllocateHeap @ 0x1402945C8 (RtlpHpAllocateHeap.c)
 *     RtlpHpSegAlloc @ 0x1402979E8 (RtlpHpSegAlloc.c)
 *     ExGetHeapFromType @ 0x1402BD650 (ExGetHeapFromType.c)
 */

__int64 __fastcall ExAllocateHeapPages(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int *HeapFromType; // rcx

  v2 = a1;
  if ( ExpHeapBackedPoolEnabled )
    HeapFromType = (unsigned int *)ExGetHeapFromType(a1, a2, (unsigned int)a1);
  else
    HeapFromType = 0LL;
  if ( !HeapFromType )
    return MiAllocatePoolPages(v2);
  if ( a2 >= HeapFromType[32] )
    return RtlpHpAllocateHeap(HeapFromType);
  return RtlpHpSegAlloc((int)HeapFromType + 112, a2, a2, a2, 0);
}
