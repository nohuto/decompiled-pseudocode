/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C0008488
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0002D10 (StorpDeviceHealthWorkItemRoutine.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006F88 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C00077A0 (RaUnitPnpIrp.c)
 *     RaidUnitReleaseIrp @ 0x1C0007EEC (RaidUnitReleaseIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0008110 (RaUnitDeviceControlIrp.c)
 *     RaUnitScsiIrp @ 0x1C00085C0 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0008A60 (RaidStartIoPacket.c)
 *     RaUnitStartIo @ 0x1C0009A00 (RaUnitStartIo.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000DA0C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C000DD20 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000DF8C (RaidUnitSetSystemPowerIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000FB38 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0010880 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0010CC0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C0010F60 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001784C (RaUnitDeleteDeviceIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0025224 (RaidAdapterCheckWaitTimeout.c)
 *     RaidCancelIrp @ 0x1C00395C4 (RaidCancelIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003A754 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C003A7B8 (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C003B464 (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C003BE20 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C003C630 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003CDF0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005FD60 (RaUnitSurpriseRemovalIrp.c)
 *     RaWmiDispatchIrp @ 0x1C0060794 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RaUnitReleaseRemoveLock(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 680), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 168), 0, 0);
  return result;
}
