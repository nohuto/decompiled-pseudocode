/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x140026160
 * Callers:
 *     PnpSendIrp @ 0x140080D08 (PnpSendIrp.c)
 *     ExpWorkerThread @ 0x1400FC140 (ExpWorkerThread.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     KeMaskInterrupt @ 0x14014BBAC (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x14014BCCC (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14014C1F4 (KiConnectInterrupt.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014F6A4 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiInitMachineDependent @ 0x14015D6B8 (KiInitMachineDependent.c)
 *     PpmInstallFeedbackCounters @ 0x14015FAC4 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x140163210 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x140163CC0 (ExpSaInitialize.c)
 *     MakeGdtReadOnly @ 0x140164E58 (MakeGdtReadOnly.c)
 *     IopPassiveInterruptWorker @ 0x1401F88D0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x1401FC84C (KiDynamicProcessorInitialization.c)
 *     KeRevertToUserAffinityThread @ 0x1401FCBF0 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1401FCC40 (KeRevertToUserAffinityThreadEx.c)
 *     KeDeregisterNmiCallback @ 0x1401FD710 (KeDeregisterNmiCallback.c)
 *     KiInterruptDispatchCommon @ 0x140204C2C (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x140227A7C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402293C8 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x14022D354 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14022D688 (PpmSetSimulatedLoad.c)
 *     IopLiveDumpUncorralProcessors @ 0x140417138 (IopLiveDumpUncorralProcessors.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x1405BFF64 (PpmIdleInitializeConcurrency.c)
 *     PnpCallAddDevice @ 0x1405C6CE0 (PnpCallAddDevice.c)
 *     CmInitializeProcessor @ 0x14066A040 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 *     ViIsBTSSupported @ 0x140773D54 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140773E78 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140807090 (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x140817D54 (KiComputeNumaCosts.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSetSystemAffinityThread @ 0x140113A08 (KiSetSystemAffinityThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x140253648 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x140253C7C (EtwTraceThreadAffinity.c)
 */

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  struct _KTHREAD *CurrentThread; // rsi
  PGROUP_AFFINITY p_UserAffinity; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int IdealProcessor; // ebp
  __int64 UserIdealProcessor; // r8
  __int64 v7; // r9
  _KTHREAD *v8; // rdi
  unsigned __int16 Group; // cx
  __int64 v10; // rax
  bool v11; // zf
  _KTHREAD *NextThread; // rsi
  __int64 v13; // r8
  int v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  p_UserAffinity = PreviousAffinity;
  if ( (CurrentThread->MiscFlags & 8) == 0 )
    return;
  if ( PreviousAffinity->Reserved[0] | (unsigned __int16)(PreviousAffinity->Reserved[1] | PreviousAffinity->Reserved[2]) )
    return;
  if ( PreviousAffinity->Mask )
  {
    Group = PreviousAffinity->Group;
    if ( Group >= (unsigned __int16)KeActiveProcessors )
      return;
    v10 = qword_1403E42B8[Group];
    v11 = (v10 & p_UserAffinity->Mask) == 0;
    p_UserAffinity->Mask &= v10;
    if ( v11 )
      return;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( CurrentThread->ThreadLock );
  }
  IdealProcessor = CurrentThread->IdealProcessor;
  if ( p_UserAffinity->Mask )
  {
    UserIdealProcessor = 640LL;
  }
  else
  {
    UserIdealProcessor = CurrentThread->UserIdealProcessor;
    p_UserAffinity = &CurrentThread->UserAffinity;
    CurrentThread->MiscFlags &= ~8u;
  }
  v16 = 0LL;
  KiSetSystemAffinityThread(CurrentPrcb, p_UserAffinity, UserIdealProcessor, &v16);
  v7 = CurrentThread->IdealProcessor;
  CurrentThread->ThreadLock = 0LL;
  if ( (xmmword_1403E4010 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v7);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, p_UserAffinity);
  KiReadyDeferredReadyList(CurrentPrcb, &v16);
  if ( CurrentIrql < 2u )
  {
    v8 = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v15);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, v8, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      v8->WaitReason = 32;
      v8->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, v8);
      LOBYTE(v13) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(v8, NextThread, v13) )
        goto LABEL_15;
    }
    else if ( (v8->MiscFlags & 0x40) == 0 )
    {
LABEL_15:
      __writecr8(CurrentIrql);
      return;
    }
    __writecr8(1uLL);
    v8->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
}
