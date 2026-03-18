/*
 * XREFs of KiIdleLoop @ 0x140184970
 * Callers:
 *     KiSystemStartup @ 0x140423010 (KiSystemStartup.c)
 * Callees:
 *     KiIdleSchedule @ 0x14008CB50 (KiIdleSchedule.c)
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 *     KiRetireDpcList @ 0x140094770 (KiRetireDpcList.c)
 *     PoIdle @ 0x1400967A0 (PoIdle.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     SwapContext @ 0x140188250 (SwapContext.c)
 */

void __fastcall __noreturn KiIdleLoop(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *IdleThread; // rdi
  int v5; // esi
  _KTHREAD *NextThread; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
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
        KiQuantumEnd(a1, a2, a3);
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
        v5 = 0;
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            HvlNotifyLongSpinWait();
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
        v7 = __rdtsc();
        v8 = (((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) - CurrentPrcb->StartCycles;
        IdleThread->CycleTime += v8;
        CurrentPrcb->StartCycles += v8;
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
        a1 = 2LL;
        __writecr8(2uLL);
      }
      CurrentPrcb->IdleHalt = 0;
    }
  }
}
