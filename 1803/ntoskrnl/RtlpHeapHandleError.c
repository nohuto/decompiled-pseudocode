/*
 * XREFs of RtlpHeapHandleError @ 0x14029364C
 * Callers:
 *     RtlpCreateUCREntry @ 0x14028A9AC (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14028AAE4 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14028B32C (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14028BD3C (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x14029367C (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x140293A64 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x140293EC8 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1405F0AA0 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  KeBugCheckEx(0x13Au, dword_14039C048, qword_14039C050, qword_14039C058, 0LL);
}
