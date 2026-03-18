/*
 * XREFs of ExWakeTimersResume @ 0x140286900
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     ExpTimerResume @ 0x14000C394 (ExpTimerResume.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

char ExWakeTimersResume()
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v1; // r15
  __int64 *v2; // rsi
  __int64 *v3; // rbp
  __int64 v4; // rbx
  char result; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v1 = MEMORY[0xFFFFF78000000008];
  v2 = (__int64 *)ExpWakeTimerList;
  while ( v2 != &ExpWakeTimerList )
  {
    v3 = v2 - 33;
    v2 = (__int64 *)*v2;
    KxAcquireSpinLock((PKSPIN_LOCK)v3 + 8);
    v4 = v3[32];
    KxReleaseSpinLock((PKSPIN_LOCK)v3 + 8);
    if ( v4 )
      ExpTimerResume((PKTIMER)v3, v1);
  }
  __writecr8(CurrentIrql);
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( result == 2 )
    return ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  return result;
}
