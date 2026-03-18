/*
 * XREFs of ?SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z @ 0x1C0064140
 * Callers:
 *     VidMmSuspendWorkerThread @ 0x1C0014020 (VidMmSuspendWorkerThread.c)
 * Callees:
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C0058090 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SuspendWorkerThread(__int64 *a1, int a2)
{
  int v2; // edx
  int v3; // edx

  if ( !a2 )
  {
    v3 = 3;
    goto LABEL_4;
  }
  v2 = a2 - 1;
  if ( !v2 )
  {
    v3 = 4;
LABEL_4:
    VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(*a1, v3, 0);
    return;
  }
  if ( v2 == 1 )
  {
    v3 = 5;
    goto LABEL_4;
  }
}
