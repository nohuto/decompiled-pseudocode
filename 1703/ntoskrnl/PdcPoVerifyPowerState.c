/*
 * XREFs of PdcPoVerifyPowerState @ 0x1405D63B0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopVerifySystemPowerState @ 0x140581AE8 (PopVerifySystemPowerState.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(int *a1, int a2)
{
  PopAcquirePolicyLock();
  PopVerifySystemPowerState(a1, a2);
  return PopReleasePolicyLock();
}
