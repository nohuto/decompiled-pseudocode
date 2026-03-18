/*
 * XREFs of ExWakeTimersResume @ 0x14014DF48
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExpTimerResume @ 0x14008A0C0 (ExpTimerResume.c)
 */

signed __int64 __fastcall ExWakeTimersResume(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rax
  signed __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = MEMORY[0xFFFFF78000000008];
  v6 = (__int64 *)ExpWakeTimerList;
  while ( v6 != &ExpWakeTimerList )
  {
    v7 = v6 - 33;
    v6 = (__int64 *)*v6;
    KxAcquireSpinLock((PKSPIN_LOCK)v7 + 8);
    if ( v7[32] )
    {
      v8 = v7[35];
      if ( !v8 || (*(_DWORD *)(v8 + 440) & 8) == 0 )
        ExpTimerResume((PKTIMER)v7, v5);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v7 + 8);
  }
  __writecr8(CurrentIrql);
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (result & 2) != 0 && (result & 4) == 0 )
    return ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock, a2, a3, a4);
  return result;
}
