/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x1406CEBA0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400702C0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopForceCompleteCsSleepStudySession @ 0x14013E054 (PopForceCompleteCsSleepStudySession.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopForceCompleteCsSleepStudySession(2);
  return 0LL;
}
