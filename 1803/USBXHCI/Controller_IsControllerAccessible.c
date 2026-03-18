/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C0008A48
 * Callers:
 *     Command_Initialize @ 0x1C0003FD0 (Command_Initialize.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00046A0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_Start @ 0x1C0009800 (Controller_Start.c)
 *     Controller_UcxEvtReset @ 0x1C000AFD0 (Controller_UcxEvtReset.c)
 *     DeviceSlot_Initialize @ 0x1C000F07C (DeviceSlot_Initialize.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C000FD78 (XilDeviceSlot_SetDeviceContext.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C0016ADC (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C0016B40 (Interrupter_D0Entry.c)
 *     Register_ControllerReset @ 0x1C0018A80 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C0018D10 (Register_ControllerStop.c)
 *     Register_WaitForControllerReady @ 0x1C0019430 (Register_WaitForControllerReady.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001B250 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C001C9C0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C001CD00 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C001D540 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C001D970 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001EF70 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0033820 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00339E0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0033C50 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0033E10 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C00348F0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0034BC0 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 */

char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  char v2; // cl

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL);
  if ( v2 && !*(_BYTE *)(a1 + 333) )
    return 1;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(a1 + 72),
    2,
    4,
    222,
    (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
    v2,
    *(_BYTE *)(a1 + 333));
  return 0;
}
