/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x1406CB550
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopVerifyPowerActionPolicy @ 0x140581174 (PopVerifyPowerActionPolicy.c)
 */

__int64 __fastcall PdcPoVerifyActionPolicy(int *a1)
{
  PopAcquirePolicyLock();
  PopVerifyPowerActionPolicy(a1);
  return PopReleasePolicyLock();
}
