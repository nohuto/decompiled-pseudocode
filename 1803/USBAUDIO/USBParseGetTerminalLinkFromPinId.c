/*
 * XREFs of USBParseGetTerminalLinkFromPinId @ 0x1C0021F58
 * Callers:
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C0022040 (USBParseGetPinIndexForStreamingTerminal.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C00216EC (USBParseGetNextAudioInterface.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C0021800 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C0021880 (USBParseGetEndpointDescriptor.c)
 *     USBParseGetInterfaceIdforPin @ 0x1C0021DD8 (USBParseGetInterfaceIdforPin.c)
 */

__int64 __fastcall USBParseGetTerminalLinkFromPinId(__int64 a1, int a2)
{
  char v2; // bp
  unsigned int bDescriptorType; // esi
  LONG InterfaceIdforPin; // eax
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbx
  __int64 v7; // r8
  UCHAR bNumEndpoints; // al
  PUSB_COMMON_DESCRIPTOR EndpointDescriptor; // rax
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax

  v2 = 0;
  bDescriptorType = -1;
  InterfaceIdforPin = USBParseGetInterfaceIdforPin(a1, a2, 0LL);
  if ( InterfaceIdforPin != -1 )
  {
    NextAudioInterface = USBD_ParseConfigurationDescriptorEx(
                           *(PUSB_CONFIGURATION_DESCRIPTOR *)(a1 + 40),
                           *(PVOID *)(a1 + 40),
                           InterfaceIdforPin,
                           -1,
                           1,
                           2,
                           -1);
    while ( NextAudioInterface )
    {
      if ( v2 )
        break;
      bNumEndpoints = NextAudioInterface->bNumEndpoints;
      if ( bNumEndpoints
        && (bNumEndpoints != 1
         || (EndpointDescriptor = USBParseGetEndpointDescriptor(
                                    *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 40),
                                    &NextAudioInterface->bLength,
                                    0)) != 0LL
         && *(_WORD *)&EndpointDescriptor[2]) )
      {
        v2 = 1;
        AudioSpecificInterface = USBParseGetAudioSpecificInterface(
                                   *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 40),
                                   &NextAudioInterface->bLength,
                                   v7,
                                   7uLL);
        if ( AudioSpecificInterface )
          bDescriptorType = AudioSpecificInterface[1].bDescriptorType;
      }
      else
      {
        NextAudioInterface = USBParseGetNextAudioInterface(
                               *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 40),
                               &NextAudioInterface->bLength);
      }
    }
  }
  return bDescriptorType;
}
