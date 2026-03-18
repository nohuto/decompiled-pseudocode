/*
 * XREFs of PopWdiTimerWorkerThread @ 0x14027E770
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x14013E470 (KeReleaseMutant.c)
 *     PopDiagTraceSleepStudyStart @ 0x14076910C (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x140769204 (PopDiagTraceSleepStudyStop.c)
 */

LONG PopWdiTimerWorkerThread()
{
  KeWaitForSingleObject(&PopWdiTimerMutex, Executive, 0, 0, 0LL);
  PopDiagTraceSleepStudyStop();
  if ( PopWdiNewScenarioWaiting )
  {
    PopDiagTraceSleepStudyStart();
    PopWdiNewScenarioWaiting = 0;
  }
  PopWdiTimerQueued = 0;
  return KeReleaseMutant(&PopWdiTimerMutex, 1, 0, 0);
}
