/*
 * XREFs of ESM_AddEvent @ 0x1C003DBEC
 * Callers:
 *     DeviceSlot_ControllerResetPreReset @ 0x1C001632C (DeviceSlot_ControllerResetPreReset.c)
 *     Endpoint_ClearStallTransferCompletion @ 0x1C0017F70 (Endpoint_ClearStallTransferCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017FE0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C00181E0 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_Enable @ 0x1C00185D0 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C00189B0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0018BC0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0019368 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0019520 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0019690 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C00199A0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0019B40 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019E64 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C001A0D0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001A260 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C001A4A0 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C001A7B0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1C001AF18 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C001B5C8 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C001B66C (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Endpoint_TransferEventHandler @ 0x1C001B71C (Endpoint_TransferEventHandler.c)
 *     Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C001C180 (Endpoint_UcxEvtEndpointOkToCancelTransfers.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C001C340 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_WdfEvtStateMachineTimer @ 0x1C001D140 (Endpoint_WdfEvtStateMachineTimer.c)
 *     TR_AttemptStateChange @ 0x1C002275C (TR_AttemptStateChange.c)
 *     TR_TransfersReclaimed @ 0x1C002398C (TR_TransfersReclaimed.c)
 *     Control_EP_ProcessExpectedEventTRBs @ 0x1C00240E0 (Control_EP_ProcessExpectedEventTRBs.c)
 *     Control_EP_StopMapping @ 0x1C00242D0 (Control_EP_StopMapping.c)
 *     Control_MapTransfer @ 0x1C0024510 (Control_MapTransfer.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C00248A4 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0024B9C (Control_ProcessTransferEventWithED1.c)
 *     Control_Transfer_MapIntoRing @ 0x1C0025B3C (Control_Transfer_MapIntoRing.c)
 *     Control_WdfEvtRequestCancel @ 0x1C00269F0 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C0026B50 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_ProcessExpectedEventTRBs @ 0x1C0028040 (Isoch_EP_ProcessExpectedEventTRBs.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0029548 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0029850 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C0029B58 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C002C660 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x1C002E130 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002F2C0 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002F58C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002FA50 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C0031EA0 (Bulk_WdfEvtRequestCancel.c)
 *     UsbDevice_ControllerGone @ 0x1C003369C (UsbDevice_ControllerGone.c)
 *     UsbDevice_ControllerResetPostReset @ 0x1C0033738 (UsbDevice_ControllerResetPostReset.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0033860 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0033A70 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0033DA0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0034130 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C00359BC (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0035E30 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C00360C0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00362A0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0036D50 (UsbDevice_UcxEvtReset.c)
 *     ESM_AddEsmEvent @ 0x1C003DBD0 (ESM_AddEsmEvent.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1C003F440 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C003DD40 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_RunStateMachine @ 0x1C003E574 (ESM_RunStateMachine.c)
 */

void __fastcall ESM_AddEvent(KSPIN_LOCK *Context, int a2)
{
  KSPIN_LOCK *v2; // rsi
  __int64 v5; // rax
  KSPIN_LOCK v6; // rdx
  __int64 v7; // rax
  KIRQL NewIrql; // [rsp+48h] [rbp+10h]

  v2 = Context + 105;
  NewIrql = KeAcquireSpinLockRaiseToDpc(Context + 105);
  *((_DWORD *)Context + *((unsigned __int8 *)Context + 833) + 192) = a2;
  *((_BYTE *)Context + 833) = (*((_BYTE *)Context + 833) + 1) & 0xF;
  if ( *((_BYTE *)Context + 1016) )
  {
    if ( a2 == 126 )
    {
      *((_BYTE *)Context + 1016) = 0;
      ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(Context);
LABEL_7:
      ESM_RunStateMachine(Context);
      goto LABEL_8;
    }
    *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
    *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
  }
  else
  {
    *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
    *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
    if ( !*((_BYTE *)Context + 848) )
    {
      v5 = WdfFunctions_01015;
      v6 = Context[120];
      *((_BYTE *)Context + 848) = 1;
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, KSPIN_LOCK))(v5 + 1632))(WdfDriverGlobals, v6);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v7,
        "State Machine Tag",
        913LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
      goto LABEL_7;
    }
  }
LABEL_8:
  KeReleaseSpinLock(v2, NewIrql);
}
