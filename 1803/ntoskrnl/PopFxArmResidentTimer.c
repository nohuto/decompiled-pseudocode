/*
 * XREFs of PopFxArmResidentTimer @ 0x140079CB0
 * Callers:
 *     PopFxResidentTimeoutRoutine @ 0x140077910 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1400786EC (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x1400CC610 (PopFxResidentTimeoutDpcRoutine.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
