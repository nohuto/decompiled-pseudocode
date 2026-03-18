/*
 * XREFs of Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001460 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000CADC (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C000CF74 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000D8B0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_InternalReset @ 0x1C0011414 (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00118AC (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_SetControllerGone @ 0x1C00123D0 (Controller_SetControllerGone.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017FE0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C00181E0 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C00199A0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0019B40 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C001A4A0 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C001A7B0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C001AA64 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Endpoint_TransferEventHandler @ 0x1C001B71C (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C00248A4 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0024B9C (Control_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0029548 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0029850 (Isoch_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002F2C0 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002F58C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002FA50 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0033860 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0033A70 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0033DA0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0034130 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C00356A0 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     McTemplateK0pppxsbb @ 0x1C0007654 (McTemplateK0pppxsbb.c)
 *     WPP_RECORDER_SF_s @ 0x1C0015E94 (WPP_RECORDER_SF_s.c)
 */

NTSTATUS __fastcall Controller_HwVerifierBreakIfEnabled(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const char *a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 v11; // r8
  NTSTATUS result; // eax
  __int64 *v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-10h]

  WPP_RECORDER_SF_s(a1[9], a2, a3, a4);
  if ( (a4 & a1[47]) != 0 )
  {
    DbgPrint("xHCI Hardware Verifier Break: %s\n", a5);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v15 = 0LL;
  v16 = 0LL;
  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x10) != 0 )
  {
    v13 = &v15;
    v14 = &v15;
    if ( a7 )
      v13 = a7;
    if ( a6 )
      v14 = a6;
    return McTemplateK0pppxsbb((__int64)v14, (__int64)v13, v11, a1[1], a2, a3, a4, a5, v14, v13, v15, v16);
  }
  return result;
}
