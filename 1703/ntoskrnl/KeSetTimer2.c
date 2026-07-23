/*
 * XREFs of KeSetTimer2 @ 0x140049180
 * Callers:
 *     KiTriggerForegroundBoostDpc @ 0x14002FE80 (KiTriggerForegroundBoostDpc.c)
 *     ExSetTimer @ 0x14004B440 (ExSetTimer.c)
 *     ExpSetTimer2 @ 0x140051C60 (ExpSetTimer2.c)
 *     KiProcessPendingForegroundBoosts @ 0x140064FB0 (KiProcessPendingForegroundBoosts.c)
 *     NtSetInformationWorkerFactory @ 0x140129BE0 (NtSetInformationWorkerFactory.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140168740 (PopThermalUpdateTelemetryClientCount.c)
 *     MiStoreEvictThread @ 0x1401687C0 (MiStoreEvictThread.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14022F96C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x1402346D0 (PopPowerButtonWorkCallback.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140236ED4 (PopIdleArmAoAcDozeS4Timer.c)
 *     ExpTimer2Adjust @ 0x14025CFE8 (ExpTimer2Adjust.c)
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 *     EtwpEnableKernelTrace @ 0x140435210 (EtwpEnableKernelTrace.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14044CCA8 (CmpArmDelayDerefKCBWorker.c)
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 *     PopThermalWorker @ 0x1405D7C20 (PopThermalWorker.c)
 *     PopNetArmDsEvaluationTimer @ 0x1406CFD14 (PopNetArmDsEvaluationTimer.c)
 *     PopSetDripsWatchdog @ 0x1406D5530 (PopSetDripsWatchdog.c)
 *     ExInitializeTimeRefresh @ 0x140808838 (ExInitializeTimeRefresh.c)
 *     ExpWorkerInitialization @ 0x14081E950 (ExpWorkerInitialization.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KiRequestTimer2Expiration @ 0x14002331C (KiRequestTimer2Expiration.c)
 *     KiSendClockInterruptToClockOwner @ 0x14002EA08 (KiSendClockInterruptToClockOwner.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveTimer2 @ 0x140047F00 (KiRemoveTimer2.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140049B80 (KiInsertTimer2WithCollectionLockHeld.c)
 *     RtlGetSystemTimePrecise @ 0x140110620 (RtlGetSystemTimePrecise.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer2 @ 0x140206604 (KiTraceSetTimer2.c)
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
  char v17; // al
  volatile signed __int32 v18; // edx
  signed __int32 v19; // eax
  LARGE_INTEGER SystemTimePrecise; // rax
  signed __int32 v22; // edx
  void *retaddr; // [rsp+68h] [rbp+0h]
  char v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+78h] [rbp+10h] BYREF
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
  v25 = 0;
  v24 = 0;
  v15 = 1;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v25);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  if ( (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  v16 = *(_BYTE *)(a1 + 1);
  if ( (v16 & 0x20) == 0 )
  {
    if ( (v16 & 1) != 0 )
    {
      KxAcquireSpinLock(&KiTimer2CollectionLock);
      if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      {
        KiRemoveTimer2(a1);
        KxReleaseSpinLock(&KiTimer2CollectionLock);
        v14 = 1;
LABEL_18:
        *(_DWORD *)(a1 + 4) = 0;
        *(_QWORD *)(a1 + 72) = v11;
        *(_QWORD *)(a1 + 80) = v12;
        *(_QWORD *)(a1 + 88) = v5;
        *(_BYTE *)(a1 + 128) = v9;
        if ( v15 == 1 )
        {
          KxAcquireSpinLock(&KiTimer2CollectionLock);
          KiInsertTimer2WithCollectionLockHeld(a1, 1LL, &v24);
        }
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          KiTraceSetTimer2(a1, v14, v15);
        }
        else
        {
          v18 = *(_DWORD *)a1;
          v19 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)a1,
                  (v15 << 8) | *(_DWORD *)a1 & 0xFFFFF07F,
                  *(_DWORD *)a1);
          if ( v18 != v19 )
          {
            do
            {
              v22 = v19;
              v19 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v15 << 8) | v19 & 0xFFFFF07F, v19);
            }
            while ( v22 != v19 );
          }
          if ( v15 == 1 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
            else
              _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
          }
        }
        if ( KiForceIdleDisabled || KiForceIdleState != 4 )
        {
          if ( v24 )
          {
            KiRequestTimer2Expiration();
          }
          else if ( v8
                 && !KiHRTimerClockActive
                 && v11 < MEMORY[0xFFFFF78000000008] + (unsigned __int64)KeMaximumIncrement )
          {
            KiSendClockInterruptToClockOwner();
          }
        }
        goto LABEL_30;
      }
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    v17 = *(_BYTE *)(a1 + 1);
    if ( (v17 & 0xF) != 0 )
    {
      v15 = 8;
      v14 = (v17 & 4) == 0;
    }
    goto LABEL_18;
  }
LABEL_30:
  __writecr8((unsigned __int8)CurrentIrql);
  return v14;
}
