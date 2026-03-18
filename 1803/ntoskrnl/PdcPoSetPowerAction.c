/*
 * XREFs of PdcPoSetPowerAction @ 0x140764E30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 */

__int64 __fastcall PdcPoSetPowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, unsigned int a5)
{
  PopAcquirePolicyLock();
  PopExecutePowerAction(a1, a2, a3, a4, a5);
  return PopReleasePolicyLock();
}
