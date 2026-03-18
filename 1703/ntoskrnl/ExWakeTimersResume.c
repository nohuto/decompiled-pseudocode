/*
 * XREFs of ExWakeTimersResume @ 0x140138758
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ExpTimerResume @ 0x140031708 (ExpTimerResume.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

char ExWakeTimersResume()
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v1; // r15
  __int64 *v2; // rsi
  char result; // al
  __int64 *v4; // rbp
  __int64 v5; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v1 = MEMORY[0xFFFFF78000000008];
  v2 = (__int64 *)ExpWakeTimerList;
  while ( v2 != &ExpWakeTimerList )
  {
    v4 = v2 - 33;
    v2 = (__int64 *)*v2;
    KxAcquireSpinLock((PKSPIN_LOCK)v4 + 8);
    v5 = v4[32];
    KxReleaseSpinLock((PKSPIN_LOCK)v4 + 8);
    if ( v5 )
      ExpTimerResume((PKTIMER)v4, v1);
  }
  __writecr8(CurrentIrql);
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( result == 2 )
    return ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  return result;
}
