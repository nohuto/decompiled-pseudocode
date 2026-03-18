/*
 * XREFs of PpmCheckResumeStatisticsCollection @ 0x14014DE28
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x140163880 (PpmPerfUpdateQosDisableReasons.c)
 */

void PpmCheckResumeStatisticsCollection()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_14044CA88 = 0;
  PpmReleaseLock(&PpmPerfPolicyLock);
}
