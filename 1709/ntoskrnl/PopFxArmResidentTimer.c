/*
 * XREFs of PopFxArmResidentTimer @ 0x14001ADF4
 * Callers:
 *     PopFxIdleComponent @ 0x1400E403C (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x14011B7B0 (PopFxResidentTimeoutRoutine.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x14012BE60 (PopFxResidentTimeoutDpcRoutine.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 */

__int64 __fastcall PopFxArmResidentTimer(char a1)
{
  KIRQL v2; // di
  __int64 result; // rax

  v2 = ExAcquireSpinLockExclusive(&PopFxResidentTimerLock);
  if ( a1 )
    PopFxResidentTimerArmed = 0;
  if ( !PopFxResidentTimerArmed && PopFxResidentComponentCount > 0 )
  {
    PopFxResidentTimerArmed = 1;
    KeSetCoalescableTimer(
      &PopFxResidentTimer,
      (LARGE_INTEGER)(-10000LL * (unsigned int)PopFxActiveIdleTimeout),
      0,
      (unsigned int)PopFxActiveIdleTimeout >> 1,
      &PopFxResidentDpc);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PopFxResidentTimerLock);
  result = v2;
  __writecr8(v2);
  return result;
}
