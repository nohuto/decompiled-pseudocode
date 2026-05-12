/*
 * XREFs of RaidAdapterFindUnit @ 0x1C00061C8
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001AA0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C0001BEC (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C0001C50 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0001DD0 (StorPortResumeDevice.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C0004F40 (StorPortSetDeviceQueueDepth.c)
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C0015634 (RaidBusEnumeratorGetUnit.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C001CFE0 (StorPortpInvokeAcpiMethod.c)
 *     StorpTelemetryMiniportEvent @ 0x1C001D374 (StorpTelemetryMiniportEvent.c)
 *     RaidAdapterDeviceBusy @ 0x1C002CF00 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C002CFC8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002F4D0 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C002F930 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C0033A90 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0033C50 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0033DF0 (StorPortDeviceReady.c)
 *     StorPortGetLogicalUnit @ 0x1C0033F70 (StorPortGetLogicalUnit.c)
 *     StorpLogSystemEvent @ 0x1C0035CFC (StorpLogSystemEvent.c)
 *     StorpSetUnitAttributes @ 0x1C00360F4 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003616C (StorpUnitInitializePoFxPower.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C003EDA4 (RaidUnitProcessAsyncNotification.c)
 *     RaidAdapterPassThrough @ 0x1C0067364 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterFindUnitAtPassive @ 0x1C0006240 (RaidAdapterFindUnitAtPassive.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C00069A0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A30 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0006AB8 (RaidAdapterFindUnitAtDirql.c)
 */

__int64 __fastcall RaidAdapterFindUnit(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 v6; // rbx
  char v8; // di
  __int64 UnitAtDirql; // rax
  __int64 v10; // rdx

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return RaidAdapterFindUnitAtPassive();
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 672) )
  {
    v8 = RaidAdapterAcquireInterruptLock();
    UnitAtDirql = RaidAdapterFindUnitAtDirql(a1, a2);
    LOBYTE(v10) = v8;
    v6 = UnitAtDirql;
    RaidAdapterReleaseInterruptLock(a1, v10);
    return v6;
  }
  return ((__int64 (*)(void))RaidAdapterFindUnitAtDirql)();
}
