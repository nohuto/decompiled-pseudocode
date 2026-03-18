/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x14014DDE0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x140163880 (PpmPerfUpdateQosDisableReasons.c)
 */

__int64 PpmCheckPausePpmEngineForSx()
{
  __int64 result; // rax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  result = PpmPerfUpdateQosDisableReasons(0LL);
  byte_14044CA88 = 1;
  return result;
}
