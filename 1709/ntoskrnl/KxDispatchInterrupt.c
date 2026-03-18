/*
 * XREFs of KxDispatchInterrupt @ 0x140188090
 * Callers:
 *     KiDispatchInterrupt @ 0x140188000 (KiDispatchInterrupt.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     SwapContext @ 0x140188250 (SwapContext.c)
 */

__int64 KxDispatchInterrupt()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rdi
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  int v7; // esi
  _KTHREAD *NextThread; // rsi

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  _disable();
  ++CurrentPrcb->NestingLevel;
  v2 = __rdtsc() - CurrentPrcb->StartCycles;
  *(_QWORD *)(CurrentThread + 72) += v2;
  v3 = *(unsigned int *)(CurrentThread + 80);
  CurrentPrcb->StartCycles += v2;
  v4 = v2 + v3;
  v5 = v4;
  if ( HIDWORD(v4) )
    v5 = -1;
  *(_DWORD *)(CurrentThread + 80) = v5;
  if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
    KiEndThreadAccountingPeriod((__int64)CurrentPrcb, CurrentThread, v2);
  _enable();
  KiAbProcessContextSwitch(CurrentThread, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    v7 = 0;
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        HvlNotifyLongSpinWait();
      _mm_pause();
    }
    while ( (CurrentPrcb->PrcbLock & 1) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) );
  }
  NextThread = CurrentPrcb->NextThread;
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = NextThread;
  NextThread->WaitBlockFill6[68] = 2;
  *(_BYTE *)(CurrentThread + 643) = 31;
  KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v6);
  return SwapContext(1LL);
}
