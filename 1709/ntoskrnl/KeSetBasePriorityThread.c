/*
 * XREFs of KeSetBasePriorityThread @ 0x1400D38F0
 * Callers:
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x140687320 (PfTLoggingWorker.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiComputeNewPriority @ 0x140090D60 (KiComputeNewPriority.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D3C50 (KiSetBasePriorityAndClearDecrement.c)
 *     KiPriQueueThreadPriorityChanged @ 0x140122D70 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14027B720 (EtwTracePriority.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KTHREAD *CurrentThread; // r13
  LONG v7; // r12d
  char Saturation; // al
  int v9; // esi
  int v10; // r11d
  char v11; // al
  int v12; // r11d
  int v13; // ecx
  __int64 v14; // r8
  unsigned __int64 CycleTime; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int8 v17; // r8
  _DISPATCHER_HEADER *volatile Queue; // rcx
  unsigned __int8 v19; // r15
  __int64 v20; // rsi
  char v22; // al
  _KTHREAD *NextThread; // r14
  __int64 v24; // r8
  __int64 v25; // r8
  int v26; // [rsp+30h] [rbp-20h] BYREF
  int v27; // [rsp+34h] [rbp-1Ch] BYREF
  _QWORD *v28; // [rsp+38h] [rbp-18h] BYREF
  __int64 CurrentIrql; // [rsp+40h] [rbp-10h]
  int v30; // [rsp+90h] [rbp+40h] BYREF
  int v31; // [rsp+A0h] [rbp+50h] BYREF
  int BasePriority; // [rsp+A8h] [rbp+58h]

  Process = Thread->Process;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v28 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v26 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( Thread->ThreadLock );
  }
  v7 = Thread->BasePriority - Process->BasePriority;
  BasePriority = Thread->BasePriority;
  Saturation = Thread->Saturation;
  if ( Saturation )
    v7 = 16 * Saturation;
  Thread->Saturation = 0;
  v9 = 16;
  if ( (int)abs32(Increment) >= 16 )
  {
    v22 = 1;
    if ( Increment <= 0 )
      v22 = -1;
    Thread->Saturation = v22;
  }
  v10 = Increment + Process->BasePriority;
  if ( Process->BasePriority >= 16 )
  {
    if ( v10 >= 16 )
    {
      v9 = Increment + Process->BasePriority;
      if ( v10 > 31 )
        v9 = 31;
    }
    v31 = v9;
    v30 = v9;
  }
  else
  {
    if ( v10 >= 16 )
    {
      v10 = 15;
      v31 = 15;
    }
    else
    {
      if ( v10 <= 0 )
        v10 = 1;
      v31 = v10;
    }
    if ( Thread->Saturation )
    {
      v30 = v10;
    }
    else
    {
      v11 = KiComputeNewPriority((__int64)Thread, 0);
      v13 = v12 - BasePriority + v11;
      if ( v13 >= 16 )
      {
        v30 = 15;
      }
      else
      {
        if ( v13 <= 0 )
          v13 = 1;
        v30 = v13;
      }
    }
  }
  KiSetBasePriorityAndClearDecrement(Thread, &v31, 0LL);
  if ( v30 != Thread->Priority )
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
    v16 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    v17 = v30;
    Thread->QuantumTarget = v16;
    KiSetPriorityThread((__int64)Thread, &v28, v17);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(Queue, Thread);
  else
    Thread->ThreadLock = 0LL;
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v28, v14);
  v19 = CurrentIrql;
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    goto LABEL_29;
  }
  v20 = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v20, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
    {
      v24 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v24 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v20 + 643) = 32;
    *(_BYTE *)(v20 + 390) = v19;
    KiQueueReadyThread((__int64)CurrentPrcb, v20, v24);
    LOBYTE(v25) = v19;
    if ( !(unsigned __int8)KiSwapContext(v20, NextThread, v25) )
      goto LABEL_28;
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(v20 + 116) & 0x40) != 0 )
  {
LABEL_51:
    __writecr8(1uLL);
    *(_DWORD *)(v20 + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
  }
LABEL_28:
  __writecr8(v19);
LABEL_29:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v31, (__int64)&v30);
  return v7;
}
