/*
 * XREFs of RtlpLogHeapFailure @ 0x14017CFD8
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14010CD3C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14010CDA0 (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x14010CFC4 (RtlpCreateSplitBlock.c)
 *     RtlFreeHeap @ 0x14010D190 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x14010D208 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x14010D2BC (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14010D830 (RtlpCoalesceFreeBlocks.c)
 *     RtlAllocateHeap @ 0x14010DB70 (RtlAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 *     RtlpHeapListCompare @ 0x14010E940 (RtlpHeapListCompare.c)
 *     RtlpFindAndCommitPages @ 0x14010E9A0 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x14010EB30 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x14010EC30 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x14010ED08 (RtlpRemoveUCRBlock.c)
 *     RtlpInitializeHeapSegment @ 0x14014F05C (RtlpInitializeHeapSegment.c)
 *     RtlSizeHeap @ 0x140251580 (RtlSizeHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x140254080 (RtlpProbeUserBufferSafe.c)
 *     RtlpSizeHeapInternal @ 0x140254288 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x14025B284 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpFixedVsFree @ 0x14025C410 (RtlpHpFixedVsFree.c)
 *     RtlpHpVsContextAllocate @ 0x14025CCEC (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsContextFree @ 0x14025CFD0 (RtlpHpVsContextFree.c)
 *     RtlDestroyHeap @ 0x1405DD020 (RtlDestroyHeap.c)
 *     RtlZeroHeap @ 0x1407235F0 (RtlZeroHeap.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x140253ED0 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x14025B59C (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x14025B850 (RtlpLocateRelatedBlocks.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  if ( qword_1403591A0 != a2 )
  {
    dword_140359198 = a1;
    qword_1403591A0 = a2;
    qword_1403591A8 = a3;
    qword_1403591B0 = a4;
    qword_1403591B8 = a5;
    qword_1403591C0 = 0LL;
    memset(&BackTrace, 0, 0x100uLL);
    RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
    if ( dword_140359198 == 3 )
      RtlpLocateRelatedBlocks(a2, a3);
    RtlpHeapHandleError();
  }
}
