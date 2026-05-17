/*
 * XREFs of RtlpLogHeapFailure @ 0x18009FBBC
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x180008C44 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x1800090BC (RtlpCreateSplitBlock.c)
 *     RtlpHeapFindListLookupEntry @ 0x1800095D0 (RtlpHeapFindListLookupEntry.c)
 *     RtlpHeapListCompare @ 0x1800097E8 (RtlpHeapListCompare.c)
 *     RtlpInitializeHeapSegment @ 0x1800098E8 (RtlpInitializeHeapSegment.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1800145D4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180014AA8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpCoalesceFreeBlocks @ 0x180038A9C (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180039B00 (RtlpInsertFreeBlock.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlReAllocateHeap @ 0x18003C6F0 (RtlReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     RtlpHpVsContextFree @ 0x18003E180 (RtlpHpVsContextFree.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180041A70 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlSizeHeap @ 0x180045BB0 (RtlSizeHeap.c)
 *     RtlpHeapRemoveListEntry @ 0x18004650C (RtlpHeapRemoveListEntry.c)
 *     RtlpFindAndCommitPages @ 0x180047558 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x180047904 (RtlpCreateUCREntry.c)
 *     RtlpHpSegFree @ 0x1800481C0 (RtlpHpSegFree.c)
 *     RtlpHpReallocMove @ 0x180048858 (RtlpHpReallocMove.c)
 *     RtlpHpHeapValidateProtection @ 0x180048FE8 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpVsContextAllocate @ 0x18004C21C (RtlpHpVsContextAllocate.c)
 *     RtlpDestroyHeapSegment @ 0x180061354 (RtlpDestroyHeapSegment.c)
 *     RtlpHpLargeFree @ 0x18006F490 (RtlpHpLargeFree.c)
 *     RtlGetUserInfoHeap @ 0x180077630 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180077930 (RtlpProbeUserBufferSafe.c)
 *     RtlSetUserValueHeap @ 0x180077A10 (RtlSetUserValueHeap.c)
 *     RtlpRemoveUCRBlock @ 0x180084C6C (RtlpRemoveUCRBlock.c)
 *     RtlpInsertUCRBlock @ 0x18008690C (RtlpInsertUCRBlock.c)
 *     RtlpCoalesceHeap @ 0x180090494 (RtlpCoalesceHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF5E0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F25E0 (RtlZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpValidateHeapSegment @ 0x1801053B8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180024AA0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1800FF958 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x180100F60 (RtlpLocateRelatedBlocks.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_18015C6F0 != a2 )
  {
    dword_18015C6E8 = a1;
    qword_18015C6F0 = a2;
    qword_18015C6F8 = a3;
    qword_18015C700 = a4;
    qword_18015C708 = a5;
    qword_18015C710 = a6;
    memset(&BackTrace, 0, 0x100uLL);
    RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
    if ( dword_18015C6E8 == 3 )
      RtlpLocateRelatedBlocks(a2, a3);
    return RtlpHeapHandleError(2LL);
  }
  return result;
}
