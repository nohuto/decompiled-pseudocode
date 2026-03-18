/*
 * XREFs of XilDeviceSlot_GetNumberOfDeviceSlots @ 0x1C000F51C
 * Callers:
 *     Controller_TelemetryAddControllerData @ 0x1C00560E0 (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetNumberOfDeviceSlots(__int64 a1)
{
  return *(unsigned int *)(a1 + 96);
}
