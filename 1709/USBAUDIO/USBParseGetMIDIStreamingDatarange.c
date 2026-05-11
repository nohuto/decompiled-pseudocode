/*
 * XREFs of USBParseGetMIDIStreamingDatarange @ 0x1C001F358
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C001F670 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     memset @ 0x1C0008440 (memset.c)
 *     USBHwAllocateAndBag @ 0x1C001B7EC (USBHwAllocateAndBag.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C001C338 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C001CC1C (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C001D708 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 */

__int64 __fastcall USBParseGetMIDIStreamingDatarange(
        __int64 a1,
        struct _USB_CONFIGURATION_DESCRIPTOR *a2,
        int a3,
        LONG a4,
        _QWORD *a5,
        _QWORD *PoolWithTag)
{
  __int64 v7; // rsi
  int v8; // ebx
  unsigned int v9; // r14d
  PUSB_INTERFACE_DESCRIPTOR v10; // rax
  PUSB_INTERFACE_DESCRIPTOR v11; // rbp
  _QWORD *v12; // r13
  _QWORD *v13; // rsi
  _QWORD *i; // rdi
  void *v15; // rbx
  SIZE_T v16; // r15
  _QWORD *v17; // rax
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rcx
  __int64 j; // rsi
  unsigned __int8 *v20; // rdx
  bool v21; // r15
  __int64 v22; // rsi
  PUSB_COMMON_DESCRIPTOR MIDIStreamingEndpointDescriptor; // rax
  unsigned int bDescriptorType; // ecx
  struct _USB_COMMON_DESCRIPTOR *v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  __int64 (__fastcall **v30)(); // rax

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v8 = -1073741438;
  v9 = 0;
  v10 = USBD_ParseConfigurationDescriptorEx(a2, a2, a4, -1, 1, 3, -1);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)v8;
  v12 = PoolWithTag;
  v13 = (_QWORD *)(v7 + 192);
  for ( i = (_QWORD *)*v13; i != v13; i = (_QWORD *)*i )
  {
    if ( v10 == (PUSB_INTERFACE_DESCRIPTOR)i[3] )
    {
      PoolWithTag[24] = i;
      v8 = 0;
      break;
    }
  }
  if ( i == v13 )
  {
    v15 = *(void **)(a1 + 8);
    v16 = 8 * (unsigned int)v10->bNumEndpoints + 56;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v16, 0x41627845u);
    i = PoolWithTag;
    if ( PoolWithTag )
      v8 = USBHwAllocateAndBag((PVOID *)&PoolWithTag, v15);
    else
      v8 = -1073741670;
    if ( v8 < 0 )
      return (unsigned int)v8;
    memset(i, 0, v16);
    v17 = (_QWORD *)*v13;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 )
      __fastfail(3u);
    *i = v17;
    i[1] = v13;
    v17[1] = i;
    *v13 = i;
    i[3] = v11;
    i[6] = i + 7;
    DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                  (unsigned __int16 *)&a2->bLength,
                                  (char *)v11,
                                  36,
                                  7uLL);
    if ( DescriptorInConfiguration )
    {
      for ( j = 0LL; (unsigned int)j < v11->bNumEndpoints; DescriptorInConfiguration = (PUSB_COMMON_DESCRIPTOR)&v20[*v20] )
      {
        *(_QWORD *)(i[6] + 8 * j) = USBParseFindDescriptorInConfiguration(
                                      (unsigned __int16 *)&a2->bLength,
                                      (char *)DescriptorInConfiguration,
                                      5,
                                      7uLL);
        v20 = *(unsigned __int8 **)(i[6] + 8 * j);
        if ( !v20 )
          break;
        j = (unsigned int)(j + 1);
      }
      if ( (_DWORD)j == v11->bNumEndpoints )
        v8 = USBHwSelectStreamingMIDIInterface(a1, (__int64)i, 1);
      else
        v8 = -1073741438;
    }
  }
  if ( v8 >= 0 )
  {
    v21 = 0;
    v22 = 0LL;
    if ( !v11->bNumEndpoints )
      return (unsigned int)-1073741438;
    do
    {
      MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(
                                          (unsigned __int16 *)&a2->bLength,
                                          (__int64)i,
                                          v22);
      if ( MIDIStreamingEndpointDescriptor )
      {
        bDescriptorType = MIDIStreamingEndpointDescriptor[1].bDescriptorType;
        v9 = 0;
        if ( MIDIStreamingEndpointDescriptor[1].bDescriptorType )
        {
          v25 = MIDIStreamingEndpointDescriptor + 2;
          do
          {
            if ( a3 == v25->bLength )
              break;
            ++v9;
            v25 = (struct _USB_COMMON_DESCRIPTOR *)((char *)v25 + 1);
          }
          while ( v9 < bDescriptorType );
        }
        v21 = v9 < bDescriptorType;
        if ( v9 < bDescriptorType )
          break;
      }
      v22 = (unsigned int)(v22 + 1);
    }
    while ( (unsigned int)v22 < v11->bNumEndpoints );
    if ( v21 )
    {
      *((_DWORD *)v12 + 50) = a3;
      *((_DWORD *)v12 + 51) = v9;
      v12[17] = v11;
      v26 = *(_QWORD *)(i[6] + 8 * v22);
      v12[21] = v26;
      v12[24] = i;
      v27 = *(char *)(v26 + 2);
      *(_OWORD *)v12 = MIDIStreamingPinDataFormat;
      *((_OWORD *)v12 + 1) = xmmword_1C000B0D0;
      *((_DWORD *)v12 + 24) = ((v27 >> 31) & 8) + 8;
      *((_OWORD *)v12 + 2) = xmmword_1C000B0E0;
      *((_OWORD *)v12 + 3) = xmmword_1C000B0F0;
      *((_OWORD *)v12 + 4) = xmmword_1C000B100;
      *((_OWORD *)v12 + 5) = xmmword_1C000B110;
      *a5 = v12;
      v28 = 88;
      v29 = *((_DWORD *)v12 + 24);
      if ( v29 == 16 )
        v28 = 32864;
      *((_DWORD *)v12 + 28) = v28;
      v30 = USBMidiOutPinDispatch;
      if ( v29 == 16 )
        v30 = USBMidiInPinDispatch;
      v12[16] = v30;
    }
    else
    {
      return (unsigned int)-1073741438;
    }
  }
  return (unsigned int)v8;
}
