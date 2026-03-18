/*
 * XREFs of PopPepArmIdleTimer @ 0x1402790BC
 * Callers:
 *     PopPepGetComponentPreferedIdleState @ 0x1400798D4 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1402797F0 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutRoutine @ 0x140279820 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall PopPepArmIdleTimer(char a1)
{
  KIRQL v2; // di

  if ( PopPepIdleStateTimeout )
  {
    v2 = ExAcquireSpinLockExclusive(&PopPepIdleTimerLock);
    if ( a1 )
      PopPepIdleTimerArmed = 0;
    if ( !PopPepIdleTimerArmed && PopPepPoweredIdleComponentCount > 0 )
    {
      PopPepIdleTimerArmed = 1;
      KeSetCoalescableTimer(
        &PopPepIdleTimer,
        (LARGE_INTEGER)(-10000LL * PopPepIdleStateTimeout),
        0,
        PopPepIdleStateTimeout,
        &PopPepIdleDpc);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&PopPepIdleTimerLock);
    __writecr8(v2);
  }
}
