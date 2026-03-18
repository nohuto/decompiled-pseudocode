/*
 * XREFs of ExWakeTimersPause @ 0x140286828
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExpTimerPause @ 0x1400D3370 (ExpTimerPause.c)
 */

__int64 ExWakeTimersPause()
{
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v2; // r15
  __int64 v3; // r12
  __int64 *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 result; // rax

  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, 0LL, (__int16 *)&ExpWakeTimerLock);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v2 = MEMORY[0xFFFFF78000000008];
  v3 = MEMORY[0xFFFFF78000000014];
  v4 = (__int64 *)ExpWakeTimerList;
  while ( v4 != &ExpWakeTimerList )
  {
    v5 = (__int64)(v4 - 33);
    v4 = (__int64 *)*v4;
    KxAcquireSpinLock((PKSPIN_LOCK)(v5 + 64));
    v6 = *(_QWORD *)(v5 + 256);
    KxReleaseSpinLock((PKSPIN_LOCK)(v5 + 64));
    if ( v6 )
      ExpTimerPause(v5, v3, v2, 0);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
