/*
 * XREFs of Endpoint_Disable @ 0x1C00110F8
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C00313A0 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0031580 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0031890 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0031C40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0033598 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00339E0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0033C50 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0033E10 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C00348F0 (UsbDevice_UcxEvtReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     Endpoint_Disable_Internal @ 0x1C00111D8 (Endpoint_Disable_Internal.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C0016D78 (Interrupter_DeInitializeAfterOffload.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall Endpoint_Disable(__int64 *a1, __int64 a2)
{
  char v2; // si
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax

  v2 = a2;
  if ( *((_BYTE *)a1 + 1352) )
  {
    v4 = *a1;
    *((_BYTE *)a1 + 1352) = 0;
    DynamicLock_Acquire(*(_QWORD *)(v4 + 544));
    v5 = *(_DWORD *)(v4 + 536);
    if ( v5 )
    {
      v6 = v5 - 1;
      *(_DWORD *)(v4 + 536) = v6;
      if ( !v6 && *(_DWORD *)(v4 + 532) == 1 )
        Interrupter_DeInitializeAfterOffload(*(_QWORD *)(v4 + 128));
    }
    else
    {
      Debug_FreAssertMsg(
        (__int64)"Underflow detected",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
        11909);
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 2u, 4u, 0x127u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    }
    DynamicLock_Release(*(_QWORD *)(v4 + 544));
  }
  LOBYTE(a2) = v2;
  Endpoint_Disable_Internal(a1, a2);
  return ESM_AddEvent(a1 + 36);
}
