/*
 * XREFs of KeInitSystem @ 0x140817034
 * Callers:
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14010F480 (KeExpandKernelStackAndCalloutInternal.c)
 *     HviIsAnyHypervisorPresent @ 0x14014A450 (HviIsAnyHypervisorPresent.c)
 *     KdEncodeDataBlock @ 0x14015D65C (KdEncodeDataBlock.c)
 *     KiInitMachineDependent @ 0x14015D6B8 (KiInitMachineDependent.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401777A0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KiDetectTsx @ 0x14017B9A8 (KiDetectTsx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeRelaxTimingConstraints @ 0x1401FC72C (KeRelaxTimingConstraints.c)
 *     KiInitializeProcessor @ 0x140412130 (KiInitializeProcessor.c)
 *     KeInitializeTimerTable @ 0x1405A79D0 (KeInitializeTimerTable.c)
 *     KiStartDpcThread @ 0x1405BD340 (KiStartDpcThread.c)
 *     KeFreeInitializationCode @ 0x1407DCB08 (KeFreeInitializationCode.c)
 *     MmFreeLoaderBlock @ 0x140817414 (MmFreeLoaderBlock.c)
 *     KiIntSteerInit @ 0x140817BD8 (KiIntSteerInit.c)
 *     KiComputeNumaCosts @ 0x140817D54 (KiComputeNumaCosts.c)
 */

char __fastcall KeInitSystem(int a1)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v2; // rdx
  BOOL v3; // eax
  struct _KPRCB *v4; // rcx
  int v5; // eax
  ULONG ActiveProcessorCount; // ebp
  int v7; // ecx
  unsigned __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // r9d
  int v12; // eax
  unsigned __int64 v13; // rax
  ULONG v14; // ebx
  __int64 *v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  int v18; // eax

  if ( a1 )
  {
    if ( a1 != 1 )
    {
      ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
      MmFreeLoaderBlock();
      KeLoaderBlock_0 = 0LL;
      ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
      if ( !HviIsAnyHypervisorPresent() )
        KeEnableWatchdogTimeout = 1;
      KeFreeInitializationCode();
      return 1;
    }
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
            dword_1403E3354 = 3328 * (v11 / 0x3E8);
          }
        }
      }
    }
    v14 = 0;
    if ( ActiveProcessorCount )
    {
      v15 = KiProcessorBlock;
      while ( 1 )
      {
        v16 = *v15;
        KiInitializeProcessor(*v15);
        if ( KeThreadDpcEnable )
        {
          if ( (int)KiStartDpcThread(v16) < 0 )
            break;
        }
        ++v14;
        ++v15;
        if ( v14 >= ActiveProcessorCount )
          goto LABEL_55;
      }
    }
    else
    {
LABEL_55:
      KiComputeNumaCosts();
      SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
      KiIntSteerInit();
      if ( KiInitMachineDependent() )
      {
        v17 = *(unsigned int *)(KiProcessorBlock[0] + 68) * (unsigned __int64)KeMaximumIncrement / 0xA;
        KiShortExecutionCycles = v17 / 0xF0;
        KiCyclesPerClockQuantum = v17 / 3;
        KiDirectQuantumTarget = v17 / 3;
        KiLockQuantumTarget = 3 * (v17 / 3);
        KdEncodeDataBlock();
        v18 = KeExpandKernelStackAndCalloutInternal(
                (void (__fastcall *)(__int64))KiVerifyScopesExecute,
                0LL,
                49152,
                2,
                0LL);
        if ( v18 < 0 )
          KeBugCheckEx(0x32u, v18, 0x5356694BuLL, 0LL, 0LL);
        return 1;
      }
    }
    return 0;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx && (CurrentPrcb->MsrIa32TsxCtrl & 3) != 3 )
  {
    v2 = CurrentPrcb->MsrIa32TsxCtrl | 3;
    CurrentPrcb->MsrIa32TsxCtrl = v2;
    __writemsr(0x122u, v2);
  }
  v3 = KiDetectTsx();
  v4 = KeGetCurrentPrcb();
  KiTsxSupported = v3;
  v5 = KeInitializeTimerTable((__int64)v4);
  if ( v5 < 0 )
    KeBugCheckEx(0x31u, v5, 1uLL, 0LL, 0LL);
  if ( KiHrIncrement < (unsigned int)KeMinimumIncrement || KiHrIncrement > KeMaximumIncrement )
    KiHrIncrement = KeMinimumIncrement;
  return 1;
}
