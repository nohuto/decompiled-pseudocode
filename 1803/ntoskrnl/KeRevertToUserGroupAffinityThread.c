/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x140005230
 * Callers:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     PnpSendIrp @ 0x140006EE4 (PnpSendIrp.c)
 *     ExpWorkerThread @ 0x1401261B0 (ExpWorkerThread.c)
 *     KeMaskInterrupt @ 0x1401688E4 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x1401689FC (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x140168FFC (KiConnectInterrupt.c)
 *     MakeGdtReadOnly @ 0x140175E58 (MakeGdtReadOnly.c)
 *     KiInitMachineDependent @ 0x140178EA4 (KiInitMachineDependent.c)
 *     PpmInstallFeedbackCounters @ 0x14017F278 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x140182760 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x1401833F8 (ExpSaInitialize.c)
 *     IopPassiveInterruptWorker @ 0x14023B3B0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14023FB84 (KiDynamicProcessorInitialization.c)
 *     KeRevertToUserAffinityThread @ 0x140240060 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1402400B0 (KeRevertToUserAffinityThreadEx.c)
 *     KiDeregisterNmiSxCallback @ 0x140240F44 (KiDeregisterNmiSxCallback.c)
 *     KiInterruptDispatchCommon @ 0x1402491BC (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x140271C7C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140273868 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x140277DC0 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140278154 (PpmSetSimulatedLoad.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1402BDA4C (ExpSaPageGroupDescriptorAllocate.c)
 *     IopLiveDumpUncorralProcessors @ 0x140482C98 (IopLiveDumpUncorralProcessors.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 *     PnpCallAddDevice @ 0x140604510 (PnpCallAddDevice.c)
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

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  struct _KTHREAD *CurrentThread; // rsi
  PGROUP_AFFINITY p_UserAffinity; // rbx
  __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int IdealProcessor; // ebp
  __int64 UserIdealProcessor; // r8
  unsigned int v8; // r11d
  __int64 v9; // rdx
  _KTHREAD *v10; // rbx
  bool v11; // zf
  unsigned __int16 Group; // cx
  __int64 v13; // rax
  __int64 v14; // rdx
  struct _KPRCB *v15; // rsi
  _KTHREAD *NextThread; // rsi
  __int64 v17; // r8
  int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  p_UserAffinity = PreviousAffinity;
  if ( (CurrentThread->MiscFlags & 8) != 0 )
  {
    v3 = PreviousAffinity->Reserved[2];
    LOWORD(v3) = PreviousAffinity->Reserved[0] | PreviousAffinity->Reserved[1] | v3;
    if ( !(_WORD)v3 )
    {
      if ( !PreviousAffinity->Mask
        || (Group = PreviousAffinity->Group, Group < (unsigned __int16)KeActiveProcessors)
        && (v13 = qword_14044C5D8[Group], v11 = (v13 & p_UserAffinity->Mask) == 0, p_UserAffinity->Mask &= v13, !v11) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = 0;
        while ( 1 )
        {
          LOBYTE(v3) = 1;
          KiSetVpThreadSpinLockCount(CurrentPrcb, v3);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
          do
            KeYieldProcessorEx(&v18);
          while ( CurrentThread->ThreadLock );
        }
        IdealProcessor = CurrentThread->IdealProcessor;
        if ( p_UserAffinity->Mask )
        {
          UserIdealProcessor = 1280LL;
        }
        else
        {
          UserIdealProcessor = CurrentThread->UserIdealProcessor;
          p_UserAffinity = &CurrentThread->UserAffinity;
          CurrentThread->MiscFlags &= ~8u;
        }
        v20 = 0LL;
        KiSetSystemAffinityThread(CurrentPrcb, p_UserAffinity, UserIdealProcessor, &v20);
        KiReleaseThreadLockSafe(CurrentThread);
        if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
          EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v8);
        if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
          EtwTraceThreadAffinity(CurrentThread, p_UserAffinity);
        KiReadyDeferredReadyList(CurrentPrcb, &v20);
        if ( CurrentIrql >= 2u )
        {
          if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
          {
            LOBYTE(v9) = 2;
            KiRequestSoftwareInterrupt(CurrentPrcb, v9);
          }
        }
        else
        {
          v10 = CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
            v15 = KeGetCurrentPrcb();
            v19 = 0;
            while ( 1 )
            {
              LOBYTE(v14) = 1;
              KiSetVpThreadSpinLockCount(v15, v14);
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
                break;
              KiSetVpThreadSpinLockCount(v15, 0LL);
              do
                KeYieldProcessorEx(&v19);
              while ( CurrentPrcb->PrcbLock );
            }
            NextThread = CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(CurrentPrcb, v10, 0LL);
            _enable();
            CurrentPrcb->CurrentThread = NextThread;
            if ( NextThread->WaitBlockFill6[68] == 1 )
              NextThread->ReadyTime = NextThread->ReadyTime
                                    - NextThread->WaitBlock[2].SpareLong
                                    + MEMORY[0xFFFFF78000000320];
            NextThread->WaitBlockFill6[68] = 2;
            v10->WaitReason = 32;
            v10->WaitIrql = CurrentIrql;
            KiQueueReadyThread(CurrentPrcb, v10);
            LOBYTE(v17) = CurrentIrql;
            v11 = (unsigned __int8)KiSwapContext(v10, NextThread, v17) == 0;
          }
          else
          {
            v11 = (v10->MiscFlags & 0x40) == 0;
          }
          if ( !v11 )
          {
            __writecr8(1uLL);
            v10->MiscFlags &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
          }
          __writecr8(CurrentIrql);
        }
      }
    }
  }
}
