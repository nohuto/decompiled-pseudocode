/*
 * XREFs of KeSetTimer2 @ 0x1400605A0
 * Callers:
 *     KiProcessPendingForegroundBoosts @ 0x1400AA990 (KiProcessPendingForegroundBoosts.c)
 *     NtSetInformationWorkerFactory @ 0x1400B1CE0 (NtSetInformationWorkerFactory.c)
 *     ExSetTimer @ 0x1400E0EB0 (ExSetTimer.c)
 *     ExpSetTimer2 @ 0x1400E2540 (ExpSetTimer2.c)
 *     KiTriggerForegroundBoostDpc @ 0x140127120 (KiTriggerForegroundBoostDpc.c)
 *     MiStoreEvictThread @ 0x1401DF9C0 (MiStoreEvictThread.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140243DD4 (PopThermalUpdateTelemetryClientCount.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14024417C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x140249C30 (PopPowerButtonWorkCallback.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14024C0E4 (PopIdleArmAoAcDozeS4Timer.c)
 *     ExpTimeRefreshWork @ 0x140428DB0 (ExpTimeRefreshWork.c)
 *     NtCreateWorkerFactory @ 0x1404EB4C8 (NtCreateWorkerFactory.c)
 *     EtwpCoverageRecord @ 0x140579384 (EtwpCoverageRecord.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1405851A8 (CmpArmDelayDerefKCBWorker.c)
 *     EtwpEnableKernelTrace @ 0x140596E88 (EtwpEnableKernelTrace.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 *     ExpWorkQueueManagerThread @ 0x1405D0160 (ExpWorkQueueManagerThread.c)
 *     EtwpCoverageEnsureContext @ 0x1405E714C (EtwpCoverageEnsureContext.c)
 *     PopThermalWorker @ 0x140700090 (PopThermalWorker.c)
 *     PopNetArmDsEvaluationTimer @ 0x140707934 (PopNetArmDsEvaluationTimer.c)
 *     PopNetArmRefreshTimer @ 0x140707990 (PopNetArmRefreshTimer.c)
 *     PopSetDripsWatchdog @ 0x14070B03C (PopSetDripsWatchdog.c)
 *     ExInitializeTimeRefresh @ 0x14083CB54 (ExInitializeTimeRefresh.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x14005DBF0 (KiRemoveTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14005DD20 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeIsForceIdleEngaged @ 0x14006238C (KeIsForceIdleEngaged.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400623AC (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400623F0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 *     KiSendClockInterruptToClockOwner @ 0x14010F0C8 (KiSendClockInterruptToClockOwner.c)
 *     KiShouldActivateHRTimerClock @ 0x1401268E8 (KiShouldActivateHRTimerClock.c)
 *     KiRequestTimer2Expiration @ 0x140128108 (KiRequestTimer2Expiration.c)
 *     RtlGetSystemTimePrecise @ 0x140155590 (RtlGetSystemTimePrecise.c)
 *     KiTraceSetTimer2 @ 0x14020CBA4 (KiTraceSetTimer2.c)
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
  LARGE_INTEGER SystemTimePrecise; // rax
  signed __int32 v21; // r8d
  char v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 CurrentIrql; // [rsp+68h] [rbp+10h]
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp+18h] BYREF

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
    if ( v6 > SystemTimePrecise.QuadPart )
      v6 = SystemTimePrecise.QuadPart - v6;
    else
      v6 = 0LL;
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
  v22 = 0;
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
    if ( v15 == 1 )
    {
      KxAcquireSpinLock(&KiTimer2CollectionLock);
      KiInsertTimer2WithCollectionLockHeld(a1, 1, &v22);
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
          v21 = v18;
          v18 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v15 << 8) | v18 & 0xFFFFF07F, v18);
        }
        while ( v21 != v18 );
      }
      if ( v15 == 1 )
        KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    if ( !(unsigned __int8)KeIsForceIdleEngaged() )
    {
      if ( v22 )
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
