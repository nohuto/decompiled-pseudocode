/*
 * XREFs of USBParseGetNextAudioInterface @ 0x1C00216EC
 * Callers:
 *     USBParseGetAudioSpecificInterface @ 0x1C0021800 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C0021880 (USBParseGetEndpointDescriptor.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C0021F58 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0023764 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C002388C (USBParseConvertInterfaceToDataRange.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0023C18 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     <none>
 */

PUSB_INTERFACE_DESCRIPTOR __fastcall USBParseGetNextAudioInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2)
{
  if ( a2 )
    return USBD_ParseConfigurationDescriptorEx(a1, &a2[*a2], a2[2], -1, 1, a2[6], -1);
  return (PUSB_INTERFACE_DESCRIPTOR)a2;
}
