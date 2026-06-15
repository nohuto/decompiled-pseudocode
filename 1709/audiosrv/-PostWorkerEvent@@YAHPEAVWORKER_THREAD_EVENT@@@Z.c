/*
 * XREFs of ?PostWorkerEvent@@YAHPEAVWORKER_THREAD_EVENT@@@Z @ 0x1800ACE0C
 * Callers:
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180090CE4 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall PostWorkerEvent(struct WORKER_THREAD_EVENT *a1)
{
  return PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)a1, 0LL);
}
