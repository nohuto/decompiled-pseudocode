/*
 * XREFs of PopExecutionRequiredTimeoutWorkerRoutine @ 0x1406F5B60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14059F4BC (PopHandleExecutionRequiredEnablementUpdate.c)
 */

void PopExecutionRequiredTimeoutWorkerRoutine()
{
  unsigned __int64 v0; // rcx

  _InterlockedExchange(&PopExecutionRequiredWorkRequested, 0);
  PopAcquirePowerRequestPushLock(1);
  PopHandleExecutionRequiredEnablementUpdate(v0);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
