/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x140769F70
 * Callers:
 *     PopPolicyWorkerThread @ 0x140073DA0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopForceCompleteCsSleepStudySession @ 0x140157908 (PopForceCompleteCsSleepStudySession.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopForceCompleteCsSleepStudySession(2);
  return 0LL;
}
