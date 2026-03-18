/*
 * XREFs of ?VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0002480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmCreatePagingQueue(
        struct VIDMM_DEVICE *a1,
        unsigned int a2,
        int a3,
        struct VIDMM_PAGING_QUEUE **a4)
{
  return VIDMM_DEVICE::CreatePagingQueue(a1, a2, a3, a4);
}
