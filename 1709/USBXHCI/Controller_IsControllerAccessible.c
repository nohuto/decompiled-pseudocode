/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C0005F34
 * Callers:
 *     Register_ControllerReset @ 0x1C0002420 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C00028B4 (Register_ControllerStop.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_Start @ 0x1C0006440 (Controller_Start.c)
 *     Command_Initialize @ 0x1C000D1D8 (Command_Initialize.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000D8B0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_UcxEvtReset @ 0x1C0013880 (Controller_UcxEvtReset.c)
 *     DeviceSlot_Initialize @ 0x1C00164D8 (DeviceSlot_Initialize.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C00171C0 (XilDeviceSlot_SetDeviceContext.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C001DD2C (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C001DDA0 (Interrupter_D0Entry.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0021100 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00216C0 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0035C70 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0035E30 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C00360C0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00362A0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0036D50 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0037000 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 */

char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  unsigned __int8 v2; // cl
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL);
  if ( v2 && !*(_BYTE *)(a1 + 333) )
    return 1;
  v5 = *(unsigned __int8 *)(a1 + 333);
  v4 = v2;
  WPP_RECORDER_SF_DD(
    *(_QWORD *)(a1 + 72),
    2u,
    4u,
    0xDDu,
    (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
    v4,
    v5);
  return 0;
}
