/*
 * XREFs of KiIdleLoop @ 0x1401AE5C0
 * Callers:
 *     KiSystemStartup @ 0x14046F010 (KiSystemStartup.c)
 * Callees:
 *     KiIdleSchedule @ 0x1400605A0 (KiIdleSchedule.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiRetireDpcList @ 0x1401073A0 (KiRetireDpcList.c)
 *     PoIdle @ 0x14010B740 (PoIdle.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     SwapContext @ 0x1401B1E80 (SwapContext.c)
 */

void __fastcall __noreturn KiIdleLoop(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *IdleThread; // rdi
  int v4; // esi
  _KTHREAD *NextThread; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
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
        KiQuantumEnd(a1, a2);
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
        v4 = 0;
        do
        {
          if ( (++v4 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
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
        v6 = __rdtsc();
        v7 = (((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) - CurrentPrcb->StartCycles;
        IdleThread->CycleTime += v7;
        CurrentPrcb->StartCycles += v7;
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
      if ( KiIdleSchedule((__int64)CurrentPrcb, a2) )
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
        PoIdle((ULONG_PTR)CurrentPrcb);
        _enable();
        a1 = 2LL;
        __writecr8(2uLL);
      }
      CurrentPrcb->IdleHalt = 0;
    }
  }
}
