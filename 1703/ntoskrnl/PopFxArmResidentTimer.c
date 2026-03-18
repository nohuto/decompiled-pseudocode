/*
 * XREFs of PopFxArmResidentTimer @ 0x140068BAC
 * Callers:
 *     PopFxResidentTimeoutDpcRoutine @ 0x140035AA0 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopFxResidentTimeoutRoutine @ 0x140068C50 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x140069D5C (PopFxIdleComponent.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 */

__int64 __fastcall PopFxArmResidentTimer(char a1)
{
  KIRQL v2; // di
  char v3; // cl
  __int64 result; // rax

  v2 = ExAcquireSpinLockExclusive(&PopFxResidentTimerLock);
  if ( a1 )
  {
    v3 = 0;
    PopFxResidentTimerArmed = 0;
  }
  else
  {
    v3 = PopFxResidentTimerArmed;
  }
  if ( !v3 && PopFxResidentComponentCount > 0 )
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
