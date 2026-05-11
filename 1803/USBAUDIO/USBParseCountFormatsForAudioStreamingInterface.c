/*
 * XREFs of USBParseCountFormatsForAudioStreamingInterface @ 0x1C0023764
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C00241C0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C00216EC (USBParseGetNextAudioInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C0021880 (USBParseGetEndpointDescriptor.c)
 *     IsSupportedFormat @ 0x1C00218F4 (IsSupportedFormat.c)
 */

__int64 __fastcall USBParseCountFormatsForAudioStreamingInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        LONG InterfaceNumber,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  unsigned int v9; // ebp
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbx
  __int64 v11; // r8
  UCHAR bNumEndpoints; // al
  PUSB_COMMON_DESCRIPTOR EndpointDescriptor; // rax

  *a3 = 0;
  *a4 = 0;
  v9 = -1073741438;
  NextAudioInterface = USBD_ParseConfigurationDescriptorEx(StartPosition, StartPosition, InterfaceNumber, -1, 1, 2, -1);
  if ( NextAudioInterface )
  {
    do
    {
      bNumEndpoints = NextAudioInterface->bNumEndpoints;
      if ( bNumEndpoints )
      {
        if ( (bNumEndpoints != 1
           || (EndpointDescriptor = USBParseGetEndpointDescriptor(StartPosition, &NextAudioInterface->bLength, 0)) != 0LL
           && *(_WORD *)&EndpointDescriptor[2])
          && IsSupportedFormat(StartPosition, &NextAudioInterface->bLength, v11) )
        {
          ++*a3;
          v9 = 0;
          ++*a4;
          *a5 = 2;
        }
      }
      NextAudioInterface = USBParseGetNextAudioInterface(StartPosition, &NextAudioInterface->bLength);
    }
    while ( NextAudioInterface );
  }
  else if ( USBD_ParseConfigurationDescriptorEx(StartPosition, StartPosition, InterfaceNumber, -1, 1, 3, -1) )
  {
    v9 = 0;
    ++*a3;
    *a5 = 3;
  }
  return v9;
}
