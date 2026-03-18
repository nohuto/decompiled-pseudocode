/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x140112860
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140080DB0 (PnpSetDeviceAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     KiAcquireInterruptConnectLock @ 0x14014C400 (KiAcquireInterruptConnectLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014F6A4 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14015D8E0 (KiSetSystemAffinityThreadToProcessor.c)
 *     PpmInstallFeedbackCounters @ 0x14015FAC4 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x140163210 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x140163CC0 (ExpSaInitialize.c)
 *     MakeGdtReadOnly @ 0x140164E58 (MakeGdtReadOnly.c)
 *     IopPassiveInterruptWorker @ 0x1401F88D0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x1401FC84C (KiDynamicProcessorInitialization.c)
 *     KeSetSystemAffinityThreadEx @ 0x1401FCD10 (KeSetSystemAffinityThreadEx.c)
 *     KiInterruptDispatchCommon @ 0x140204C2C (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x140227A7C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402293C8 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x14022D354 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14022D688 (PpmSetSimulatedLoad.c)
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x14040CD30 (PopEndMirroring.c)
 *     IopLiveDumpCorralProcessors @ 0x140416250 (IopLiveDumpCorralProcessors.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x1405BFF64 (PpmIdleInitializeConcurrency.c)
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

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  unsigned __int16 Group; // cx
  char v5; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *CurrentThread; // rsi
  int MiscFlags; // eax
  unsigned int IdealProcessor; // r12d
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v16; // r8
  struct _GROUP_AFFINITY v17; // [rsp+20h] [rbp-10h]
  int v18; // [rsp+70h] [rbp+40h] BYREF
  int v19; // [rsp+78h] [rbp+48h] BYREF
  __int64 v20; // [rsp+80h] [rbp+50h] BYREF

  v17 = (struct _GROUP_AFFINITY)0LL;
  Group = Affinity->Group;
  if ( Group >= LOWORD(KeActiveProcessors[0])
    || (*(_QWORD *)&KeActiveProcessors[2 * Group + 2] & Affinity->Mask) == 0
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    Affinity->Mask &= *(_QWORD *)&KeActiveProcessors[2 * Affinity->Group + 2];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v18);
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  IdealProcessor = CurrentThread->IdealProcessor;
  if ( (MiscFlags & 8) != 0 )
  {
    v17.Group = CurrentThread->Affinity.Group;
    v17.Mask = CurrentThread->Affinity.Mask;
  }
  else
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
  }
  v20 = 0LL;
  if ( v5 )
    KiSetSystemAffinityThread(CurrentPrcb, Affinity, 640LL, &v20);
  v11 = CurrentThread->IdealProcessor;
  CurrentThread->ThreadLock = 0LL;
  if ( (xmmword_1403E4010 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v11);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  KiReadyDeferredReadyList(CurrentPrcb, &v20);
  if ( CurrentIrql < 2u )
  {
    v14 = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, v12, v13);
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
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
      LOBYTE(v16) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(v14, NextThread, v16) )
        goto LABEL_18;
    }
    else if ( (*(_DWORD *)(v14 + 116) & 0x40) == 0 )
    {
LABEL_18:
      __writecr8(CurrentIrql);
      goto LABEL_19;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v14 + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_18;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
LABEL_19:
  if ( PreviousAffinity )
    *PreviousAffinity = v17;
}
