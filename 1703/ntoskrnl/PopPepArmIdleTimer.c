/*
 * XREFs of PopPepArmIdleTimer @ 0x14022E24C
 * Callers:
 *     PopPepGetComponentPreferedIdleState @ 0x14006AF44 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x14022E740 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutRoutine @ 0x14022E770 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 */

void __fastcall PopPepArmIdleTimer(char a1)
{
  KIRQL v2; // di
  char v3; // cl

  if ( PopPepIdleStateTimeout )
  {
    v2 = ExAcquireSpinLockExclusive(&PopPepIdleTimerLock);
    if ( a1 )
    {
      v3 = 0;
      PopPepIdleTimerArmed = 0;
    }
    else
    {
      v3 = PopPepIdleTimerArmed;
    }
    if ( !v3 && PopPepPoweredIdleComponentCount > 0 )
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
