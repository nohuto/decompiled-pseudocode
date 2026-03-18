/*
 * XREFs of XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0
 * Callers:
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0019368 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019E64 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C001B308 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0034130 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C00349D4 (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C00356A0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00362A0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0036D50 (UsbDevice_UcxEvtReset.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C00394FC (Crashdump_InitializeDeviceContext.c)
 *     XilCoreDeviceSlot_QueryEndpointContextInfo @ 0x1C0041164 (XilCoreDeviceSlot_QueryEndpointContextInfo.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C00411E0 (XilCoreDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 */

__int64 __fastcall XilUsbDevice_GetDeviceContextBufferVA(__int64 a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( !*(_BYTE *)(a1 + 608) )
    return *(_QWORD *)(*(_QWORD *)(a1 + 584) + 16LL);
  Debug_FreAssertMsg(
    (__int64)"Cannot access device context directly when in secure mode",
    0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
    285);
  return v1;
}
