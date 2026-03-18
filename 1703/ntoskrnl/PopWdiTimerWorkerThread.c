/*
 * XREFs of PopWdiTimerWorkerThread @ 0x140233180
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PopDiagTraceSleepStudyStart @ 0x1406CDD80 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x1406CDE48 (PopDiagTraceSleepStudyStop.c)
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
