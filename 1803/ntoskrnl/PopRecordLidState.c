/*
 * XREFs of PopRecordLidState @ 0x14075D348
 * Callers:
 *     PopLidSwitchChangeCallback @ 0x14075F160 (PopLidSwitchChangeCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopWriteBsdPowerTransition @ 0x140611DF0 (PopWriteBsdPowerTransition.c)
 */

void __fastcall PopRecordLidState(int a1)
{
  if ( !PopErrataReportingIncorrectLidState )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE11(PopBsdPowerTransition) = BYTE11(PopBsdPowerTransition) & 0x3F | (a1 != 0 ? 0x40 : 0);
    dword_1403A7E4C = BYTE11(PopBsdPowerTransition) >> 6;
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
