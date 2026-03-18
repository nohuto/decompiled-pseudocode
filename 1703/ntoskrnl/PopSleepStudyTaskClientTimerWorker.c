/*
 * XREFs of PopSleepStudyTaskClientTimerWorker @ 0x1406CEBC0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PdcTaskClientRequest @ 0x1406F0020 (PdcTaskClientRequest.c)
 */

LONG PopSleepStudyTaskClientTimerWorker()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&PopSleepStudySessionLock, Executive, 0, 0, 0LL);
  if ( PopSleepStudyTaskClientReferenceTaken )
  {
    PdcTaskClientRequest(v0, 0LL);
    PopSleepStudyTaskClientReferenceTaken = 0;
  }
  return KeReleaseMutex(&PopSleepStudySessionLock, 0);
}
