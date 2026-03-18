/*
 * XREFs of ?CopyEndpointFieldsFromDescriptor@FxUsbInterface@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@PEAU_USB_ENDPOINT_DESCRIPTOR@@E@Z @ 0x1C0092D84
 * Callers:
 *     ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C0093274 (-GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C008D720 (-_UsbdPipeTypeToWdf@FxUsbPipe@@SA-AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z.c)
 */

void __fastcall FxUsbInterface::CopyEndpointFieldsFromDescriptor(
        FxUsbInterface *this,
        _WDF_USB_PIPE_INFORMATION *PipeInfo,
        _USB_ENDPOINT_DESCRIPTOR *EndpointDesc,
        unsigned __int8 SettingIndex)
{
  int v4; // eax
  __int64 v5; // rdx
  char v6; // r9
  __int64 v7; // r10

  PipeInfo->MaximumPacketSize = EndpointDesc->wMaxPacketSize;
  PipeInfo->EndpointAddress = EndpointDesc->bEndpointAddress;
  PipeInfo->Interval = EndpointDesc->bInterval;
  v4 = FxUsbPipe::_UsbdPipeTypeToWdf(EndpointDesc->bmAttributes & 3);
  *(_DWORD *)(v5 + 12) = v4;
  if ( v4 == 1 )
    *(_DWORD *)(v5 + 16) = 4096;
  else
    *(_DWORD *)(v5 + 16) = (*(_DWORD *)(*(_QWORD *)(v7 + 120) + 484LL) & 4) != 0 ? 0x200000 : 0x40000;
  *(_BYTE *)(v5 + 10) = v6;
}
