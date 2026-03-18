/*
 * XREFs of Controller_IsSecureDevice @ 0x1C0008AAC
 * Callers:
 *     Command_CreateCommandWatchdogTimer @ 0x1C0052194 (Command_CreateCommandWatchdogTimer.c)
 *     CommonBuffer_Create @ 0x1C00524D8 (CommonBuffer_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00541C8 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_PopulateDeviceFlags @ 0x1C00545F4 (Controller_PopulateDeviceFlags.c)
 *     Controller_TelemetryAddControllerData @ 0x1C00560E0 (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0057010 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0057260 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Endpoint_Create @ 0x1C0057FA8 (Endpoint_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0058670 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Interrupter_CreateInterrupter @ 0x1C0058C58 (Interrupter_CreateInterrupter.c)
 *     Register_Create @ 0x1C005A1EC (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C005A510 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C005ABEC (Register_PrepareHardware.c)
 *     TR_Create @ 0x1C005BBAC (TR_Create.c)
 *     Bulk_GetConfiguration @ 0x1C005C404 (Bulk_GetConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 441);
}
