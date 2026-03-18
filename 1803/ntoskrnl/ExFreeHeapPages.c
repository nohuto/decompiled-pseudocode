/*
 * XREFs of ExFreeHeapPages @ 0x1400E17DC
 * Callers:
 *     ExPoolCleanupExpansionTable @ 0x1400A3494 (ExPoolCleanupExpansionTable.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     ExpResizeBigPageTable @ 0x14014A110 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1402B8B38 (ExGetBigPoolInfo.c)
 *     ExDeferredFreePool @ 0x1402EA030 (ExDeferredFreePool.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 * Callees:
 *     MiFreePoolPages @ 0x1400E1834 (MiFreePoolPages.c)
 *     RtlpHpFreeHeap @ 0x140294A24 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x1402BD6B4 (ExGetHeapFromVA.c)
 */

__int64 __fastcall ExFreeHeapPages(ULONG_PTR BugCheckParameter2)
{
  __int64 HeapFromVA; // rax

  if ( ExpHeapBackedPoolEnabled )
    HeapFromVA = ExGetHeapFromVA(BugCheckParameter2);
  else
    HeapFromVA = 0LL;
  if ( HeapFromVA )
    return RtlpHpFreeHeap(HeapFromVA, BugCheckParameter2, 0LL, 0LL);
  else
    return MiFreePoolPages(BugCheckParameter2);
}
