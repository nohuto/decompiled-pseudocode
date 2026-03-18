/*
 * XREFs of PpmCheckResumeStatisticsCollection @ 0x140248734
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x140138A18 (PpmPerfUpdateQosDisableReasons.c)
 */

LONG PpmCheckResumeStatisticsCollection()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_1404018C8 = 0;
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
