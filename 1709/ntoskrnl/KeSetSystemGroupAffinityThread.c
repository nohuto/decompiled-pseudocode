/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x1400A73D0
 * Callers:
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 *     KiAcquireInterruptConnectLock @ 0x1400B3240 (KiAcquireInterruptConnectLock.c)
 *     PnpSetDeviceAffinityThread @ 0x1400FBE04 (PnpSetDeviceAffinityThread.c)
 *     PpmInstallFeedbackCounters @ 0x140137C54 (PpmInstallFeedbackCounters.c)
 *     MakeGdtReadOnly @ 0x14013959C (MakeGdtReadOnly.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1401435F0 (KiSetSystemAffinityThreadToProcessor.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014ABCC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExAllocateCacheAwarePushLock @ 0x140152F00 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x140154D94 (ExpSaInitialize.c)
 *     IopPassiveInterruptWorker @ 0x1401FE9E0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14020260C (KiDynamicProcessorInitialization.c)
 *     KeSetSystemAffinityThreadEx @ 0x140202B30 (KeSetSystemAffinityThreadEx.c)
 *     KiInterruptDispatchCommon @ 0x14020AE24 (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x14023A84C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x14023C278 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x140240790 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140240BF8 (PpmSetSimulatedLoad.c)
 *     IopLiveDumpCorralProcessors @ 0x14042B290 (IopLiveDumpCorralProcessors.c)
 *     PopEndMirroring @ 0x140432FE0 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
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

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v2; // r8
  unsigned __int16 Group; // cx
  char v6; // r15
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rdi
  int MiscFlags; // eax
  unsigned int IdealProcessor; // r12d
  __int64 v12; // r9
  __int64 v13; // rbx
  _KTHREAD *NextThread; // rdi
  __int64 v15; // r8
  struct _GROUP_AFFINITY v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v16 = (struct _GROUP_AFFINITY)0LL;
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
  v17 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  IdealProcessor = CurrentThread->IdealProcessor;
  if ( (MiscFlags & 8) != 0 )
  {
    v16.Group = CurrentThread->Affinity.Group;
    v16.Mask = CurrentThread->Affinity.Mask;
  }
  else
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
  }
  v19 = 0LL;
  if ( v6 )
    KiSetSystemAffinityThread(CurrentPrcb, Affinity, 1280LL, &v19);
  v12 = CurrentThread->IdealProcessor;
  CurrentThread->ThreadLock = 0LL;
  if ( (xmmword_140401150 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v12);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity, v2, v12);
  KiReadyDeferredReadyList(CurrentPrcb, &v19, v2, v12);
  if ( CurrentIrql < 2u )
  {
    v13 = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v13, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v15 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v15 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v13 + 643) = 32;
      *(_BYTE *)(v13 + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, v13, v15);
      if ( !(unsigned __int8)KiSwapContext(v13, NextThread, CurrentIrql) )
        goto LABEL_18;
    }
    else if ( (*(_DWORD *)(v13 + 116) & 0x40) == 0 )
    {
LABEL_18:
      __writecr8(CurrentIrql);
      goto LABEL_19;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v13 + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_18;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
LABEL_19:
  if ( PreviousAffinity )
    *PreviousAffinity = v16;
}
