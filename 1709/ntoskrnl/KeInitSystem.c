/*
 * XREFs of KeInitSystem @ 0x140837EC8
 * Callers:
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x140028A90 (KeExpandKernelStackAndCalloutEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x140134970 (HviIsAnyHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     KdEncodeDataBlock @ 0x14014337C (KdEncodeDataBlock.c)
 *     KiInitMachineDependent @ 0x1401433D4 (KiInitMachineDependent.c)
 *     HvcallInitiateHypercall @ 0x140156B30 (HvcallInitiateHypercall.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140176FE0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KiDetectTsx @ 0x14017B13C (KiDetectTsx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1401EA214 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     KeRelaxTimingConstraints @ 0x1402024BC (KeRelaxTimingConstraints.c)
 *     KiEpfDrainCompletionQueue @ 0x14020CEB4 (KiEpfDrainCompletionQueue.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     KiInitializeProcessor @ 0x140426A8C (KiInitializeProcessor.c)
 *     KeInitializeTimerTable @ 0x1405B79DC (KeInitializeTimerTable.c)
 *     KiStartDpcThread @ 0x1405BF270 (KiStartDpcThread.c)
 *     KeFreeInitializationCode @ 0x14080CB64 (KeFreeInitializationCode.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 *     KiIntSteerInit @ 0x140838BF8 (KiIntSteerInit.c)
 *     KiComputeNumaCosts @ 0x140838CD8 (KiComputeNumaCosts.c)
 */

char __fastcall KeInitSystem(int a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // eax
  ULONG ActiveProcessorCount; // r14d
  int v7; // ecx
  unsigned __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // r9d
  int v12; // eax
  unsigned __int64 v13; // rax
  ULONG v14; // ebx
  __int64 *v15; // rsi
  __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  NTSTATUS v18; // eax
  bool v19; // bl
  _BYTE *v20; // rsi
  _QWORD *PoolWithTag; // rax
  __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // bl
  PHYSICAL_ADDRESS v24[3]; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+80h] [rbp+8h] BYREF
  __int64 v26; // [rsp+88h] [rbp+10h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      KiClockKeepAliveCycle = (ActiveProcessorCount + (KeMaximumIncrement + 29999999) / KeMaximumIncrement - 1)
                            / ActiveProcessorCount;
      if ( HviIsAnyHypervisorPresent() )
      {
        if ( !HvlHypervisorConnected || (HvlEnlightenments & 0x20) != 0 )
        {
          KeDpcWatchdogPeriod = 0;
          v7 = 1;
          KiDPCTimeout = 0;
        }
        else
        {
          v7 = 0;
        }
        KeRelaxTimingConstraints(v7);
      }
      v8 = (unsigned int)KeDpcWatchdogPeriod;
      if ( KeDpcWatchdogPeriod )
      {
        if ( (unsigned int)KeDpcWatchdogPeriod < 0x7D0 )
        {
          v8 = 2000LL;
          KeDpcWatchdogPeriod = 2000;
        }
        if ( (unsigned int)v8 > 0x3A980 )
        {
          v8 = 240000LL;
          KeDpcWatchdogPeriod = 240000;
        }
      }
      v9 = KiDPCTimeout;
      if ( KiDPCTimeout )
      {
        if ( (unsigned int)KiDPCTimeout < 0x14 )
        {
          v9 = 20;
          KiDPCTimeout = 20;
        }
        if ( v9 > 0x4E20 )
        {
          v9 = 20000;
          KiDPCTimeout = 20000;
        }
      }
      if ( ViVerifierEnabled )
      {
        v10 = KeVerifierDpcScalingFactor;
        if ( !KeVerifierDpcScalingFactor )
        {
          v10 = 1;
          KeVerifierDpcScalingFactor = 1;
        }
        if ( v10 > 0x64 )
        {
          v10 = 100;
          KeVerifierDpcScalingFactor = 100;
        }
        v8 = v10 * (unsigned int)v8;
        v9 *= v10;
        KeDpcWatchdogPeriod = v8;
        KiDPCTimeout = v9;
      }
      if ( (_DWORD)v8 )
      {
        if ( v9 )
        {
          if ( v9 < (unsigned int)v8 )
          {
            v11 = KeDpcWatchdogProfileOffset;
            if ( KeDpcWatchdogProfileOffset )
            {
              if ( (unsigned int)KeDpcWatchdogProfileOffset <= 0x3E8 )
              {
                v11 = 1000;
                KeDpcWatchdogProfileOffset = 1000;
              }
              if ( v11 > (unsigned int)v8 )
              {
                v11 = 10000;
                if ( (unsigned int)v8 <= 0x2710 )
                  v11 = 1000;
                KeDpcWatchdogProfileOffset = v11;
              }
              v12 = v8 - v11;
              KiDpcWatchdogProfileCumulativeDpcThreshold = v8 - v11;
              if ( (unsigned int)v8 - v11 < 0x3E8 )
              {
                v12 = 1000;
                KiDpcWatchdogProfileCumulativeDpcThreshold = 1000;
              }
              v13 = v9 * v12 / v8;
              if ( v13 > 0xFFFFFFFF )
                LODWORD(v13) = -1;
              KiDpcWatchdogProfileSingleDpcThreshold = v13;
              if ( v9 - (unsigned int)v13 > v11 )
                KiDpcWatchdogProfileSingleDpcThreshold = 0;
              KiDpcWatchdogProfileArrayLength = 3328 * (v11 / 0x3E8);
              dword_14040037C = 3328 * (v11 / 0x3E8);
            }
          }
        }
      }
      v14 = 0;
      if ( ActiveProcessorCount )
      {
        v15 = KiProcessorBlock;
        do
        {
          v16 = *v15;
          KiInitializeProcessor(*v15);
          if ( KeThreadDpcEnable )
          {
            if ( (int)KiStartDpcThread(v16) < 0 )
              return 0;
          }
          ++v14;
          ++v15;
        }
        while ( v14 < ActiveProcessorCount );
      }
      KiComputeNumaCosts();
      SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
      KiIntSteerInit();
      if ( !KiInitMachineDependent() )
        return 0;
      v17 = *(unsigned int *)(KiProcessorBlock[0] + 68) * (unsigned __int64)KeMaximumIncrement / 0xA;
      KiShortExecutionCycles = v17 / 0xF0;
      KiCyclesPerClockQuantum = v17 / 3;
      KiDirectQuantumTarget = v17 / 3;
      KiLockQuantumTarget = 3 * (v17 / 3);
      KdEncodeDataBlock();
      v18 = KeExpandKernelStackAndCalloutEx(KiVerifyScopesExecute, 0LL, 0xC000uLL, 1u, 0LL);
      if ( v18 < 0 )
        KeBugCheckEx(0x32u, v18, 0x5356694BuLL, 0LL, 0LL);
    }
    else
    {
      ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
      MmFreeLoaderBlock();
      KeLoaderBlock_0 = 0LL;
      ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
      if ( !HviIsAnyHypervisorPresent() )
        KeEnableWatchdogTimeout = 1;
      if ( HvlHypervisorConnected )
      {
        v19 = 0;
        v20 = (_BYTE *)HvlpAcquireHypercallPage(v24, 2, 0LL, 8LL);
        if ( !(unsigned __int16)HvcallInitiateHypercall() )
          v19 = (*v20 & 8) != 0;
        HvlpReleaseHypercallPage((__int64)v24);
        if ( v19 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4A0uLL, 0x4850654Bu);
          KiEpfHashTable = (__int64)PoolWithTag;
          if ( PoolWithTag )
          {
            v22 = 37LL;
            do
            {
              PoolWithTag[1] = PoolWithTag;
              *PoolWithTag = PoolWithTag;
              PoolWithTag[2] = 0LL;
              *((_DWORD *)PoolWithTag + 6) = 0;
              PoolWithTag += 4;
              --v22;
            }
            while ( v22 );
            LODWORD(KiEpfCompletionDpc) = 275;
            qword_14036A818 = (__int64)KiEpfCompletionDpcRoutine;
            qword_14036A820 = 0LL;
            qword_14036A838 = 0LL;
            qword_14036A810 = 0LL;
            if ( (int)HvlSetupPhysicalFaultNotificationQueue(&v26, &v25) >= 0 )
            {
              KiEpfCompletionQueueSize = (unsigned int)(v25 - 16) >> 3;
              KiEpfCompletionQueue = v26;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              KiEpfDrainCompletionQueue();
              __writecr8(CurrentIrql);
            }
          }
        }
      }
      KeFreeInitializationCode();
    }
    return 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx && (CurrentPrcb->MsrIa32TsxCtrl & 3) != 3 )
  {
    v2 = CurrentPrcb->MsrIa32TsxCtrl | 3;
    CurrentPrcb->MsrIa32TsxCtrl = v2;
    __writemsr(0x122u, v2);
  }
  KiTsxSupported = KiDetectTsx();
  v4 = KeInitializeTimerTable(v3);
  if ( v4 < 0 )
    KeBugCheckEx(0x31u, v4, 1uLL, 0LL, 0LL);
  if ( KiHrIncrement < (unsigned int)KeMinimumIncrement || KiHrIncrement > KeMaximumIncrement )
    KiHrIncrement = KeMinimumIncrement;
  return 1;
}
