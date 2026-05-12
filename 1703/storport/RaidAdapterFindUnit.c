/*
 * XREFs of RaidAdapterFindUnit @ 0x1C0006170
 * Callers:
 *     StorPortNotification @ 0x1C0005A70 (StorPortNotification.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C00060C0 (StorPortSetDeviceQueueDepth.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 *     RaidAdapterDeferredRoutine @ 0x1C000CC80 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C000CDC8 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C000CE20 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C000CFA0 (StorPortResumeDevice.c)
 *     StorPortGetLogicalUnit @ 0x1C000E2C0 (StorPortGetLogicalUnit.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00151E4 (RaidBusEnumeratorGetUnit.c)
 *     StorpTelemetryMiniportEvent @ 0x1C001C454 (StorpTelemetryMiniportEvent.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C001DC60 (StorPortpInvokeAcpiMethod.c)
 *     RaidAdapterDeviceBusy @ 0x1C002C090 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C002C158 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002E794 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C002EBF0 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C00329A0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0032B60 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0032D00 (StorPortDeviceReady.c)
 *     StorpLogSystemEvent @ 0x1C0034980 (StorpLogSystemEvent.c)
 *     StorpSetUnitAttributes @ 0x1C0034CE8 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0034D60 (StorpUnitInitializePoFxPower.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C003DEE0 (RaidUnitProcessAsyncNotification.c)
 *     RaidAdapterPassThrough @ 0x1C0063E9C (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterFindUnitAtPassive @ 0x1C00061E4 (RaidAdapterFindUnitAtPassive.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C000629C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0006328 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000648C (RaidAdapterAcquireInterruptLock.c)
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
