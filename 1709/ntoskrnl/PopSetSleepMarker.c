/*
 * XREFs of PopSetSleepMarker @ 0x1406F5844
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopGetTransitionsToOnCount @ 0x140247880 (PopGetTransitionsToOnCount.c)
 *     PopWriteBsdPowerTransition @ 0x1406F5A28 (PopWriteBsdPowerTransition.c)
 */

void __fastcall PopSetSleepMarker(char a1)
{
  __int16 TransitionsToOnCount; // bx

  TransitionsToOnCount = -1;
  if ( (unsigned int)PopGetTransitionsToOnCount() < 0xFFFF )
    TransitionsToOnCount = PopGetTransitionsToOnCount();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  WORD6(PopBsdPowerTransition) = TransitionsToOnCount;
  BYTE8(PopBsdPowerTransition) = (16 * a1) | BYTE8(PopBsdPowerTransition) & 0xF;
  BYTE14(PopBsdPowerTransition) = PopSleepCheckpointStatus & 0xF | BYTE14(PopBsdPowerTransition) & 0xF0;
  PopWriteBsdPowerTransition();
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
