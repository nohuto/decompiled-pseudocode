/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x1400AAD30
 * Callers:
 *     ExpWorkerThread @ 0x1400617A0 (ExpWorkerThread.c)
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 *     KiConnectInterrupt @ 0x1400B3034 (KiConnectInterrupt.c)
 *     PnpSendIrp @ 0x1400FBD5C (PnpSendIrp.c)
 *     KeMaskInterrupt @ 0x140129578 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x14012D8F4 (KiDisconnectInterruptCommon.c)
 *     PpmInstallFeedbackCounters @ 0x140137C54 (PpmInstallFeedbackCounters.c)
 *     MakeGdtReadOnly @ 0x14013959C (MakeGdtReadOnly.c)
 *     KiInitMachineDependent @ 0x1401433D4 (KiInitMachineDependent.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014ABCC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExAllocateCacheAwarePushLock @ 0x140152F00 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x140154D94 (ExpSaInitialize.c)
 *     IopPassiveInterruptWorker @ 0x1401FE9E0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14020260C (KiDynamicProcessorInitialization.c)
 *     KeRevertToUserAffinityThread @ 0x140202A00 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x140202A50 (KeRevertToUserAffinityThreadEx.c)
 *     KiDeregisterNmiSxCallback @ 0x140203AB4 (KiDeregisterNmiSxCallback.c)
 *     KiInterruptDispatchCommon @ 0x14020AE24 (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x14023A84C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x14023C278 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x140240790 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140240BF8 (PpmSetSimulatedLoad.c)
 *     IopLiveDumpUncorralProcessors @ 0x14042C168 (IopLiveDumpUncorralProcessors.c)
 *     PnpCallAddDevice @ 0x140552E6C (PnpCallAddDevice.c)
 *     PpmIdleInitializeConcurrency @ 0x1405B5B54 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1406947A8 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 *     ViIsBTSSupported @ 0x1407B5B10 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x1407B5C34 (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140838CD8 (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x14083ACD8 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x1400A8760 (KiSetSystemAffinityThread.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x14027B30C (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x14027B9A4 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  struct _KTHREAD *CurrentThread; // rsi
  PGROUP_AFFINITY p_UserAffinity; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int IdealProcessor; // ebp
  unsigned int UserIdealProcessor; // r8d
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  unsigned __int16 Group; // cx
  __int64 v11; // rax
  bool v12; // zf
  _KTHREAD *NextThread; // rsi
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *v18; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  p_UserAffinity = PreviousAffinity;
  if ( (CurrentThread->MiscFlags & 8) == 0 )
    return;
  if ( PreviousAffinity->Reserved[0] | (unsigned __int16)(PreviousAffinity->Reserved[1] | PreviousAffinity->Reserved[2]) )
    return;
  if ( PreviousAffinity->Mask )
  {
    Group = PreviousAffinity->Group;
    if ( Group >= LOWORD(KeActiveProcessors[0]) )
      return;
    v11 = qword_140401408[Group];
    v12 = (v11 & p_UserAffinity->Mask) == 0;
    p_UserAffinity->Mask &= v11;
    if ( v12 )
      return;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( CurrentThread->ThreadLock );
  }
  IdealProcessor = CurrentThread->IdealProcessor;
  if ( p_UserAffinity->Mask )
  {
    UserIdealProcessor = 1280;
  }
  else
  {
    UserIdealProcessor = CurrentThread->UserIdealProcessor;
    p_UserAffinity = &CurrentThread->UserAffinity;
    CurrentThread->MiscFlags &= ~8u;
  }
  v18 = 0LL;
  KiSetSystemAffinityThread((__int64 *)CurrentPrcb, (__int64)p_UserAffinity, UserIdealProcessor, (__int64)&v18);
  v8 = CurrentThread->IdealProcessor;
  CurrentThread->ThreadLock = 0LL;
  if ( (xmmword_140401150 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v8);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, p_UserAffinity, v7, v8);
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v18, v7);
  if ( CurrentIrql < 2u )
  {
    v9 = (__int64)CurrentPrcb->CurrentThread;
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
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v9, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v9 + 643) = 32;
      *(_BYTE *)(v9 + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, v9, v14);
      LOBYTE(v15) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(v9, NextThread, v15) )
        goto LABEL_15;
    }
    else if ( (*(_DWORD *)(v9 + 116) & 0x40) == 0 )
    {
LABEL_15:
      __writecr8(CurrentIrql);
      return;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v9 + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_15;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
}
