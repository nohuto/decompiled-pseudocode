/*
 * XREFs of USBParseGetAudioSpecificInterface @ 0x1C001CCE8
 * Callers:
 *     USBDeviceStart @ 0x1C001AEF0 (USBDeviceStart.c)
 *     IsSupportedFormat @ 0x1C001CDD4 (IsSupportedFormat.c)
 *     USBParseCreateInterfaceList @ 0x1C001CF48 (USBParseCreateInterfaceList.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C001D438 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseConvertControlUnits @ 0x1C001EA20 (USBParseConvertControlUnits.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C001ED6C (USBParseConvertInterfaceToDataRange.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C001CBD4 (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C001CC1C (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetAudioSpecificInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int8 *p_bLength; // rbx
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rdi
  PUSB_COMMON_DESCRIPTOR result; // rax

  p_bLength = a2;
  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  while ( 1 )
  {
    result = USBParseFindDescriptorInConfiguration(
               (unsigned __int16 *)&a1->bLength,
               (char *)&p_bLength[*p_bLength],
               36,
               a4);
    p_bLength = &result->bLength;
    if ( !result || NextAudioInterface && result > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
      break;
    if ( result->bLength < 3u )
      break;
    if ( result[1].bLength == 1 )
      return result;
  }
  return 0LL;
}
