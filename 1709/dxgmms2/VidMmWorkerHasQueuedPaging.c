/*
 * XREFs of VidMmWorkerHasQueuedPaging @ 0x1C0020F80
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkerHasQueuedPaging@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C00A049C (-WorkerHasQueuedPaging@VIDMM_GLOBAL@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall VidMmWorkerHasQueuedPaging(VIDMM_GLOBAL *a1)
{
  return VIDMM_GLOBAL::WorkerHasQueuedPaging(a1);
}
