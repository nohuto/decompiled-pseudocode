/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x140005480
 * Callers:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     PnpSetDeviceAffinityThread @ 0x140006F84 (PnpSetDeviceAffinityThread.c)
 *     KiAcquireInterruptConnectLock @ 0x140169164 (KiAcquireInterruptConnectLock.c)
 *     MakeGdtReadOnly @ 0x140175E58 (MakeGdtReadOnly.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1401790D0 (KiSetSystemAffinityThreadToProcessor.c)
 *     PpmInstallFeedbackCounters @ 0x14017F278 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x140182760 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x1401833F8 (ExpSaInitialize.c)
 *     KeSetSystemAffinityThreadEx @ 0x140186D80 (KeSetSystemAffinityThreadEx.c)
 *     IopPassiveInterruptWorker @ 0x14023B3B0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14023FB84 (KiDynamicProcessorInitialization.c)
 *     KiInterruptDispatchCommon @ 0x1402491BC (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x140271C7C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140273868 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x140277DC0 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140278154 (PpmSetSimulatedLoad.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1402BDA4C (ExpSaPageGroupDescriptorAllocate.c)
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140476E00 (PopEndMirroring.c)
 *     IopLiveDumpCorralProcessors @ 0x140481D94 (IopLiveDumpCorralProcessors.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x140640180 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1406F7C08 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 *     ViIsBTSSupported @ 0x140823804 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140823928 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1408AEF00 (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x1408B32B4 (KiComputeNumaCosts.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiSetSystemAffinityThread @ 0x14003AA28 (KiSetSystemAffinityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x1402AEC2C (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1402AF470 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v4; // rdx
  unsigned __int16 Group; // cx
  char v6; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *CurrentThread; // rsi
  int MiscFlags; // eax
  unsigned int IdealProcessor; // r14d
  unsigned int v12; // r11d
  __int64 v13; // rdx
  _KTHREAD *v14; // rdi
  __int64 v15; // rdx
  struct _KPRCB *v16; // rsi
  _KTHREAD *NextThread; // rsi
  __int64 v18; // r8
  struct _GROUP_AFFINITY v19; // [rsp+20h] [rbp-10h]
  int v20; // [rsp+70h] [rbp+40h] BYREF
  int v21; // [rsp+78h] [rbp+48h] BYREF
  __int64 v22; // [rsp+80h] [rbp+50h] BYREF

  v19 = (struct _GROUP_AFFINITY)0LL;
  v4 = 1LL;
  Group = Affinity->Group;
  if ( Group >= LOWORD(KeActiveProcessors[0])
    || (*(_QWORD *)&KeActiveProcessors[2 * Group + 2] & Affinity->Mask) == 0
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    Affinity->Mask &= *(_QWORD *)&KeActiveProcessors[2 * Affinity->Group + 2];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount(CurrentPrcb, v4);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v20);
    while ( CurrentThread->ThreadLock );
    LOBYTE(v4) = 1;
  }
  MiscFlags = CurrentThread->MiscFlags;
  IdealProcessor = CurrentThread->IdealProcessor;
  if ( (MiscFlags & 8) != 0 )
  {
    v19.Group = CurrentThread->Affinity.Group;
    v19.Mask = CurrentThread->Affinity.Mask;
  }
  else
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
  }
  v22 = 0LL;
  if ( v6 )
    KiSetSystemAffinityThread(CurrentPrcb, Affinity, 1280LL, &v22);
  KiReleaseThreadLockSafe(CurrentThread);
  if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v12);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  KiReadyDeferredReadyList(CurrentPrcb, &v22);
  if ( CurrentIrql < 2u )
  {
    v14 = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v16 = KeGetCurrentPrcb();
      v21 = 0;
      while ( 1 )
      {
        LOBYTE(v15) = 1;
        KiSetVpThreadSpinLockCount(v16, v15);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v16, 0LL);
        do
          KeYieldProcessorEx(&v21);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, v14, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      v14->WaitReason = 32;
      v14->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, v14);
      LOBYTE(v18) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(v14, NextThread, v18) )
        goto LABEL_18;
    }
    else if ( (v14->MiscFlags & 0x40) == 0 )
    {
LABEL_18:
      __writecr8(CurrentIrql);
      goto LABEL_19;
    }
    __writecr8(1uLL);
    v14->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_18;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
  {
    LOBYTE(v13) = 2;
    KiRequestSoftwareInterrupt(CurrentPrcb, v13);
  }
LABEL_19:
  if ( PreviousAffinity )
    *PreviousAffinity = v19;
}
