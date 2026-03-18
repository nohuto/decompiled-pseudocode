/*
 * XREFs of KeAccumulateTicks @ 0x14010D530
 * Callers:
 *     KiUpdateRunTime @ 0x1401099B0 (KiUpdateRunTime.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400A9E68 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KiCheckKeepAlive @ 0x1400BB894 (KiCheckKeepAlive.c)
 *     KiCheckForTimerExpiration @ 0x14010D920 (KiCheckForTimerExpiration.c)
 *     KdCheckForDebugBreak @ 0x14014F22C (KdCheckForDebugBreak.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlInvokeHypervisorDebugger @ 0x140226A90 (HvlInvokeHypervisorDebugger.c)
 *     KiDpcWatchdogCaptureStack @ 0x14023F64C (KiDpcWatchdogCaptureStack.c)
 */

__int64 __fastcall KeAccumulateTicks(struct _KPRCB *a1, int a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  char v9; // r14
  __int64 result; // rax
  __int64 MaximumDpcQueueDepth; // rcx
  unsigned int v12; // esi
  char v13; // cl
  unsigned int InterruptRate; // eax
  __int64 v15; // rcx
  __int64 CurrentThread; // rdi
  void **DpcWatchdogProfile; // rcx
  int DpcWatchdogPeriod; // ecx
  int v20; // eax
  signed int DpcWatchdogProfileCumulativeDpcThreshold; // r9d
  int DpcWatchdogCount; // edx
  int v23; // r8d
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v25; // r15
  unsigned int v26; // ecx
  unsigned int DpcTimeCount; // ecx
  unsigned int v28; // ecx
  unsigned int DpcTimeLimit; // eax
  unsigned int DpcWatchdogProfileSingleDpcThreshold; // r8d
  unsigned int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rdx
  size_t v34; // r8

  v9 = 0;
  result = KiCheckForTimerExpiration();
  a1->LastTick = a3;
  v12 = a3 - a2;
  if ( !v12 )
  {
    if ( KiForceIdleDisabled )
      return result;
    result = (unsigned int)KiForceIdleState;
    if ( KiForceIdleState != 4 )
      return result;
    goto LABEL_15;
  }
  CurrentThread = (__int64)a1->CurrentThread;
  if ( a1->ClockOwner )
  {
    if ( !--KiClockPollCycle )
    {
      KiClockPollCycle = KiClockKeepAliveCycle;
      BugCheckParameter4 = (unsigned __int8)KiClockCheckSlot;
      v25 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
      v26 = (unsigned __int8)KiClockCheckSlot + 1;
      if ( v26 >= (unsigned int)KeNumberProcessors_0 )
        LOBYTE(v26) = 0;
      KiClockCheckSlot = v26;
      if ( KiCheckKeepAlive(*(_DWORD *)(v25 + 36)) )
      {
        if ( !*(_DWORD *)(v25 + 22752) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v25, BugCheckParameter4);
        }
        *(_DWORD *)(v25 + 22752) = 0;
      }
    }
  }
  if ( a5 )
  {
    a1->UserTime += v12;
    *(_DWORD *)(CurrentThread + 732) += v12;
    DpcWatchdogProfile = a1->DpcWatchdogProfile;
    a1->DpcWatchdogCount = 0;
    if ( DpcWatchdogProfile
      && a1->DpcWatchdogProfileCurrentEmptyCapture != DpcWatchdogProfile
      && (int)a1->DpcWatchdogProfileCumulativeDpcThreshold > 0 )
    {
      goto LABEL_86;
    }
  }
  else
  {
    a1->KernelTime += v12;
    if ( a1->NestingLevel == 2 && a1->DpcRoutineActive )
    {
      DpcTimeCount = a1->DpcTimeCount;
      a1->DpcTime += v12;
      v28 = DpcTimeCount + 1;
      DpcTimeLimit = a1->DpcTimeLimit;
      a1->DpcTimeCount = v28;
      if ( DpcTimeLimit )
      {
        DpcWatchdogProfileSingleDpcThreshold = a1->DpcWatchdogProfileSingleDpcThreshold;
        v31 = v28;
        if ( DpcWatchdogProfileSingleDpcThreshold && v28 >= DpcWatchdogProfileSingleDpcThreshold )
        {
          KiDpcWatchdogCaptureStack(a1, v28);
          v31 = a1->DpcTimeCount;
          v9 = 1;
          DpcTimeLimit = a1->DpcTimeLimit;
        }
        if ( v31 > DpcTimeLimit )
        {
          if ( KeEnableWatchdogTimeout )
          {
            __rdtsc();
            HvlInvokeHypervisorDebugger(3LL, 0LL);
            if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
              KeBugCheckEx(
                0x133u,
                0LL,
                a1->DpcTimeCount,
                a1->DpcTimeLimit,
                (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
            __int2c();
          }
          a1->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler((__int64)a1);
        }
      }
    }
    else if ( a1->NestingLevel > 1u )
    {
      a1->InterruptTime += v12;
    }
    else
    {
      *(_DWORD *)(CurrentThread + 652) += v12;
    }
    if ( a4 >= 2u )
    {
      DpcWatchdogPeriod = a1->DpcWatchdogPeriod;
      v20 = a1->DpcWatchdogCount + 1;
      a1->DpcWatchdogCount = v20;
      if ( DpcWatchdogPeriod )
      {
        DpcWatchdogProfileCumulativeDpcThreshold = a1->DpcWatchdogProfileCumulativeDpcThreshold;
        DpcWatchdogCount = v20;
        v23 = DpcWatchdogPeriod;
        if ( DpcWatchdogProfileCumulativeDpcThreshold && v20 >= DpcWatchdogProfileCumulativeDpcThreshold && !v9 )
        {
          KiDpcWatchdogCaptureStack(a1, (unsigned int)v20);
          DpcWatchdogCount = a1->DpcWatchdogCount;
          v23 = a1->DpcWatchdogPeriod;
        }
        if ( DpcWatchdogCount >= v23 )
        {
          if ( KeEnableWatchdogTimeout )
          {
            __rdtsc();
            HvlInvokeHypervisorDebugger(2LL, 0LL);
            if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
              KeBugCheckEx(0x133u, 1uLL, a1->DpcWatchdogPeriod, (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock, 0LL);
            __int2c();
          }
          a1->DpcWatchdogCount = 0;
          KiResetGlobalDpcWatchdogProfiler((__int64)a1);
        }
      }
    }
    else
    {
      DpcWatchdogProfile = a1->DpcWatchdogProfile;
      a1->DpcWatchdogCount = 0;
      if ( DpcWatchdogProfile
        && a1->DpcWatchdogProfileCurrentEmptyCapture != DpcWatchdogProfile
        && (int)a1->DpcWatchdogProfileCumulativeDpcThreshold > 0 )
      {
LABEL_86:
        v34 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
        a1->DpcWatchdogProfileCurrentEmptyCapture = DpcWatchdogProfile;
        memset(DpcWatchdogProfile, 0, v34);
      }
    }
  }
  if ( (_KTHREAD *)CurrentThread == a1->IdleThread || a1->NestingLevel > 1u )
    goto LABEL_9;
  v13 = *(_BYTE *)(CurrentThread + 195);
  if ( v13 >= 16 || !*(_QWORD *)(CurrentThread + 104) )
  {
LABEL_8:
    if ( v13 >= 8 )
      goto LABEL_9;
    goto LABEL_58;
  }
  v32 = *(_QWORD *)(CurrentThread + 104);
  if ( !v32
    || (v33 = a1->ScbOffset + v32) == 0
    || !(unsigned int)KiGetThreadEffectiveRankNonZero(CurrentThread, v33, 0LL, 0, 0LL) )
  {
    v13 = *(_BYTE *)(CurrentThread + 195);
    goto LABEL_8;
  }
LABEL_58:
  a1->AvailableTime += v12;
LABEL_9:
  if ( v12 >= 8 )
  {
    a1->InterruptRate = 0;
  }
  else
  {
    a1->InterruptRate += 15 * (a1->InterruptCount - a1->InterruptLastCount);
    InterruptRate = a1->InterruptRate;
    v15 = v12;
    do
    {
      InterruptRate >>= 4;
      --v15;
    }
    while ( v15 );
    a1->InterruptRate = InterruptRate;
  }
  MaximumDpcQueueDepth = v12;
  a1->InterruptLastCount = a1->InterruptCount;
  a1->DpcRequestRate = (a1->DpcRequestRate + a1->DpcData[0].DpcCount - a1->DpcLastCount) >> v12;
  a1->DpcLastCount = a1->DpcData[0].DpcCount;
  result = (unsigned int)a1->DpcData[0].DpcQueueDepth;
  if ( !(_DWORD)result
    || (MaximumDpcQueueDepth = (unsigned __int16)a1->DpcRequestSlot[0], (MaximumDpcQueueDepth & 3) != 0) )
  {
    if ( a1->AdjustDpcThreshold-- == 1 )
    {
      a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
      result = (unsigned int)a1->MaximumDpcQueueDepth;
      if ( (unsigned int)result < KiMaximumDpcQueueDepth )
      {
        result = (unsigned int)(result + 1);
        a1->MaximumDpcQueueDepth = result;
      }
    }
  }
  else
  {
    a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
    if ( (MaximumDpcQueueDepth & 0x2F) == 0 )
      KiRequestSoftwareInterrupt(a1, 2);
    MaximumDpcQueueDepth = (unsigned int)a1->MaximumDpcQueueDepth;
    result = (unsigned int)KiIdealDpcRate;
    if ( a1->DpcRequestRate < KiIdealDpcRate && (unsigned int)MaximumDpcQueueDepth > 1 )
    {
      result = (unsigned int)(MaximumDpcQueueDepth - 1);
      a1->MaximumDpcQueueDepth = result;
    }
  }
LABEL_15:
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    result = a1->Number;
    if ( KiPollSlot == (_DWORD)result )
      return KdCheckForDebugBreak(MaximumDpcQueueDepth);
  }
  return result;
}
