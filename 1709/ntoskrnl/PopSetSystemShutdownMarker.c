/*
 * XREFs of PopSetSystemShutdownMarker @ 0x1406F58C8
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopWriteBsdPowerTransition @ 0x1406F5A28 (PopWriteBsdPowerTransition.c)
 */

void PopSetSystemShutdownMarker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) |= 8u;
  PopWriteBsdPowerTransition();
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
