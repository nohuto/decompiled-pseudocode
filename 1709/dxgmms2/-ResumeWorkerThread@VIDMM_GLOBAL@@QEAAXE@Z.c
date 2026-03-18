/*
 * XREFs of ?ResumeWorkerThread@VIDMM_GLOBAL@@QEAAXE@Z @ 0x1C006417C
 * Callers:
 *     VidMmResumeWorkerThread @ 0x1C0014000 (VidMmResumeWorkerThread.c)
 * Callees:
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C0058090 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ResumeWorkerThread(VIDMM_GLOBAL *this, char a2)
{
  VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(*(_QWORD *)this, 1, a2);
}
