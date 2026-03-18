/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x1402486EC
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x140138A18 (PpmPerfUpdateQosDisableReasons.c)
 */

char PpmCheckPausePpmEngineForSx()
{
  char result; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  result = PpmPerfUpdateQosDisableReasons(0LL);
  byte_1404018C8 = 1;
  return result;
}
