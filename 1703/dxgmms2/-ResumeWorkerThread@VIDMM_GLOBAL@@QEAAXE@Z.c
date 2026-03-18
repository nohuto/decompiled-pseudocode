/*
 * XREFs of ?ResumeWorkerThread@VIDMM_GLOBAL@@QEAAXE@Z @ 0x1C0060FB8
 * Callers:
 *     VidMmResumeWorkerThread @ 0x1C0012CD0 (VidMmResumeWorkerThread.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ResumeWorkerThread(VIDMM_GLOBAL *this, char a2)
{
  VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(*(_QWORD *)this, 1, a2);
}
