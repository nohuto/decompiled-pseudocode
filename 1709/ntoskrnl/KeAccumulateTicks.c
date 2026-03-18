/*
 * XREFs of KeAccumulateTicks @ 0x1400987C0
 * Callers:
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiCheckForTimerExpiration @ 0x140098BB0 (KiCheckForTimerExpiration.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KiCheckKeepAlive @ 0x14011C7A8 (KiCheckKeepAlive.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlInvokeHypervisorDebugger @ 0x1401E991C (HvlInvokeHypervisorDebugger.c)
 *     KdCheckForDebugBreak @ 0x1401F8968 (KdCheckForDebugBreak.c)
 *     KiDpcWatchdogCaptureStack @ 0x140202568 (KiDpcWatchdogCaptureStack.c)
 */

__int64 __fastcall KeAccumulateTicks(struct _KPRCB *a1, int a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  char v9; // r14
  __int64 result; // rax
  __int64 MaximumDpcQueueDepth; // rcx
  unsigned int v12; // esi
  _KTHREAD *CurrentThread; // rdi
  void **DpcWatchdogProfile; // rcx
  unsigned int InterruptRate; // eax
  __int64 v16; // rcx
  signed int DpcWatchdogProfileCumulativeDpcThreshold; // ecx
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v20; // r15
  unsigned int v21; // ecx
  unsigned int DpcWatchdogProfileSingleDpcThreshold; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  __int64 v24; // rdx
  size_t v25; // r8

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
    goto LABEL_24;
  }
  CurrentThread = a1->CurrentThread;
  if ( a1->ClockOwner )
  {
    if ( !--KiClockPollCycle )
    {
      KiClockPollCycle = KiClockKeepAliveCycle;
      BugCheckParameter4 = (unsigned __int8)KiClockCheckSlot;
      v20 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
      v21 = (unsigned __int8)KiClockCheckSlot + 1;
      if ( v21 >= (unsigned int)KeNumberProcessors_0 )
        LOBYTE(v21) = 0;
      KiClockCheckSlot = v21;
      if ( (unsigned __int8)KiCheckKeepAlive(*(unsigned int *)(v20 + 36)) )
      {
        if ( !*(_DWORD *)(v20 + 22752) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v20, BugCheckParameter4);
        }
        *(_DWORD *)(v20 + 22752) = 0;
      }
    }
  }
  if ( a5 )
  {
    a1->UserTime += v12;
    CurrentThread->UserTime += v12;
    DpcWatchdogProfile = a1->DpcWatchdogProfile;
    a1->DpcWatchdogCount = 0;
    if ( DpcWatchdogProfile
      && a1->DpcWatchdogProfileCurrentEmptyCapture != DpcWatchdogProfile
      && (int)a1->DpcWatchdogProfileCumulativeDpcThreshold > 0 )
    {
LABEL_84:
      v25 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      a1->DpcWatchdogProfileCurrentEmptyCapture = DpcWatchdogProfile;
      memset(DpcWatchdogProfile, 0, v25);
    }
  }
  else
  {
    a1->KernelTime += v12;
    if ( a1->NestingLevel == 2 && a1->DpcRoutineActive )
    {
      ++a1->DpcTimeCount;
      a1->DpcTime += v12;
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
          KiResetGlobalDpcWatchdogProfiler(a1);
        }
      }
    }
    else if ( a1->NestingLevel > 1u )
    {
      a1->InterruptTime += v12;
    }
    else
    {
      CurrentThread->SchedulerApc.SpareLong0 += v12;
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
          KiResetGlobalDpcWatchdogProfiler(a1);
        }
      }
      goto LABEL_13;
    }
    DpcWatchdogProfile = a1->DpcWatchdogProfile;
    a1->DpcWatchdogCount = 0;
    if ( DpcWatchdogProfile
      && a1->DpcWatchdogProfileCurrentEmptyCapture != DpcWatchdogProfile
      && (int)a1->DpcWatchdogProfileCumulativeDpcThreshold > 0 )
    {
      goto LABEL_84;
    }
  }
LABEL_13:
  if ( CurrentThread != a1->IdleThread
    && a1->NestingLevel <= 1u
    && (CurrentThread->Priority < 16
     && CurrentThread->SchedulingGroup
     && (SchedulingGroup = CurrentThread->SchedulingGroup) != 0LL
     && (v24 = (__int64)SchedulingGroup + a1->ScbOffset) != 0
     && (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)CurrentThread, v24, 0, 0, 0LL)
     || CurrentThread->Priority < 8) )
  {
    a1->AvailableTime += v12;
  }
  if ( v12 >= 8 )
  {
    a1->InterruptRate = 0;
  }
  else
  {
    a1->InterruptRate += 15 * (a1->InterruptCount - a1->InterruptLastCount);
    InterruptRate = a1->InterruptRate;
    v16 = v12;
    do
    {
      InterruptRate >>= 4;
      --v16;
    }
    while ( v16 );
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
LABEL_24:
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    result = a1->Number;
    if ( KiPollSlot == (_DWORD)result )
      return KdCheckForDebugBreak(MaximumDpcQueueDepth);
  }
  return result;
}
