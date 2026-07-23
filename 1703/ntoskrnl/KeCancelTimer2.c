/*
 * XREFs of KeCancelTimer2 @ 0x14012ACD0
 * Callers:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140004F20 (PopIdleCancelAoAcDozeS4Timer.c)
 *     ExpSetTimer2 @ 0x140051C60 (ExpSetTimer2.c)
 *     ExCancelTimer @ 0x14012AB50 (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x14012AB80 (ExpShutdownWorkerFactory.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14013DF8C (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140168740 (PopThermalUpdateTelemetryClientCount.c)
 *     ExpTimer2Adjust @ 0x14025CFE8 (ExpTimer2Adjust.c)
 *     EtwpDisableKernelTrace @ 0x1404354A0 (EtwpDisableKernelTrace.c)
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 *     PdcPoNetworkResiliency @ 0x1406CB1A0 (PdcPoNetworkResiliency.c)
 *     PopCancelDripsWatchdog @ 0x1406D4C44 (PopCancelDripsWatchdog.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KiRemoveTimer2 @ 0x140047F00 (KiRemoveTimer2.c)
 *     KiUpdateTimer2Flags @ 0x14012AFB0 (KiUpdateTimer2Flags.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14012B04C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14012B098 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiTraceCancelTimer2 @ 0x140206444 (KiTraceCancelTimer2.c)
 */

char __fastcall KeCancelTimer2(__int64 a1)
{
  char v1; // di
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
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled() )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
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
    KiUpdateTimer2Flags(a1, v2, v1 == 0 ? 2 : 0);
  }
  __writecr8(CurrentIrql);
  if ( v4 && v1 )
    KiTraceCancelTimer2(a1, KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v5 ^ KiWaitNever, KiWaitNever)));
  return v1;
}
