/*
 * XREFs of KeSetPriorityThread @ 0x1400EA760
 * Callers:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     CcApplyLowIoPriorityToThread @ 0x140042A4C (CcApplyLowIoPriorityToThread.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14009B00C (CcBoostLowPriorityWorkerThread.c)
 *     CmpSetPriorityThread @ 0x1400D1A88 (CmpSetPriorityThread.c)
 *     MiZeroInParallelWorker @ 0x1401386E0 (MiZeroInParallelWorker.c)
 *     MiZeroInParallel @ 0x14013A938 (MiZeroInParallel.c)
 *     PfTSetTraceWorkerPriority @ 0x14014F258 (PfTSetTraceWorkerPriority.c)
 *     KeSwapProcessOrStack @ 0x140176C50 (KeSwapProcessOrStack.c)
 *     MiMappedPageWriter @ 0x140176F10 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x1401777E0 (KeBalanceSetManager.c)
 *     KiExecuteDpc @ 0x140179020 (KiExecuteDpc.c)
 *     MiDereferenceSegmentThread @ 0x14017CE40 (MiDereferenceSegmentThread.c)
 *     FsRtlWorkerThread @ 0x140185DA0 (FsRtlWorkerThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140247B84 (KeSetThreadSchedulerAssist.c)
 *     MiPartitionWorkingSetManager @ 0x14025B100 (MiPartitionWorkingSetManager.c)
 *     ExRegisterBootDevice @ 0x1402B86B0 (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1408210A8 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
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
KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  KPRIORITY v2; // edi
  int v4; // r12d
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *CurrentThread; // r14
  char PriorityDecrement; // cl
  char v9; // al
  KPRIORITY v10; // ebp
  unsigned __int64 CycleTime; // rdx
  unsigned __int64 v12; // rcx
  char BasePriority; // al
  __int64 v14; // rdi
  struct _KPRCB *v16; // r14
  _KTHREAD *NextThread; // r14
  int v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v2 = Priority;
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v4 = 0;
  v20 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    LOBYTE(Priority) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, *(_QWORD *)&Priority);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v18);
    while ( Thread->ThreadLock );
  }
  PriorityDecrement = Thread->PriorityDecrement;
  v9 = Thread->Priority;
  v10 = v9;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
    {
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
      v9 = Thread->Priority;
    }
    Thread->PriorityDecrement = 0;
  }
  if ( v2 != v9 )
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
    v12 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    BasePriority = Thread->BasePriority;
    Thread->QuantumTarget = v12;
    if ( BasePriority && !v2 )
      v2 = 1;
    if ( (BasePriority < 16 || v2 >= 16) && (unsigned __int8)KiSetPriorityThread(Thread, &v20, (unsigned int)v2) )
      v4 = Thread->Priority;
  }
  KiReleaseThreadLockSafe((__int64)Thread);
  KiReadyDeferredReadyList(CurrentPrcb, &v20);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    goto LABEL_21;
  }
  v14 = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
    v16 = KeGetCurrentPrcb();
    v19 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount(v16, 1LL);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v16, 0LL);
      do
        KeYieldProcessorEx(&v19);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v14, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v14 + 643) = 32;
    *(_BYTE *)(v14 + 390) = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v14);
    if ( !(unsigned __int8)KiSwapContext(v14, NextThread, CurrentIrql) )
      goto LABEL_20;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(v14 + 116) & 0x40) != 0 )
  {
LABEL_32:
    __writecr8(1uLL);
    *(_DWORD *)(v14 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
  }
LABEL_20:
  __writecr8(CurrentIrql);
LABEL_21:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
  {
    if ( v4 )
      EtwTracePriority((_DWORD)Thread, 1328, v10, v4, 0LL);
  }
  return v10;
}
