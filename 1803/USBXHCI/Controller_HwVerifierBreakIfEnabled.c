/*
 * XREFs of Controller_HwVerifierBreakIfEnabled @ 0x1C0008150
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001640 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0003908 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0003D70 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00046A0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_InternalReset @ 0x1C00086D4 (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008BD4 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_SetControllerGone @ 0x1C0009748 (Controller_SetControllerGone.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0010C40 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0010E40 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C00126E0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0012870 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0013190 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C00134A0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C0013754 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Endpoint_TransferEventHandler @ 0x1C00144C0 (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0022114 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0022404 (Control_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0026FC0 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C00272C8 (Isoch_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002CD8C (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002D05C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002D524 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C00313A0 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0031580 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0031890 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0031C40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0033250 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     McTemplateK0pppxsbb @ 0x1C000D1BC (McTemplateK0pppxsbb.c)
 *     WPP_RECORDER_SF_s @ 0x1C000EB34 (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall Controller_HwVerifierBreakIfEnabled(
        _QWORD *a1,
        int a2,
        int a3,
        __int64 a4,
        const char *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  char v8; // bp
  char v9; // r14
  int v11; // r8d
  __int64 result; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  _QWORD v15[2]; // [rsp+50h] [rbp-18h] BYREF

  v8 = a3;
  v9 = a2;
  WPP_RECORDER_SF_s(a1[9], a2, a3, a4);
  if ( (a4 & a1[47]) != 0 )
  {
    DbgPrint("xHCI Hardware Verifier Break: %s\n", a5);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v15[0] = 0LL;
  v15[1] = 0LL;
  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x10) != 0 )
  {
    v13 = v15;
    v14 = v15;
    if ( a7 )
      v13 = a7;
    if ( a6 )
      v14 = a6;
    return McTemplateK0pppxsbb(
             (_DWORD)v14,
             (_DWORD)v13,
             v11,
             a1[1],
             v9,
             v8,
             a4,
             (__int64)a5,
             (__int64)v14,
             (__int64)v13);
  }
  return result;
}
