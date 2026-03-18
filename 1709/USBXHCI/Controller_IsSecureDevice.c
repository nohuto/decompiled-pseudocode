/*
 * XREFs of Controller_IsSecureDevice @ 0x1C0011780
 * Callers:
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C0055044 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C00552D4 (Command_CreateCommandWatchdogTimer.c)
 *     CommonBuffer_Create @ 0x1C0055618 (CommonBuffer_Create.c)
 *     Controller_PopulateDeviceFlags @ 0x1C0057684 (Controller_PopulateDeviceFlags.c)
 *     Controller_TelemetryAddControllerData @ 0x1C005914C (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005A020 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C005A200 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Endpoint_Create @ 0x1C005AF24 (Endpoint_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C005B5F0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Interrupter_CreateInterrupter @ 0x1C005BBD8 (Interrupter_CreateInterrupter.c)
 *     Register_Create @ 0x1C005CE90 (Register_Create.c)
 *     Register_PrepareHardware @ 0x1C005D868 (Register_PrepareHardware.c)
 *     TR_Create @ 0x1C005E82C (TR_Create.c)
 *     Bulk_GetConfiguration @ 0x1C005F064 (Bulk_GetConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 441);
}
