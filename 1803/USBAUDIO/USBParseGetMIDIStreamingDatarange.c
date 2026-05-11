/*
 * XREFs of USBParseGetMIDIStreamingDatarange @ 0x1C0023EA0
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C00241C0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     memset @ 0x1C000A580 (memset.c)
 *     USBHwAllocateAndBag @ 0x1C001FC9C (USBHwAllocateAndBag.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C0020EBC (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C0021734 (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C002222C (USBParseGetMIDIStreamingEndpointDescriptor.c)
 */

__int64 __fastcall USBParseGetMIDIStreamingDatarange(
        __int64 a1,
        struct _USB_CONFIGURATION_DESCRIPTOR *a2,
        int a3,
        LONG a4,
        _QWORD *a5,
        _QWORD *PoolWithTag)
{
  int v7; // ebx
  __int64 v8; // r14
  unsigned int v9; // r15d
  PUSB_INTERFACE_DESCRIPTOR v10; // rsi
  _QWORD *v11; // r13
  _QWORD *v12; // r14
  _QWORD *i; // rdi
  void *v14; // rbx
  SIZE_T v15; // rbp
  _QWORD *v16; // rax
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rcx
  __int64 j; // rbp
  unsigned __int8 *v19; // rdx
  bool v20; // r14
  __int64 v21; // rbp
  PUSB_COMMON_DESCRIPTOR MIDIStreamingEndpointDescriptor; // rax
  unsigned int bDescriptorType; // ecx
  struct _USB_COMMON_DESCRIPTOR *v24; // rdx
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  bool v28; // zf
  __int64 (__fastcall **v29)(); // rax

  v7 = -1073741438;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v9 = 0;
  v10 = USBD_ParseConfigurationDescriptorEx(a2, a2, a4, -1, 1, 3, -1);
  if ( !v10 )
    return (unsigned int)v7;
  v11 = PoolWithTag;
  v12 = (_QWORD *)(v8 + 192);
  for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i )
  {
    if ( v10 == (PUSB_INTERFACE_DESCRIPTOR)i[3] )
    {
      PoolWithTag[25] = i;
      v7 = 0;
      break;
    }
  }
  if ( i == v12 )
  {
    v14 = *(void **)(a1 + 8);
    v15 = 8 * (unsigned int)v10->bNumEndpoints + 56;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v15, 0x41627845u);
    i = PoolWithTag;
    if ( PoolWithTag )
      v7 = USBHwAllocateAndBag((PVOID *)&PoolWithTag, v14);
    else
      v7 = -1073741670;
    if ( v7 < 0 )
      return (unsigned int)v7;
    memset(i, 0, v15);
    v16 = (_QWORD *)*v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
      __fastfail(3u);
    *i = v16;
    i[1] = v12;
    v16[1] = i;
    *v12 = i;
    i[3] = v10;
    i[6] = i + 7;
    DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                  (unsigned __int16 *)&a2->bLength,
                                  (char *)v10,
                                  36,
                                  7uLL);
    if ( DescriptorInConfiguration )
    {
      for ( j = 0LL; (unsigned int)j < v10->bNumEndpoints; DescriptorInConfiguration = (PUSB_COMMON_DESCRIPTOR)&v19[*v19] )
      {
        *(_QWORD *)(i[6] + 8 * j) = USBParseFindDescriptorInConfiguration(
                                      (unsigned __int16 *)&a2->bLength,
                                      (char *)DescriptorInConfiguration,
                                      5,
                                      7uLL);
        v19 = *(unsigned __int8 **)(i[6] + 8 * j);
        if ( !v19 )
          break;
        j = (unsigned int)(j + 1);
      }
      if ( (_DWORD)j == v10->bNumEndpoints )
        v7 = USBHwSelectStreamingMIDIInterface(a1, (__int64)i, 1);
      else
        v7 = -1073741438;
    }
  }
  if ( v7 >= 0 )
  {
    v20 = 0;
    v21 = 0LL;
    if ( !v10->bNumEndpoints )
      return (unsigned int)-1073741438;
    do
    {
      MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(
                                          (unsigned __int16 *)&a2->bLength,
                                          (__int64)i,
                                          v21);
      if ( MIDIStreamingEndpointDescriptor )
      {
        bDescriptorType = MIDIStreamingEndpointDescriptor[1].bDescriptorType;
        v9 = 0;
        if ( MIDIStreamingEndpointDescriptor[1].bDescriptorType )
        {
          v24 = MIDIStreamingEndpointDescriptor + 2;
          do
          {
            if ( a3 == v24->bLength )
              break;
            ++v9;
            v24 = (struct _USB_COMMON_DESCRIPTOR *)((char *)v24 + 1);
          }
          while ( v9 < bDescriptorType );
        }
        v20 = v9 < bDescriptorType;
        if ( v9 < bDescriptorType )
          break;
      }
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (unsigned int)v21 < v10->bNumEndpoints );
    if ( v20 )
    {
      *((_DWORD *)v11 + 52) = a3;
      *((_DWORD *)v11 + 53) = v9;
      v11[17] = v10;
      v25 = *(_QWORD *)(i[6] + 8 * v21);
      v11[21] = v25;
      v11[25] = i;
      v26 = *(char *)(v25 + 2);
      *(_OWORD *)v11 = MIDIStreamingPinDataFormat;
      *((_OWORD *)v11 + 1) = xmmword_1C000D140;
      *((_DWORD *)v11 + 24) = ((v26 >> 31) & 8) + 8;
      *((_OWORD *)v11 + 2) = xmmword_1C000D150;
      *((_OWORD *)v11 + 3) = xmmword_1C000D160;
      *((_OWORD *)v11 + 4) = xmmword_1C000D170;
      *((_OWORD *)v11 + 5) = xmmword_1C000D180;
      *a5 = v11;
      v27 = 88;
      v28 = *((_DWORD *)v11 + 24) == 16;
      if ( *((_DWORD *)v11 + 24) == 16 )
        v27 = 32864;
      *((_DWORD *)v11 + 28) = v27;
      v29 = USBMidiOutPinDispatch;
      if ( v28 )
        v29 = USBMidiInPinDispatch;
      v11[16] = v29;
    }
    else
    {
      return (unsigned int)-1073741438;
    }
  }
  return (unsigned int)v7;
}
