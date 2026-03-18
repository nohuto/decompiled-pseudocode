/*
 * XREFs of XilDeviceSlot_GetNumberOfDeviceSlots @ 0x1C0016978
 * Callers:
 *     Controller_TelemetryAddControllerData @ 0x1C005914C (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetNumberOfDeviceSlots(__int64 a1)
{
  return *(unsigned int *)(a1 + 96);
}
