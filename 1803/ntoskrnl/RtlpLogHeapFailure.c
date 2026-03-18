/*
 * XREFs of RtlpLogHeapFailure @ 0x1402932C0
 * Callers:
 *     RtlFreeHeap @ 0x1400AB340 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1400AB3B8 (RtlpFreeHeapInternal.c)
 *     RtlpHpVsContextFree @ 0x1400AB428 (RtlpHpVsContextFree.c)
 *     RtlAllocateHeap @ 0x1400AB580 (RtlAllocateHeap.c)
 *     RtlpHpVsContextAllocate @ 0x1400ABD80 (RtlpHpVsContextAllocate.c)
 *     RtlpHpFixedVsFree @ 0x1400AC960 (RtlpHpFixedVsFree.c)
 *     RtlSizeHeap @ 0x140287050 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140289EB0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14028A28C (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14028A9AC (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14028AAE4 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14028B32C (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x14028B55C (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x14028BAB4 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x14028BD3C (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x14028C07C (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x14028C138 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x14028C1C4 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x14028C3D4 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x140293310 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x140293D64 (RtlpHeapListCompare.c)
 *     RtlpHpFreeHeap @ 0x140294A24 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x140297E14 (RtlpHpSegFree.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14029C288 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLargeFree @ 0x14029E80C (RtlpHpLargeFree.c)
 *     RtlDestroyHeap @ 0x1405F0AA0 (RtlDestroyHeap.c)
 *     RtlZeroHeap @ 0x140786EC0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x14029367C (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  if ( qword_14039C050 != a2 )
  {
    qword_14039C070 = 0LL;
    qword_14039C068 = a5;
    dword_14039C048 = a1;
    qword_14039C050 = a2;
    qword_14039C058 = a3;
    qword_14039C060 = a4;
    RtlpHpHeapHandleError();
  }
}
