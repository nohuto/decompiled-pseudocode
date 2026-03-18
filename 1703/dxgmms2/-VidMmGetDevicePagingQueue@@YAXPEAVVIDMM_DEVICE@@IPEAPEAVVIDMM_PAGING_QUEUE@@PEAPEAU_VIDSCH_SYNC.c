/*
 * XREFs of ?VidMmGetDevicePagingQueue@@YAXPEAVVIDMM_DEVICE@@IPEAPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0012FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmGetDevicePagingQueue(
        struct VIDMM_DEVICE *a1,
        unsigned int a2,
        struct VIDMM_PAGING_QUEUE **a3,
        struct _VIDSCH_SYNC_OBJECT **a4)
{
  *a3 = (struct VIDMM_PAGING_QUEUE *)(160LL * a2 + *((_QWORD *)a1 + 9));
  *a4 = *(struct _VIDSCH_SYNC_OBJECT **)(*((_QWORD *)a1 + 9) + 160LL * a2 + 152);
}
