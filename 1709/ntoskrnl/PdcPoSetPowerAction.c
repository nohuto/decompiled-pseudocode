/*
 * XREFs of PdcPoSetPowerAction @ 0x1406FF4B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 */

__int64 __fastcall PdcPoSetPowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, int a5)
{
  PopAcquirePolicyLock();
  PopExecutePowerAction(a1, a2, a3, a4, a5);
  return PopReleasePolicyLock();
}
