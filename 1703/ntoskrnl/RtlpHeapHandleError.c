/*
 * XREFs of RtlpHeapHandleError @ 0x1402441A4
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14000E878 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14000E8DC (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1400105BC (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x140010744 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x1400108C8 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1401353EC (RtlpPopulateListIndex.c)
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x140579570 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  KeBugCheckEx(0x13Au, dword_140340AF8, qword_140340B00, qword_140340B08, 0LL);
}
