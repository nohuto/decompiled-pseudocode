/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x1C0029B28
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C001AC60 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C001ADD0 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C001AF10 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C001B050 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C001B400 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x1C0020E60 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C0024690 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0024F40 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIThermalActivateConstraint @ 0x1C003BBA4 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1C003C9E4 (ACPIThermalGetSensorDevice.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1C0074030 (ACPIIrpCompletionRoutineWorker.c)
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
