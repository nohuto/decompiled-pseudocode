/*
 * XREFs of USBParseCreateInterfaceList @ 0x1C001CF48
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C001BE9C (USBHwSelectAudioConfiguration.c)
 * Callees:
 *     USBParseGetAudioSpecificInterface @ 0x1C001CCE8 (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBParseCreateInterfaceList(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        unsigned __int8 *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  int v4; // ebx
  unsigned int v6; // edi
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // r12
  __int64 v8; // r15
  PUSB_INTERFACE_DESCRIPTOR v9; // rcx
  __int64 v10; // rax

  v3 = (_QWORD *)*a3;
  v4 = 0;
  *(_QWORD *)*a3 = a2;
  v6 = 1;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(StartPosition, a2, (__int64)a3, 8uLL);
  if ( AudioSpecificInterface )
  {
    v8 = 0LL;
    do
    {
      if ( (unsigned int)v8 >= AudioSpecificInterface[3].bDescriptorType )
        break;
      v9 = USBD_ParseConfigurationDescriptorEx(
             StartPosition,
             StartPosition,
             *(&AudioSpecificInterface[4].bLength + v8),
             -1,
             1,
             2,
             -1);
      if ( v9
        || (v9 = USBD_ParseConfigurationDescriptorEx(
                   StartPosition,
                   StartPosition,
                   *(&AudioSpecificInterface[4].bLength + v8),
                   -1,
                   1,
                   3,
                   -1)) != 0LL )
      {
        v10 = 2LL * v6++;
        v3[v10] = v9;
      }
      else
      {
        v4 = -1073741438;
      }
      if ( v6 > StartPosition->bNumInterfaces )
        v4 = -1073741438;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( v4 >= 0 );
    if ( v4 >= 0 )
    {
      if ( v6 != StartPosition->bNumInterfaces )
        v4 = -1073741438;
      if ( v4 >= 0 )
        v3[2 * v6] = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v4;
}
