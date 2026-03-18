/*
 * XREFs of KiIdleLoop @ 0x140184ED0
 * Callers:
 *     KiSystemStartup @ 0x140403010 (KiSystemStartup.c)
 * Callees:
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KiIdleSchedule @ 0x140042E90 (KiIdleSchedule.c)
 *     KiRetireDpcList @ 0x1400F18D0 (KiRetireDpcList.c)
 *     PoIdle @ 0x1400F4340 (PoIdle.c)
 *     SwapContext @ 0x1401887A0 (SwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 */

void __noreturn KiIdleLoop()
{
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *IdleThread; // rdi
  unsigned int v2; // esi
  _KTHREAD *NextThread; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  retaddr = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  while ( 1 )
  {
    while ( 1 )
    {
      if ( HvlEnableIdleYield )
        _mm_pause();
      _enable();
      _disable();
      if ( (CurrentPrcb->DpcRequestSummary & 0x3F) != 0 )
        KiRetireDpcList((__int64)CurrentPrcb);
      if ( CurrentPrcb->QuantumEnd )
      {
        CurrentPrcb->QuantumEnd = 0;
        _enable();
        KiQuantumEnd();
        _disable();
      }
      _InterlockedOr8((volatile signed __int8 *)&CurrentPrcb->IdleHalt, 1u);
      if ( !CurrentPrcb->NextThread )
        break;
      CurrentPrcb->IdleHalt = 0;
      _enable();
      IdleThread = CurrentPrcb->IdleThread;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        v2 = 0;
        do
        {
          if ( (++v2 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            HvlNotifyLongSpinWait(v2);
          _mm_pause();
        }
        while ( (CurrentPrcb->PrcbLock & 1) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      if ( NextThread != IdleThread )
      {
        _disable();
        ++CurrentPrcb->NestingLevel;
        v4 = __rdtsc();
        v5 = (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) - CurrentPrcb->StartCycles;
        IdleThread->CycleTime += v5;
        CurrentPrcb->StartCycles += v5;
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        NextThread->WaitBlockFill6[68] = 2;
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        goto LABEL_21;
      }
      CurrentPrcb->PrcbLock = 0LL;
    }
    if ( CurrentPrcb->IdleSchedule )
    {
      CurrentPrcb->IdleHalt = 0;
      _enable();
      if ( KiIdleSchedule((__int64)CurrentPrcb) )
      {
LABEL_21:
        CurrentPrcb->InterruptRequest |= (CurrentPrcb->DpcRequestSummary & 0x2F) != 0;
        SwapContext(1LL);
      }
    }
    else
    {
      if ( (CurrentPrcb->DpcRequestSummary & 0x3F) == 0 )
      {
        __writecr8(0LL);
        PoIdle((__int64)CurrentPrcb);
        _enable();
        __writecr8(2uLL);
      }
      CurrentPrcb->IdleHalt = 0;
    }
  }
}
