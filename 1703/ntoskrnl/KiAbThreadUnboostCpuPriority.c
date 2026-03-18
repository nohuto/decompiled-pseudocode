/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x140114594
 * Callers:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiClearPriorityFloor @ 0x140114704 (KiClearPriorityFloor.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 */

char __fastcall KiAbThreadUnboostCpuPriority(ULONG_PTR BugCheckParameter1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // eax
  unsigned int v8; // eax
  struct _KPRCB *CurrentPrcb; // rbx
  char result; // al
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentThread; // rdi
  bool i; // zf
  _KTHREAD *NextThread; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  _QWORD *v19; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+78h] [rbp+20h] BYREF

  v19 = 0LL;
  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = !_BitScanForward(&v7, a2); !i; i = !_BitScanForward(&v8, v4) )
  {
    KiClearPriorityFloor(BugCheckParameter1);
    v4 &= v4 - 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v19, a3, a4);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, v11, v12);
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v16 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v16 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v16, v17);
      LOBYTE(v18) = CurrentIrql;
      i = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v18) == 0;
    }
    else
    {
      i = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !i )
    {
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
