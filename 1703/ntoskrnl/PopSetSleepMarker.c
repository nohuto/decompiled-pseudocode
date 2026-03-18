/*
 * XREFs of PopSetSleepMarker @ 0x140576A30
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopGetTransitionsToOnCount @ 0x1401383A4 (PopGetTransitionsToOnCount.c)
 *     PopWriteBsdPowerTransition @ 0x140576A8C (PopWriteBsdPowerTransition.c)
 */

void __fastcall PopSetSleepMarker(char a1)
{
  int TransitionsToOnCount; // ebx

  TransitionsToOnCount = PopGetTransitionsToOnCount();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  HIDWORD(PopBsdPowerTransition) = TransitionsToOnCount;
  BYTE8(PopBsdPowerTransition) = (16 * a1) | BYTE8(PopBsdPowerTransition) & 0xF;
  PopWriteBsdPowerTransition();
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
