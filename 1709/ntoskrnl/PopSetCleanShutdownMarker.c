/*
 * XREFs of PopSetCleanShutdownMarker @ 0x1406F578C
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopWriteBsdPowerTransition @ 0x1406F5A28 (PopWriteBsdPowerTransition.c)
 */

void PopSetCleanShutdownMarker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~1u;
  PopWriteBsdPowerTransition();
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
