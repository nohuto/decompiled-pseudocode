/*
 * XREFs of PopPepArmIdleTimer @ 0x14000C2FC
 * Callers:
 *     PopPepIdleTimeoutRoutine @ 0x14000C130 (PopPepIdleTimeoutRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x14000EC30 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopPepGetComponentPreferedIdleState @ 0x140123A94 (PopPepGetComponentPreferedIdleState.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
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
