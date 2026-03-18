/*
 * XREFs of PopSetSystemShutdownMarker @ 0x1406C5700
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopWriteBsdPowerTransition @ 0x140576A8C (PopWriteBsdPowerTransition.c)
 */

void PopSetSystemShutdownMarker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) |= 8u;
  PopWriteBsdPowerTransition();
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
