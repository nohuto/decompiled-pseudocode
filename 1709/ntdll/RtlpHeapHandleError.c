/*
 * XREFs of RtlpHeapHandleError @ 0x1800FF958
 * Callers:
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlpPopulateListIndex @ 0x180008AC0 (RtlpPopulateListIndex.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180039B00 (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x180047558 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x180047904 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x180047B34 (RtlpFindUCREntry.c)
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x1801023A4 (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_18015F3E8 )
    return RtlpReportHeapFailure();
  return result;
}
