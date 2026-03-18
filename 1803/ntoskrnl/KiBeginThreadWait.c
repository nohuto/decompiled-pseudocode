/*
 * XREFs of KiBeginThreadWait @ 0x1401268C0
 * Callers:
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x140086EF0 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x140088D40 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x1401264C0 (KeRemovePriQueue.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiBeginThreadWait(__int64 a1, char a2, int a3, char a4)
{
  unsigned __int8 v4; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  char v10; // bp
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  struct _KPRCB *v14; // rbx
  __int64 CurrentThread; // rsi
  struct _KPRCB *v16; // rbp
  _KTHREAD *NextThread; // rbp
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  int v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+70h] [rbp+18h]
  int v24; // [rsp+78h] [rbp+20h] BYREF

  v23 = a3;
  v4 = *(_BYTE *)(a1 + 390);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = a2;
    if ( a4 )
      *(_DWORD *)(a1 + 116) |= 0x10u;
    CurrentPrcb = KeGetCurrentPrcb();
    v22 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = SchedulerAssist[5];
        SchedulerAssist[5] = v19 + 1;
        if ( v19 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      do
        KeYieldProcessorEx(&v22);
      while ( *(_QWORD *)(a1 + 64) );
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    }
    if ( !*(_BYTE *)(a1 + 193) || *(_WORD *)(a1 + 486) || v4 )
      break;
    KiReleaseThreadLockSafe(a1);
    __writecr8(1uLL);
    KiDeliverApc(0, 0LL, 0LL);
    KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a1 + 390) = 0;
  }
  v10 = v23;
  if ( !a4 )
  {
    if ( !*(_BYTE *)(a1 + 194) || !a2 )
      goto LABEL_9;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a2 + a1 + 114) )
  {
    *(_BYTE *)(a2 + a1 + 114) = 0;
    v20 = 257;
LABEL_18:
    KiReleaseThreadLockSafe(a1);
    v14 = KeGetCurrentPrcb();
    if ( v4 >= 2u )
    {
      if ( v14->NextThread && !v14->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v14, 2);
      return v20;
    }
    CurrentThread = (__int64)v14->CurrentThread;
    if ( v14->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v14->CurrentThread, 0);
      v16 = KeGetCurrentPrcb();
      v24 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v16, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v14->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v16, 0);
        do
          KeYieldProcessorEx(&v24);
        while ( v14->PrcbLock );
      }
      NextThread = v14->NextThread;
      v14->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v14, CurrentThread, 0LL);
      _enable();
      v14->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v18 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v18 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v4;
      KiQueueReadyThread(v14, CurrentThread, v18);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v4) )
        goto LABEL_21;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_21:
      __writecr8(v4);
      return v20;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_21;
  }
  if ( a2 && *(_QWORD *)(a1 + 168) != a1 + 168 )
  {
    *(_BYTE *)(a1 + 194) = 1;
LABEL_17:
    v20 = 192;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a1 + 114) )
  {
    *(_BYTE *)(a1 + 114) = 0;
    v20 = 257;
    goto LABEL_18;
  }
LABEL_9:
  *(_BYTE *)(a1 + 388) = 5;
  *(_BYTE *)(a1 + 643) = v10;
  *(_QWORD *)(a1 + 64) = 0LL;
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v21 = v12[5] - 1;
      v12[5] = v21;
      if ( !v21 && !*((_BYTE *)v12 + 25) && !*((_BYTE *)v12 + 27) )
        KiPerformUnboostKick(v11);
    }
  }
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  return 0LL;
}
