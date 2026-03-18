/*
 * XREFs of PopSetCleanShutdownMarker @ 0x14075D5C8
 * Callers:
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopWriteBsdPowerTransition @ 0x140611DF0 (PopWriteBsdPowerTransition.c)
 */

void PopSetCleanShutdownMarker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~1u;
  PopWriteBsdPowerTransition();
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
