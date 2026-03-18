/*
 * XREFs of KeCancelTimer2 @ 0x1400873D0
 * Callers:
 *     ExpSetTimerObject2 @ 0x140038A8C (ExpSetTimerObject2.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140077584 (PopIdleCancelAoAcDozeS4Timer.c)
 *     ExCancelTimer @ 0x140085540 (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x140087284 (ExpShutdownWorkerFactory.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140156204 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1401719D0 (PopThermalUpdateTelemetryClientCount.c)
 *     EtwpDisableKernelTrace @ 0x14057BDC8 (EtwpDisableKernelTrace.c)
 *     EtwpCoverageFlushPending @ 0x140583420 (EtwpCoverageFlushPending.c)
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 *     PopDisengageDirectedDrips @ 0x140761FD4 (PopDisengageDirectedDrips.c)
 *     PdcPoNetworkResiliency @ 0x140764A70 (PdcPoNetworkResiliency.c)
 *     PopNetUpdateConnectivityRefreshTime @ 0x14076BB08 (PopNetUpdateConnectivityRefreshTime.c)
 *     PopCancelDripsWatchdog @ 0x14076DCD4 (PopCancelDripsWatchdog.c)
 *     ExpPartitionDestroy @ 0x1407C56B0 (ExpPartitionDestroy.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14003830C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140038350 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiUpdateTimer2Flags @ 0x140087660 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1400E9160 (KiRemoveTimer2.c)
 *     KiTraceCancelTimer2 @ 0x14024AD58 (KiTraceCancelTimer2.c)
 */

unsigned __int8 __fastcall KeCancelTimer2(__int64 a1)
{
  unsigned __int8 v1; // di
  unsigned int v2; // r14d
  char v4; // si
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // r15

  v1 = 0;
  v2 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( !KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
        goto LABEL_7;
      v2 = 4;
    }
    v1 = 1;
LABEL_7:
    KiUpdateTimer2Flags(a1, v2, 2 * (v1 ^ 1u));
  }
  __writecr8(CurrentIrql);
  if ( v4 && v1 )
    KiTraceCancelTimer2(a1, KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v5 ^ KiWaitNever, KiWaitNever)));
  return v1;
}
