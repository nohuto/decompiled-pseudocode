/*
 * XREFs of KiReadyOutSwappedThreads @ 0x1400EB350
 * Callers:
 *     KiInSwapProcesses @ 0x1400EB0B0 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x1400EB1B0 (KiOutSwapProcesses.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiReadyThread @ 0x1400FB8E0 (KiReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceReadyThread @ 0x1402AF168 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiReadyOutSwappedThreads(_QWORD *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v5; // rdi
  struct _KPRCB *v6; // r15
  volatile signed __int32 *v7; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  __int64 result; // rax
  __int64 CurrentThread; // rbx
  __int64 v13; // rdx
  struct _KPRCB *v14; // rdi
  _KTHREAD *NextThread; // rdi
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+58h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a1;
  do
  {
    v6 = KeGetCurrentPrcb();
    v7 = (volatile signed __int32 *)(v5 - 27);
    v5 = (_QWORD *)*v5;
    v20 = 0;
    SchedulerAssist = v6->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v17 = SchedulerAssist[5];
        SchedulerAssist[5] = v17 + 1;
        if ( v17 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(v6);
      }
    }
    while ( _interlockedbittestandset64(v7 + 16, 0LL) )
    {
      KiSetVpThreadSpinLockCount(v6, 0LL);
      do
        KeYieldProcessorEx(&v20);
      while ( *((_QWORD *)v7 + 8) );
      LOBYTE(v16) = 1;
      KiSetVpThreadSpinLockCount(v6, v16);
    }
    *((_BYTE *)v7 + 388) = 7;
    *((_QWORD *)v7 + 8) = 0LL;
    v9 = KeGetCurrentPrcb();
    v10 = v9->SchedulerAssist;
    if ( v10 )
    {
      if ( v9->NestingLevel <= 1u )
      {
        v18 = v10[5] - 1;
        v10[5] = v18;
        if ( !v18 && !*((_BYTE *)v10 + 25) && !*((_BYTE *)v10 + 27) )
          KiPerformUnboostKick(v9);
      }
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v7, *((unsigned __int8 *)v7 + 566), *((unsigned __int8 *)v7 + 567));
    result = KiReadyThread(CurrentPrcb, v7);
  }
  while ( v5 != a1 );
  if ( a2 < 2u )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v14 = KeGetCurrentPrcb();
      v19 = 0;
      while ( 1 )
      {
        LOBYTE(v13) = 1;
        KiSetVpThreadSpinLockCount(v14, v13);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v14, 0LL);
        do
          KeYieldProcessorEx(&v19);
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
      *(_BYTE *)(CurrentThread + 390) = a2;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, a2) )
        goto LABEL_11;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_11:
      result = a2;
      __writecr8(a2);
      return result;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_11;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)result )
      return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return result;
}
