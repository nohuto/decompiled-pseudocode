/*
 * XREFs of RaidAdapterFindUnit @ 0x1C0006BF0
 * Callers:
 *     StorPortNotification @ 0x1C00022F0 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0003730 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C0003820 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C0003880 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0003C30 (StorPortResumeDevice.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C0005CB0 (StorPortSetDeviceQueueDepth.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006F88 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C0014224 (RaidBusEnumeratorGetUnit.c)
 *     RaidAdapterDeviceBusy @ 0x1C0025D00 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0025DC8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002937C (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C0029890 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C0030010 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C00302A0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0030440 (StorPortDeviceReady.c)
 *     StorPortGetLogicalUnit @ 0x1C0030770 (StorPortGetLogicalUnit.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0031520 (StorPortpInvokeAcpiMethod.c)
 *     StorpLogSystemEvent @ 0x1C00333E8 (StorpLogSystemEvent.c)
 *     StorpSetUnitAttributes @ 0x1C0033818 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0033890 (StorpUnitInitializePoFxPower.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C0039288 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C003D38C (RaidUnitProcessAsyncNotification.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0045A94 (StorpTelemetryMiniportEvent.c)
 *     RaidAdapterPassThrough @ 0x1C00642A4 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterFindUnitAtPassive @ 0x1C0006C64 (RaidAdapterFindUnitAtPassive.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006D1C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0006D90 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006EEC (RaidAdapterAcquireInterruptLock.c)
 */

__int64 __fastcall RaidAdapterFindUnit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // al
  __int64 v8; // rbx
  char v10; // di
  __int64 UnitAtDirql; // rax
  __int64 v12; // rdx

  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return RaidAdapterFindUnitAtPassive();
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 672) )
  {
    v10 = RaidAdapterAcquireInterruptLock(a1, a2, a3, a4);
    UnitAtDirql = RaidAdapterFindUnitAtDirql(a1, v4);
    LOBYTE(v12) = v10;
    v8 = UnitAtDirql;
    RaidAdapterReleaseInterruptLock(a1, v12);
    return v8;
  }
  return ((__int64 (*)(void))RaidAdapterFindUnitAtDirql)();
}
