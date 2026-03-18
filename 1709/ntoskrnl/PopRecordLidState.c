/*
 * XREFs of PopRecordLidState @ 0x1406F5580
 * Callers:
 *     PopLidSwitchChangeCallback @ 0x1406F7960 (PopLidSwitchChangeCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopWriteBsdPowerTransition @ 0x1406F5A28 (PopWriteBsdPowerTransition.c)
 */

void __fastcall PopRecordLidState(int a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE11(PopBsdPowerTransition) = BYTE11(PopBsdPowerTransition) & 0x3F | (a1 != 0 ? 0x40 : 0);
  PopWriteBsdPowerTransition();
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
