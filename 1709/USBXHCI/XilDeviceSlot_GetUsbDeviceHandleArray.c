/*
 * XREFs of XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C0016984
 * Callers:
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1C0016518 (DeviceSlot_LocateDeviceByPortPath.c)
 *     Controller_TelemetryAddControllerData @ 0x1C005914C (Controller_TelemetryAddControllerData.c)
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
