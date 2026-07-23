/*
 * XREFs of KeSetTimer2 @ 0x140037E50
 * Callers:
 *     ExpSetTimerObject2 @ 0x140038A8C (ExpSetTimerObject2.c)
 *     KiProcessPendingForegroundBoosts @ 0x14006B340 (KiProcessPendingForegroundBoosts.c)
 *     ExSetTimer @ 0x140085490 (ExSetTimer.c)
 *     NtSetInformationWorkerFactory @ 0x140085580 (NtSetInformationWorkerFactory.c)
 *     KiTriggerForegroundBoostDpc @ 0x1400C3FF0 (KiTriggerForegroundBoostDpc.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400D2B50 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1401719D0 (PopThermalUpdateTelemetryClientCount.c)
 *     MiStoreEvictThread @ 0x14017ED50 (MiStoreEvictThread.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14027A8FC (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x14027FBD0 (PopPowerButtonWorkCallback.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14027FF14 (PopIdleArmAoAcDozeS4Timer.c)
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 *     NtCreateWorkerFactory @ 0x14052E3E4 (NtCreateWorkerFactory.c)
 *     EtwpCoverageRecord @ 0x14056F594 (EtwpCoverageRecord.c)
 *     CmpArmDelayDerefKCBWorker @ 0x140574F50 (CmpArmDelayDerefKCBWorker.c)
 *     EtwpEnableKernelTrace @ 0x14057BB2C (EtwpEnableKernelTrace.c)
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 *     ExpWorkQueueManagerThread @ 0x140636B70 (ExpWorkQueueManagerThread.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PopThermalWorker @ 0x140643860 (PopThermalWorker.c)
 *     EtwpCoverageEnsureContext @ 0x14064D564 (EtwpCoverageEnsureContext.c)
 *     PopDirectedDripsStartDebounceInterval @ 0x140761E88 (PopDirectedDripsStartDebounceInterval.c)
 *     PopNetArmDsEvaluationTimer @ 0x14076B774 (PopNetArmDsEvaluationTimer.c)
 *     PopNetArmRefreshTimer @ 0x14076B7D0 (PopNetArmRefreshTimer.c)
 *     PopSetDripsWatchdog @ 0x14076E758 (PopSetDripsWatchdog.c)
 *     ExInitializeTimeRefresh @ 0x1408B1178 (ExInitializeTimeRefresh.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x140005910 (KiSendClockInterruptToClockOwner.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x1400382EC (KeIsForceIdleEngaged.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14003830C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140038350 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiRequestTimer2Expiration @ 0x14007CC18 (KiRequestTimer2Expiration.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400E7BC0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiRemoveTimer2 @ 0x1400E9160 (KiRemoveTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x1400EA6A4 (KiShouldActivateHRTimerClock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400EE044 (KiHvEnlightenedGuestPriorityKick.c)
 *     RtlGetSystemTimePrecise @ 0x140132A80 (RtlGetSystemTimePrecise.c)
 *     KiTraceSetTimer2 @ 0x14024AF18 (KiTraceSetTimer2.c)
 */

_BOOL8 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rbp
  bool v8; // si
  char v9; // r13
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rax
  bool v14; // r14
  unsigned int v15; // ebp
  char v16; // al
  volatile signed __int32 v17; // edx
  signed __int32 v18; // eax
  LARGE_INTEGER SystemTimePrecise; // rdx
  __int64 v21; // rax
  signed __int32 v22; // r8d
  char v23; // [rsp+70h] [rbp+8h] BYREF
  char v24; // [rsp+78h] [rbp+10h] BYREF
  __int64 CurrentIrql; // [rsp+80h] [rbp+18h]
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a2;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = (*(_BYTE *)(a1 + 129) & 4) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = 0;
  if ( a2 > 0 )
  {
    v9 = 1;
    if ( v8 )
      SystemTimePrecise = RtlGetSystemTimePrecise();
    else
      SystemTimePrecise.QuadPart = MEMORY[0xFFFFF78000000014];
    v21 = 0LL;
    if ( v6 > SystemTimePrecise.QuadPart )
      v21 = SystemTimePrecise.QuadPart - v6;
    v6 = v21;
  }
  if ( v8 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  else
    InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
  v11 = InterruptTimePrecise.QuadPart - v6;
  if ( InterruptTimePrecise.QuadPart >= (unsigned __int64)v6 || v11 == -1LL )
    v11 = -2LL;
  v12 = v11;
  if ( a4 && *(_BYTE *)(a1 + 130) != 20 )
  {
    v13 = *(_QWORD *)(a4 + 8);
    if ( v13 == -1 )
    {
      v12 = -1LL;
    }
    else
    {
      v12 = v13 + v11;
      if ( v13 + v11 < v11 || v12 == -1 )
        v12 = -2LL;
    }
  }
  v14 = 0;
  v24 = 0;
  v15 = 1;
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
      v14 = 1;
    }
    else
    {
      v16 = *(_BYTE *)(a1 + 1);
      if ( (v16 & 0xF) != 0 )
      {
        v15 = 8;
        v14 = (v16 & 4) == 0;
      }
    }
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 72) = v11;
    *(_QWORD *)(a1 + 80) = v12;
    *(_QWORD *)(a1 + 88) = v5;
    *(_BYTE *)(a1 + 128) = v9;
    v23 = 0;
    if ( v15 == 1 )
    {
      KxAcquireSpinLock(&KiTimer2CollectionLock);
      KiInsertTimer2WithCollectionLockHeld(a1, 1LL, &v24, &v23);
    }
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      KiTraceSetTimer2(a1, v14, v15);
    }
    else
    {
      v17 = *(_DWORD *)a1;
      v18 = _InterlockedCompareExchange(
              (volatile signed __int32 *)a1,
              (v15 << 8) | *(_DWORD *)a1 & 0xFFFFF07F,
              *(_DWORD *)a1);
      if ( v17 != v18 )
      {
        do
        {
          v22 = v18;
          v18 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v15 << 8) | v18 & 0xFFFFF07F, v18);
        }
        while ( v22 != v18 );
      }
      if ( v15 == 1 )
        KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    if ( v23 )
      KiHvEnlightenedGuestPriorityKick(
        KeGetCurrentPrcb(),
        KiProcessorBlock[KiClockTimerOwner],
        (unsigned int)KiVpThreadSystemWorkPriority);
    if ( !(unsigned __int8)KeIsForceIdleEngaged() )
    {
      if ( v24 )
      {
        KiRequestTimer2Expiration();
      }
      else if ( v8 && (unsigned __int8)KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v11) )
      {
        KiSendClockInterruptToClockOwner();
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v14;
}
