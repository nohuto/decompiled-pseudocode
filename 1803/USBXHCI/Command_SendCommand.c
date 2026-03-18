/*
 * XREFs of Command_SendCommand @ 0x1C0004578
 * Callers:
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00034FC (Command_D0EntryPostInterruptsEnabled.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0010C40 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C001209C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00123D0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0012588 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0012B88 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0012F60 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C0013388 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C00137E4 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0013890 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C00139DC (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0014980 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_DisableCompletion @ 0x1C0031580 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0031890 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0031C40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C0032ACC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddress @ 0x1C0032E78 (UsbDevice_SetAddress.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0033250 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00339E0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0033C50 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0033E10 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C00348F0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0034BC0 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C0004020 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall Command_SendCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned int v9; // esi
  __int64 v10; // rdx

  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v4 + 441) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      1940LL);
    v4 = *(_QWORD *)(a1 + 8);
  }
  if ( !(unsigned __int8)Controller_IsControllerAccessible(v4) )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1 + 16),
      v5,
      7,
      55,
      (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
      a2,
      (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2);
    *(_BYTE *)(a2 + 60) = 0;
LABEL_15:
    v10 = 3LL;
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v10, 0LL);
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
  if ( v7 && (v8 = *(__int64 (__fastcall **)(__int64, __int64))(v7 + 16)) != 0LL )
    v9 = v8(v7, a2);
  else
    v9 = 4;
  if ( v9 == 4 )
  {
    if ( *(_DWORD *)(a1 + 36) != 5 )
    {
      Command_InternalSendCommand(a1, a2, v6);
      return DynamicLock_Release(*(_QWORD *)(a1 + 112));
    }
    DynamicLock_Release(*(_QWORD *)(a1 + 112));
    goto LABEL_15;
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 112));
  v10 = v9;
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v10, 0LL);
}
