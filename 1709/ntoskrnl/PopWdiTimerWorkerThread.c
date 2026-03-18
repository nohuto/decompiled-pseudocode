/*
 * XREFs of PopWdiTimerWorkerThread @ 0x140248670
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 *     PopDiagTraceSleepStudyStart @ 0x1407050CC (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x1407051C4 (PopDiagTraceSleepStudyStop.c)
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
