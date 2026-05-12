/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C0005880
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00035B0 (StorpDeviceHealthWorkItemRoutine.c)
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiIrp @ 0x1C0007320 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0007770 (RaidStartIoPacket.c)
 *     RaUnitStartIo @ 0x1C0008160 (RaUnitStartIo.c)
 *     RaUnitPowerIrp @ 0x1C000E690 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000E82C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000FA60 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0010460 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017E0C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002C9C8 (RaidAdapterCheckWaitTimeout.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C00384F0 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaidCancelIrp @ 0x1C003AF04 (RaidCancelIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003BEB4 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003BFE8 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C003C04C (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C003CE38 (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C003D960 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C003DFD0 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003E810 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C003EEF0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaWmiDispatchIrp @ 0x1C0063BE4 (RaWmiDispatchIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0068D2C (RaUnitSurpriseRemovalIrp.c)
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
