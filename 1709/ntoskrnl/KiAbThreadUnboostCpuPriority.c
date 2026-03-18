/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x1400A7184
 * Callers:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiClearPriorityFloor @ 0x1400A72F4 (KiClearPriorityFloor.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 */

char __fastcall KiAbThreadUnboostCpuPriority(ULONG_PTR BugCheckParameter1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // eax
  unsigned int v8; // eax
  struct _KPRCB *CurrentPrcb; // rbx
  char result; // al
  __int64 CurrentThread; // rdi
  bool i; // zf
  _KTHREAD *NextThread; // rsi
  __int64 v14; // r8
  __int64 v15; // r8
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v16[0] = 0LL;
  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = !_BitScanForward(&v7, a2); !i; i = !_BitScanForward(&v8, v4) )
  {
    KiClearPriorityFloor(BugCheckParameter1);
    v4 &= v4 - 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList(CurrentPrcb, v16, a3, a4);
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
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v17);
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
        v14 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v14 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v14);
      LOBYTE(v15) = CurrentIrql;
      i = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v15) == 0;
    }
    else
    {
      i = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !i )
    {
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
