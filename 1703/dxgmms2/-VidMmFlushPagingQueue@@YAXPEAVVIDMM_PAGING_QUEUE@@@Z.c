/*
 * XREFs of ?VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0012CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmFlushPagingQueue(struct VIDMM_PAGING_QUEUE *a1)
{
  VIDMM_PAGING_QUEUE::Flush(a1);
}
