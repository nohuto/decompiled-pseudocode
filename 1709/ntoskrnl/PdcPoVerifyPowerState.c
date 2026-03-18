/*
 * XREFs of PdcPoVerifyPowerState @ 0x1405B8520
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopVerifySystemPowerState @ 0x1405B987C (PopVerifySystemPowerState.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(__int64 a1, unsigned int a2)
{
  PopAcquirePolicyLock();
  PopVerifySystemPowerState(a1, a2);
  return PopReleasePolicyLock();
}
