/*
 * XREFs of RtlpLogHeapFailure @ 0x14017D77C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14000E878 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14000E8DC (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x14000EAF4 (RtlpCreateSplitBlock.c)
 *     RtlFreeHeap @ 0x14000ECC0 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x14000ED38 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x14000EDEC (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14000F368 (RtlpCoalesceFreeBlocks.c)
 *     RtlAllocateHeap @ 0x14000F6C0 (RtlAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x14000F830 (RtlpAllocateHeap.c)
 *     RtlpHeapListCompare @ 0x140010560 (RtlpHeapListCompare.c)
 *     RtlpFindAndCommitPages @ 0x1400105BC (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x140010744 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x140010840 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x140010918 (RtlpRemoveUCRBlock.c)
 *     RtlpInitializeHeapSegment @ 0x1401354FC (RtlpInitializeHeapSegment.c)
 *     RtlSizeHeap @ 0x14023BD00 (RtlSizeHeap.c)
 *     RtlpSizeHeapInternal @ 0x14023E37C (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x140243E68 (RtlpAnalyzeHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x140244BA0 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpVsContextAllocate @ 0x140245810 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsContextFree @ 0x140245AE8 (RtlpHpVsContextFree.c)
 *     RtlDestroyHeap @ 0x140579570 (RtlDestroyHeap.c)
 *     RtlZeroHeap @ 0x1406EB360 (RtlZeroHeap.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x14023E0B8 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1402441A4 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x140244458 (RtlpLocateRelatedBlocks.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  if ( qword_140340B00 != a2 )
  {
    dword_140340AF8 = a1;
    qword_140340B00 = a2;
    qword_140340B08 = a3;
    qword_140340B10 = a4;
    qword_140340B18 = a5;
    qword_140340B20 = 0LL;
    memset(&BackTrace, 0, 0x100uLL);
    RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
    if ( dword_140340AF8 == 3 )
      RtlpLocateRelatedBlocks(a2, a3);
    RtlpHeapHandleError();
  }
}
