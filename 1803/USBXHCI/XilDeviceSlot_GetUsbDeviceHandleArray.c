/*
 * XREFs of XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C000F528
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C00083F8 (Controller_InitiateRecovery.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1C000F0BC (DeviceSlot_LocateDeviceByPortPath.c)
 *     Controller_TelemetryAddControllerData @ 0x1C00560E0 (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetUsbDeviceHandleArray(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 80) )
    return *(_QWORD *)(a1 + 24);
  else
    return *(_QWORD *)(a1 + 72);
}
