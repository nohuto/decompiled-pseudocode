/*
 * XREFs of KeAccumulateTicks @ 0x1400F6700
 * Callers:
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x14000D778 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KiCheckKeepAlive @ 0x140027E18 (KiCheckKeepAlive.c)
 *     KiCheckForTimerExpiration @ 0x1400F6AF0 (KiCheckForTimerExpiration.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 *     KdCheckForDebugBreak @ 0x140137A34 (KdCheckForDebugBreak.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlInvokeHypervisorDebugger @ 0x1401E4C4C (HvlInvokeHypervisorDebugger.c)
 *     KiDpcWatchdogCaptureStack @ 0x1401FC7A8 (KiDpcWatchdogCaptureStack.c)
 */

__int64 __fastcall KeAccumulateTicks(struct _KPRCB *a1, int a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  char v9; // r14
  __int64 result; // rax
  unsigned int v11; // esi
  _KTHREAD *CurrentThread; // rdi
  void **DpcWatchdogProfile; // rcx
  unsigned int InterruptRate; // eax
  __int64 v15; // rcx
  signed int DpcWatchdogProfileCumulativeDpcThreshold; // ecx
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v19; // r15
  unsigned int v20; // ecx
  __int16 v21; // cx
  unsigned int MaximumDpcQueueDepth; // ecx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  __int64 v24; // rdx
  unsigned int DpcWatchdogProfileSingleDpcThreshold; // eax
  size_t v26; // r8

  v9 = 0;
  result = KiCheckForTimerExpiration();
  a1->LastTick = a3;
  v11 = a3 - a2;
  if ( !v11 )
  {
    if ( KiForceIdleDisabled )
      return result;
    result = (unsigned int)KiForceIdleState;
    if ( KiForceIdleState != 4 )
      return result;
    goto LABEL_24;
  }
  CurrentThread = a1->CurrentThread;
  if ( a1->ClockOwner )
  {
    if ( !--KiClockPollCycle )
    {
      KiClockPollCycle = KiClockKeepAliveCycle;
      BugCheckParameter4 = (unsigned __int8)KiClockCheckSlot;
      v19 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
      v20 = (unsigned __int8)KiClockCheckSlot + 1;
      if ( v20 >= (unsigned int)KeNumberProcessors_0 )
        LOBYTE(v20) = 0;
      KiClockCheckSlot = v20;
      if ( KiCheckKeepAlive(*(_DWORD *)(v19 + 36)) )
      {
        if ( !*(_DWORD *)(v19 + 22752) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v19, BugCheckParameter4);
        }
        *(_DWORD *)(v19 + 22752) = 0;
      }
    }
  }
  if ( a5 )
  {
    a1->UserTime += v11;
    CurrentThread->UserTime += v11;
    DpcWatchdogProfile = a1->DpcWatchdogProfile;
    a1->DpcWatchdogCount = 0;
    if ( DpcWatchdogProfile
      && a1->DpcWatchdogProfileCurrentEmptyCapture != DpcWatchdogProfile
      && (int)a1->DpcWatchdogProfileCumulativeDpcThreshold > 0 )
    {
LABEL_85:
      v26 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      a1->DpcWatchdogProfileCurrentEmptyCapture = DpcWatchdogProfile;
      memset(DpcWatchdogProfile, 0, v26);
    }
  }
  else
  {
    a1->KernelTime += v11;
    if ( a1->NestingLevel == 2 && a1->DpcRoutineActive )
    {
      ++a1->DpcTimeCount;
      a1->DpcTime += v11;
      if ( a1->DpcTimeLimit )
      {
        DpcWatchdogProfileSingleDpcThreshold = a1->DpcWatchdogProfileSingleDpcThreshold;
        if ( DpcWatchdogProfileSingleDpcThreshold && a1->DpcTimeCount >= DpcWatchdogProfileSingleDpcThreshold )
        {
          KiDpcWatchdogCaptureStack(a1);
          v9 = 1;
        }
        if ( a1->DpcTimeCount > a1->DpcTimeLimit )
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
      a1->InterruptTime += v11;
    }
    else
    {
      CurrentThread->SchedulerApc.SpareLong0 += v11;
    }
    if ( a4 >= 2u )
    {
      ++a1->DpcWatchdogCount;
      if ( a1->DpcWatchdogPeriod )
      {
        DpcWatchdogProfileCumulativeDpcThreshold = a1->DpcWatchdogProfileCumulativeDpcThreshold;
        if ( DpcWatchdogProfileCumulativeDpcThreshold
          && a1->DpcWatchdogCount >= DpcWatchdogProfileCumulativeDpcThreshold
          && !v9 )
        {
          KiDpcWatchdogCaptureStack(a1);
        }
        if ( a1->DpcWatchdogCount >= a1->DpcWatchdogPeriod )
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
      goto LABEL_12;
    }
    DpcWatchdogProfile = a1->DpcWatchdogProfile;
    a1->DpcWatchdogCount = 0;
    if ( DpcWatchdogProfile
      && a1->DpcWatchdogProfileCurrentEmptyCapture != DpcWatchdogProfile
      && (int)a1->DpcWatchdogProfileCumulativeDpcThreshold > 0 )
    {
      goto LABEL_85;
    }
  }
LABEL_12:
  if ( CurrentThread != a1->IdleThread
    && a1->NestingLevel <= 1u
    && (CurrentThread->Priority < 16
     && CurrentThread->SchedulingGroup
     && (SchedulingGroup = CurrentThread->SchedulingGroup) != 0LL
     && (v24 = (__int64)SchedulingGroup + a1->ScbOffset) != 0
     && (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)CurrentThread, v24, 0, 0, 0LL)
     || CurrentThread->Priority < 8) )
  {
    a1->AvailableTime += v11;
  }
  if ( v11 >= 8 )
  {
    a1->InterruptRate = 0;
  }
  else
  {
    a1->InterruptRate += 15 * (a1->InterruptCount - a1->InterruptLastCount);
    InterruptRate = a1->InterruptRate;
    v15 = v11;
    do
    {
      InterruptRate >>= 4;
      --v15;
    }
    while ( v15 );
    a1->InterruptRate = InterruptRate;
  }
  a1->InterruptLastCount = a1->InterruptCount;
  a1->DpcRequestRate = (a1->DpcRequestRate + a1->DpcData[0].DpcCount - a1->DpcLastCount) >> v11;
  a1->DpcLastCount = a1->DpcData[0].DpcCount;
  result = (unsigned int)a1->DpcData[0].DpcQueueDepth;
  if ( !(_DWORD)result || (v21 = a1->DpcRequestSlot[0], (v21 & 3) != 0) )
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
    if ( (v21 & 0x2F) == 0 )
      KiRequestSoftwareInterrupt(a1, 2);
    MaximumDpcQueueDepth = a1->MaximumDpcQueueDepth;
    result = (unsigned int)KiIdealDpcRate;
    if ( MaximumDpcQueueDepth > 1 && a1->DpcRequestRate < KiIdealDpcRate )
    {
      result = MaximumDpcQueueDepth - 1;
      a1->MaximumDpcQueueDepth = result;
    }
  }
LABEL_24:
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    result = a1->Number;
    if ( KiPollSlot == (_DWORD)result )
      return KdCheckForDebugBreak();
  }
  return result;
}
