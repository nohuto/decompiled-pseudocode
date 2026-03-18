/*
 * XREFs of ExWakeTimersPause @ 0x14014DD10
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExpTimerPause @ 0x1400C9404 (ExpTimerPause.c)
 */

__int64 ExWakeTimersPause()
{
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v2; // r14
  __int64 v3; // r15
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, 0LL, (ULONG_PTR)&ExpWakeTimerLock);
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
    if ( *(_QWORD *)(v5 + 256) )
      ExpTimerPause(v5, v3, v2, 1);
    KxReleaseSpinLock((PKSPIN_LOCK)(v5 + 64));
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
