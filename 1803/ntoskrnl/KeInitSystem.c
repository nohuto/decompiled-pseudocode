/*
 * XREFs of KeInitSystem @ 0x1408B21CC
 * Callers:
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x14012F840 (KeExpandKernelStackAndCalloutEx.c)
 *     KeInitializeCatRegisters @ 0x14014ECD8 (KeInitializeCatRegisters.c)
 *     HviIsAnyHypervisorPresent @ 0x14016D110 (HviIsAnyHypervisorPresent.c)
 *     KdEncodeDataBlock @ 0x140178E4C (KdEncodeDataBlock.c)
 *     KiInitMachineDependent @ 0x140178EA4 (KiInitMachineDependent.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401A17A0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KiDetectTsx @ 0x1401A5A00 (KiDetectTsx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1402272C4 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     KeRelaxTimingConstraints @ 0x14023F5C4 (KeRelaxTimingConstraints.c)
 *     KiEpfDrainCompletionQueue @ 0x14024B234 (KiEpfDrainCompletionQueue.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     KiInitializeProcessor @ 0x14047C370 (KiInitializeProcessor.c)
 *     KeInitializeTimerTable @ 0x14062B1B4 (KeInitializeTimerTable.c)
 *     KiStartDpcThread @ 0x1406328F4 (KiStartDpcThread.c)
 *     ExRegisterHost @ 0x1406423DC (ExRegisterHost.c)
 *     KeFreeInitializationCode @ 0x14087CB70 (KeFreeInitializationCode.c)
 *     KeInitializeSchedulerAssist @ 0x14089819C (KeInitializeSchedulerAssist.c)
 *     KiInitializeVelocity @ 0x1408B2700 (KiInitializeVelocity.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 *     KiIntSteerInit @ 0x1408B3130 (KiIntSteerInit.c)
 *     KiComputeNumaCosts @ 0x1408B32B4 (KiComputeNumaCosts.c)
 */

char __fastcall KeInitSystem(int a1)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r10
  int v5; // eax
  ULONG ActiveProcessorCount; // r15d
  int v8; // ecx
  unsigned __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // r9d
  int v13; // eax
  unsigned __int64 v14; // rax
  ULONG v15; // ebx
  __int64 *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  NTSTATUS v20; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // bl
  _QWORD v24[6]; // [rsp+30h] [rbp-30h] BYREF
  int v25; // [rsp+90h] [rbp+30h] BYREF
  __int64 v26; // [rsp+98h] [rbp+38h] BYREF

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
          v8 = 1;
          KiDPCTimeout = 0;
        }
        else
        {
          v8 = 0;
        }
        KeRelaxTimingConstraints(v8);
      }
      v9 = (unsigned int)KeDpcWatchdogPeriod;
      if ( KeDpcWatchdogPeriod )
      {
        if ( (unsigned int)KeDpcWatchdogPeriod < 0x7D0 )
        {
          v9 = 2000LL;
          KeDpcWatchdogPeriod = 2000;
        }
        if ( (unsigned int)v9 > 0x3A980 )
        {
          v9 = 240000LL;
          KeDpcWatchdogPeriod = 240000;
        }
      }
      v10 = KiDPCTimeout;
      if ( KiDPCTimeout )
      {
        if ( (unsigned int)KiDPCTimeout < 0x14 )
        {
          v10 = 20;
          KiDPCTimeout = 20;
        }
        if ( v10 > 0x4E20 )
        {
          v10 = 20000;
          KiDPCTimeout = 20000;
        }
      }
      if ( ViVerifierEnabled )
      {
        v11 = KeVerifierDpcScalingFactor;
        if ( !KeVerifierDpcScalingFactor )
        {
          v11 = 1;
          KeVerifierDpcScalingFactor = 1;
        }
        if ( v11 > 0x64 )
        {
          v11 = 100;
          KeVerifierDpcScalingFactor = 100;
        }
        v9 = v11 * (unsigned int)v9;
        v10 *= v11;
        KeDpcWatchdogPeriod = v9;
        KiDPCTimeout = v10;
      }
      if ( (_DWORD)v9 )
      {
        if ( v10 )
        {
          if ( v10 < (unsigned int)v9 )
          {
            v12 = KeDpcWatchdogProfileOffset;
            if ( KeDpcWatchdogProfileOffset )
            {
              if ( (unsigned int)KeDpcWatchdogProfileOffset <= 0x3E8 )
              {
                v12 = 1000;
                KeDpcWatchdogProfileOffset = 1000;
              }
              if ( v12 > (unsigned int)v9 )
              {
                v12 = 10000;
                if ( (unsigned int)v9 <= 0x2710 )
                  v12 = 1000;
                KeDpcWatchdogProfileOffset = v12;
              }
              v13 = v9 - v12;
              KiDpcWatchdogProfileCumulativeDpcThreshold = v9 - v12;
              if ( (unsigned int)v9 - v12 < 0x3E8 )
              {
                KiDpcWatchdogProfileCumulativeDpcThreshold = 1000;
                v13 = 1000;
              }
              v14 = v10 * v13 / v9;
              if ( v14 > 0xFFFFFFFF )
                LODWORD(v14) = -1;
              KiDpcWatchdogProfileSingleDpcThreshold = v14;
              if ( v10 - (unsigned int)v14 > v12 )
                KiDpcWatchdogProfileSingleDpcThreshold = 0;
              KiDpcWatchdogProfileArrayLength = 3328 * (v12 / 0x3E8);
              dword_14044B384 = 3328 * (v12 / 0x3E8);
            }
          }
        }
      }
      v15 = 0;
      if ( ActiveProcessorCount )
      {
        v16 = KiProcessorBlock;
        do
        {
          v17 = *v16;
          KiInitializeProcessor(*v16);
          if ( KeThreadDpcEnable )
          {
            if ( (int)KiStartDpcThread(v17) < 0 )
              return 0;
          }
          ++v15;
          ++v16;
        }
        while ( v15 < ActiveProcessorCount );
      }
      KiComputeNumaCosts();
      SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
      KiIntSteerInit();
      if ( (KeFeatureBits & 0x800000) != 0 )
      {
        if ( MEMORY[0xFFFFF780000005F0] )
        {
          memset(v24, 0, 0x28uLL);
          LODWORD(v24[0]) = 65548;
          v24[2] = off_1402F37C0;
          WORD2(v24[0]) = 0;
          LODWORD(v24[1]) = 512;
          v24[3] = 0LL;
          v24[4] = 0LL;
          if ( (int)ExRegisterHost(&KiSupervisorStateExtensionHost, v18, (unsigned __int16 *)v24) < 0 )
            KiSupervisorStateExtensionHost = 0LL;
        }
      }
      if ( !KiInitMachineDependent() )
        return 0;
      v19 = *(unsigned int *)(KiProcessorBlock[0] + 68) * (unsigned __int64)KeMaximumIncrement / 0xA;
      KiShortExecutionCycles = v19 / 0xF0;
      KiCyclesPerClockQuantum = v19 / 3;
      KiDirectQuantumTarget = v19 / 3;
      KiLockQuantumTarget = 3 * (v19 / 3);
      KdEncodeDataBlock();
      v20 = KeExpandKernelStackAndCalloutEx(KiVerifyScopesExecute, 0LL, 0xC000uLL, 1u, 0LL);
      if ( v20 < 0 )
        KeBugCheckEx(0x32u, v20, 0x5356694BuLL, 0LL, 0LL);
    }
    else
    {
      ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
      MmFreeLoaderBlock();
      KeLoaderBlock_0 = 0LL;
      ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
      KiInitializeVelocity();
      if ( !HviIsAnyHypervisorPresent() )
        KeEnableWatchdogTimeout = 1;
      if ( (HvlpFlags & 0x200000) != 0 )
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
          qword_1403AD8D8 = (__int64)KiEpfCompletionDpcRoutine;
          qword_1403AD8E0 = 0LL;
          qword_1403AD8F8 = 0LL;
          qword_1403AD8D0 = 0LL;
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
  KeInitializeSchedulerAssist(v3);
  KeInitializeCatRegisters();
  v5 = KeInitializeTimerTable(v4);
  if ( v5 < 0 )
    KeBugCheckEx(0x31u, v5, 1uLL, 0LL, 0LL);
  if ( KiHrIncrement < (unsigned int)KeMinimumIncrement || KiHrIncrement > KeMaximumIncrement )
    KiHrIncrement = KeMinimumIncrement;
  return 1;
}
