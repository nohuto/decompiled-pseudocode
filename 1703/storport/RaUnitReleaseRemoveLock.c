/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C00054E4
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00026F0 (StorpDeviceHealthWorkItemRoutine.c)
 *     RaUnitPnpIrp @ 0x1C0004E20 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiIrp @ 0x1C0006F90 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 *     RaUnitStartIo @ 0x1C0007D00 (RaUnitStartIo.c)
 *     RaUnitPowerIrp @ 0x1C000E39C (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000E530 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C000F180 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000F390 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017C80 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002BBC4 (RaidAdapterCheckWaitTimeout.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C0036700 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaidCancelIrp @ 0x1C00393F4 (RaidCancelIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003A164 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003A298 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C003A320 (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C003B0F4 (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C003C050 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C003C6D0 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003D940 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaWmiDispatchIrp @ 0x1C0061824 (RaWmiDispatchIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006566C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RaUnitReleaseRemoveLock(struct _KEVENT *a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd(&a1[27].Header.Lock, 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(a1 + 7, 0, 0);
  return result;
}
