/*
 * XREFs of ?VidMmDestroyPagingQueue@@YAXPEAVVIDMM_DEVICE@@PEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0013EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyPagingQueue@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0051600 (-DestroyPagingQueue@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 */

void __fastcall VidMmDestroyPagingQueue(struct VIDMM_DEVICE *a1, struct VIDMM_PAGING_QUEUE *a2)
{
  VIDMM_DEVICE::DestroyPagingQueue(a1, a2);
}
