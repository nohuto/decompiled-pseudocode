/*
 * XREFs of KeSetBasePriorityThread @ 0x140064740
 * Callers:
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x1405D7720 (PfTLoggingWorker.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14002CE38 (KiPriQueueThreadPriorityChanged.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140041AE4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiComputeNewPriority @ 0x140042850 (KiComputeNewPriority.c)
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140064EC4 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     EtwTracePriority @ 0x140253A4C (EtwTracePriority.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // rsi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  bool v7; // r12
  LONG v8; // r15d
  char Saturation; // al
  int v10; // r11d
  char v11; // al
  int v12; // r11d
  int v13; // ecx
  unsigned __int64 CycleTime; // rdx
  unsigned __int64 v15; // r8
  _DISPATCHER_HEADER *volatile Queue; // rcx
  __int64 CurrentThread; // rsi
  char v19; // al
  _KTHREAD *NextThread; // r14
  __int64 v21; // r8
  int v22; // [rsp+30h] [rbp-10h] BYREF
  int v23; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h] BYREF
  int v25; // [rsp+80h] [rbp+40h] BYREF
  int v26; // [rsp+90h] [rbp+50h] BYREF
  int BasePriority; // [rsp+98h] [rbp+58h]

  Process = Thread->Process;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v24 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = Thread == CurrentPrcb->CurrentThread;
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v22);
    while ( Thread->ThreadLock );
  }
  v8 = Thread->BasePriority - Process->BasePriority;
  BasePriority = Thread->BasePriority;
  Saturation = Thread->Saturation;
  if ( Saturation )
    v8 = 16 * Saturation;
  Thread->Saturation = 0;
  if ( (int)abs32(Increment) >= 16 )
  {
    v19 = -1;
    if ( Increment > 0 )
      v19 = 1;
    Thread->Saturation = v19;
  }
  v10 = Increment + Process->BasePriority;
  if ( Process->BasePriority >= 16 )
  {
    if ( v10 >= 16 )
    {
      if ( v10 > 31 )
        v10 = 31;
      v26 = v10;
    }
    else
    {
      v10 = 16;
      v26 = 16;
    }
    goto LABEL_42;
  }
  if ( v10 >= 16 )
  {
    v10 = 15;
    v26 = 15;
  }
  else
  {
    if ( v10 <= 0 )
      v10 = 1;
    v26 = v10;
  }
  if ( Thread->Saturation )
  {
LABEL_42:
    v25 = v10;
    goto LABEL_17;
  }
  v11 = KiComputeNewPriority((__int64)Thread, 0);
  v13 = v12 - BasePriority + v11;
  if ( v13 >= 16 )
  {
    v25 = 15;
  }
  else
  {
    if ( v13 <= 0 )
      v13 = 1;
    v25 = v13;
  }
LABEL_17:
  KiSetBasePriorityAndClearDecrement(Thread, &v26, 0LL);
  if ( v25 != Thread->Priority )
  {
    if ( !v7 || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)Thread, 0LL);
      _enable();
    }
    v15 = CycleTime + (unsigned int)Thread->SchedulerApc.SpareByte1 * KiCyclesPerClockQuantum;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 4u);
    Thread->QuantumTarget = v15;
    KiSetPriorityThread((__int64)Thread, &v24, v25);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(&Queue->Lock, (__int64)Thread);
  else
    Thread->ThreadLock = 0LL;
  KiReadyDeferredReadyList(CurrentPrcb, &v24);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    goto LABEL_30;
  }
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v23);
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
    LOBYTE(v21) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v21) )
      goto LABEL_29;
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) != 0 )
  {
LABEL_51:
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
  }
LABEL_29:
  __writecr8(CurrentIrql);
LABEL_30:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v26, (__int64)&v25);
  return v8;
}
