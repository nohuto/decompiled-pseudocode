/*
 * XREFs of USBParseGetEndpointDescriptor @ 0x1C001CD60
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C001C04C (USBHwSelectStreamingAudioInterface.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C001D438 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C001EC44 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C001ED6C (USBParseConvertInterfaceToDataRange.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C001F0E4 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C001CBD4 (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C001CC1C (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetEndpointDescriptor(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        char a3)
{
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbp
  PUSB_COMMON_DESCRIPTOR result; // rax

  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  result = USBParseFindDescriptorInConfiguration((unsigned __int16 *)&a1->bLength, (char *)a2, a3 != 0 ? 37 : 5, 7uLL);
  if ( result && NextAudioInterface && result > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
    return 0LL;
  return result;
}
