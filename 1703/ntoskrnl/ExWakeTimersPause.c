/*
 * XREFs of ExWakeTimersPause @ 0x14013DACC
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ExpTimerPause @ 0x1400315B0 (ExpTimerPause.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 ExWakeTimersPause()
{
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v2; // r15
  __int64 v3; // r12
  __int64 *v4; // rsi
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx

  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, 0LL, (ULONG_PTR)&ExpWakeTimerLock);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v2 = MEMORY[0xFFFFF78000000008];
  v3 = MEMORY[0xFFFFF78000000014];
  v4 = (__int64 *)ExpWakeTimerList;
  while ( v4 != &ExpWakeTimerList )
  {
    v6 = (__int64)(v4 - 33);
    v4 = (__int64 *)*v4;
    KxAcquireSpinLock((PKSPIN_LOCK)(v6 + 64));
    v7 = *(_QWORD *)(v6 + 256);
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 64));
    if ( v7 )
      ExpTimerPause(v6, v3, v2, 0);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
