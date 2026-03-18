/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x1C0009BF4
 * Callers:
 *     ACPIDispatchIrp @ 0x1C00010A0 (ACPIDispatchIrp.c)
 *     ACPIThermalActivateConstraint @ 0x1C001DB88 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0022BA8 (ACPIThermalGetSensorDevice.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C00280E0 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIWakeWaitIrp @ 0x1C0028B10 (ACPIWakeWaitIrp.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C0029BE0 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C002A9C0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C0048F30 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C0049070 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C00491B0 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x1C004BB90 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C004E890 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1C008E670 (ACPIIrpCompletionRoutineWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIInternalDecrementIrpReferenceCount(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 680), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 704), 0, 0);
  return result;
}
