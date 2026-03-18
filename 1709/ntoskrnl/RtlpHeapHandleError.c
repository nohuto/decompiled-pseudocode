/*
 * XREFs of RtlpHeapHandleError @ 0x14025B59C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14010CD3C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14010CDA0 (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14010E9A0 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x14010EB30 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x14010ECB8 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14014EF48 (RtlpPopulateListIndex.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     RtlCreateHeap @ 0x1405D3930 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1405DD020 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  KeBugCheckEx(0x13Au, dword_140359198, qword_1403591A0, qword_1403591A8, 0LL);
}
