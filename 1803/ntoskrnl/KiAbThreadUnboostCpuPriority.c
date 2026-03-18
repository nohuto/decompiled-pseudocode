/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x1400BA07C
 * Callers:
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiClearPriorityFloor @ 0x1400BA210 (KiClearPriorityFloor.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 */

char __fastcall KiAbThreadUnboostCpuPriority(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // eax
  unsigned int v6; // eax
  struct _KPRCB *CurrentPrcb; // rbx
  char result; // al
  __int64 CurrentThread; // rdi
  bool v10; // zf
  __int64 v11; // rdx
  struct _KPRCB *v12; // rsi
  _KTHREAD *NextThread; // rsi
  __int64 v14; // r8
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+20h]

  v15[0] = 0LL;
  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v10 = !_BitScanForward(&v5, a2);
  v17 = v5;
  if ( !v10 )
  {
    do
    {
      KiClearPriorityFloor(BugCheckParameter1);
      v2 &= v2 - 1;
      v10 = !_BitScanForward(&v6, v2);
    }
    while ( !v10 );
    v17 = v6;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList(CurrentPrcb, v15);
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
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v12 = KeGetCurrentPrcb();
      v16 = 0;
      while ( 1 )
      {
        LOBYTE(v11) = 1;
        KiSetVpThreadSpinLockCount(v12, v11);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v12, 0LL);
        do
          KeYieldProcessorEx(&v16);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v14) = CurrentIrql;
      v10 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v14) == 0;
    }
    else
    {
      v10 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v10 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
