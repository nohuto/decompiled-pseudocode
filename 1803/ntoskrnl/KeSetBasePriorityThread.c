/*
 * XREFs of KeSetBasePriorityThread @ 0x14006AEA0
 * Callers:
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x14062C1C0 (PfTLoggingWorker.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B36B0 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14006B24C (KiSetBasePriorityAndClearDecrement.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400AF234 (KiPriQueueThreadPriorityChanged.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiComputeNewPriority @ 0x1400EB8C0 (KiComputeNewPriority.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1402AF09C (EtwTracePriority.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // r14
  LONG v3; // r15d
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KTHREAD *CurrentThread; // r13
  LONG v7; // r12d
  char Saturation; // al
  int v9; // esi
  char v10; // r8
  int v11; // ecx
  int v12; // edx
  int v13; // r14d
  char v14; // al
  int v15; // eax
  unsigned __int64 CycleTime; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  _DISPATCHER_HEADER *volatile Queue; // rcx
  __int64 v20; // rdx
  unsigned __int8 v21; // r15
  __int64 v22; // rsi
  __int64 v24; // rdx
  struct _KPRCB *v25; // r14
  _KTHREAD *NextThread; // r14
  __int64 v27; // r8
  int v28; // [rsp+30h] [rbp-20h] BYREF
  int v29; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h] BYREF
  __int64 CurrentIrql; // [rsp+40h] [rbp-10h]
  unsigned int v32; // [rsp+90h] [rbp+40h] BYREF
  int v33; // [rsp+A0h] [rbp+50h] BYREF
  int BasePriority; // [rsp+A8h] [rbp+58h]

  Process = Thread->Process;
  v3 = Increment;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v30 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v28 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    LOBYTE(Increment) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, *(_QWORD *)&Increment);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v28);
    while ( Thread->ThreadLock );
  }
  v7 = Thread->BasePriority - Process->BasePriority;
  BasePriority = Thread->BasePriority;
  Saturation = Thread->Saturation;
  if ( Saturation )
    v7 = 16 * Saturation;
  v9 = 16;
  Thread->Saturation = 0;
  v10 = 0;
  if ( (int)abs32(v3) >= 16 )
  {
    v10 = 1;
    if ( v3 <= 0 )
      v10 = -1;
    Thread->Saturation = v10;
  }
  v11 = Process->BasePriority;
  v12 = v3 + v11;
  v33 = v3 + v11;
  if ( (char)v11 < 16 )
  {
    if ( v12 >= 16 )
    {
      v12 = 15;
      v13 = 15;
    }
    else
    {
      v13 = v3 + v11;
      if ( v12 > 0 )
        goto LABEL_10;
      v12 = 1;
      v13 = 1;
    }
    v33 = v12;
LABEL_10:
    if ( v10 )
    {
      v32 = v12;
    }
    else
    {
      v14 = KiComputeNewPriority(Thread, 0LL);
      v15 = v13 - BasePriority + v14;
      if ( v15 >= 16 )
      {
        v32 = 15;
      }
      else
      {
        if ( v15 <= 0 )
          v15 = 1;
        v32 = v15;
      }
    }
    goto LABEL_15;
  }
  if ( v12 >= 16 )
  {
    v9 = v3 + v11;
    if ( v12 > 31 )
      v9 = 31;
  }
  v33 = v9;
  v32 = v9;
LABEL_15:
  KiSetBasePriorityAndClearDecrement(Thread, &v33, 0LL);
  if ( v32 != Thread->Priority )
  {
    if ( Thread != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)Thread, 0LL);
      _enable();
    }
    v17 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    v18 = v32;
    Thread->QuantumTarget = v17;
    KiSetPriorityThread(Thread, &v30, v18);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(Queue, Thread);
  else
    KiReleaseThreadLockSafe((__int64)Thread);
  KiReadyDeferredReadyList(CurrentPrcb, &v30);
  v21 = CurrentIrql;
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      LOBYTE(v20) = 2;
      KiRequestSoftwareInterrupt(CurrentPrcb, v20);
    }
    goto LABEL_27;
  }
  v22 = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
    v25 = KeGetCurrentPrcb();
    v29 = 0;
    while ( 1 )
    {
      LOBYTE(v24) = 1;
      KiSetVpThreadSpinLockCount(v25, v24);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v25, 0LL);
      do
        KeYieldProcessorEx(&v29);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v22, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v22 + 643) = 32;
    *(_BYTE *)(v22 + 390) = v21;
    KiQueueReadyThread(CurrentPrcb, v22);
    LOBYTE(v27) = v21;
    if ( !(unsigned __int8)KiSwapContext(v22, NextThread, v27) )
      goto LABEL_26;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(v22 + 116) & 0x40) != 0 )
  {
LABEL_52:
    __writecr8(1uLL);
    *(_DWORD *)(v22 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
  }
LABEL_26:
  __writecr8(v21);
LABEL_27:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v33, (__int64)&v32);
  return v7;
}
