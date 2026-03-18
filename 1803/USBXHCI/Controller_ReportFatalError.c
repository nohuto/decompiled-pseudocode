/*
 * XREFs of Controller_ReportFatalError @ 0x1C00095DC
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001640 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0003908 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0003D70 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00046A0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C0007C00 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InternalReset @ 0x1C00086D4 (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008BD4 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_SetControllerGone @ 0x1C0009748 (Controller_SetControllerGone.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0010C40 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0010E40 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C001209C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0012270 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00123D0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C00126E0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0012870 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0012DE0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0012F60 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0013190 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C00134A0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C0013754 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Endpoint_TransferEventHandler @ 0x1C00144C0 (Endpoint_TransferEventHandler.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0016F88 (Interrupter_DeferredWorkProcessor.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0022404 (Control_ProcessTransferEventWithED1.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0023BC4 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C00272C8 (Isoch_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002D05C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C002F500 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C00313A0 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0031580 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0031890 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0031C40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0033250 (UsbDevice_SetAddressCompletion.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0057010 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Controller_InitiateBootRecovery @ 0x1C0008370 (Controller_InitiateBootRecovery.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 */

void __fastcall Controller_ReportFatalError(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // ebp
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 *PoolWithTag; // rax
  KIRQL v13; // al
  __int64 **v14; // rcx
  char v15; // [rsp+30h] [rbp-28h]

  v8 = a2;
  v15 = a2;
  LOBYTE(a2) = 1;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(a1 + 72),
    a2,
    4,
    221,
    (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
    a3,
    v15);
  DbgPrint("\nXHCI reported fatal error\n");
  if ( (*(_DWORD *)(a1 + 324) & 0x12) != 0 )
  {
    Controller_InitiateBootRecovery((_QWORD *)a1, v8);
  }
  else
  {
    v10 = 0LL;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 304),
            off_1C004B110);
    if ( a3 )
    {
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag(
                                 *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                                 0x30uLL,
                                 0x49434858u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[4] = a5;
        PoolWithTag[5] = a6;
        *((_DWORD *)PoolWithTag + 4) = a3;
        PoolWithTag[3] = a4;
        PoolWithTag[1] = 0LL;
        *PoolWithTag = 0LL;
      }
    }
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 16));
    if ( v10 )
    {
      v14 = *(__int64 ***)(v11 + 8);
      if ( *v14 != (__int64 *)v11 )
        __fastfail(3u);
      *v10 = v11;
      v10[1] = (__int64)v14;
      *v14 = v10;
      *(_QWORD *)(v11 + 8) = v10;
    }
    *(_DWORD *)(v11 + 80) |= v8;
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 16), v13);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 304));
  }
}
