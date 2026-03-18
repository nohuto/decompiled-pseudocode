/*
 * XREFs of ?WorkerHasQueuedPaging@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C00A6B5C
 * Callers:
 *     VidMmWorkerHasQueuedPaging @ 0x1C0023700 (VidMmWorkerHasQueuedPaging.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::WorkerHasQueuedPaging(VIDMM_GLOBAL *this)
{
  return *(_DWORD *)(*(_QWORD *)this + 144LL) != 0;
}
