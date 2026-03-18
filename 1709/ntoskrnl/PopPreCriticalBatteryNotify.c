/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x140706170
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400B0E10 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopForceCompleteCsSleepStudySession @ 0x140247808 (PopForceCompleteCsSleepStudySession.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopForceCompleteCsSleepStudySession(2);
  return 0LL;
}
