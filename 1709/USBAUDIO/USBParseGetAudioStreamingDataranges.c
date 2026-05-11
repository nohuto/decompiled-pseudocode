/*
 * XREFs of USBParseGetAudioStreamingDataranges @ 0x1C001F0E4
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C001F670 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     USBHwSelectStreamingAudioInterface @ 0x1C001C04C (USBHwSelectStreamingAudioInterface.c)
 *     USBParseGetNextAudioInterface @ 0x1C001CBD4 (USBParseGetNextAudioInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C001CD60 (USBParseGetEndpointDescriptor.c)
 *     IsSupportedFormat @ 0x1C001CDD4 (IsSupportedFormat.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C001ED6C (USBParseConvertInterfaceToDataRange.c)
 */

__int64 __fastcall USBParseGetAudioStreamingDataranges(
        __int64 a1,
        struct _USB_CONFIGURATION_DESCRIPTOR *a2,
        LONG a3,
        _QWORD *a4,
        __int64 a5)
{
  PUSB_INTERFACE_DESCRIPTOR i; // rax
  unsigned __int8 *p_bLength; // rdi
  UCHAR bNumEndpoints; // al
  PUSB_COMMON_DESCRIPTOR EndpointDescriptor; // rax
  int v13; // ebp
  __int64 v14; // r8
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // r14
  __int64 v16; // rbx
  UCHAR v17; // al
  PUSB_COMMON_DESCRIPTOR v18; // rax
  int v19; // eax
  __int64 (__fastcall **v20)(PVOID *); // rax
  __int64 v21; // rcx
  _BYTE v23[16]; // [rsp+40h] [rbp-158h] BYREF
  char *v24; // [rsp+50h] [rbp-148h]
  char v25; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-B8h]

  for ( i = USBD_ParseConfigurationDescriptorEx(a2, a2, a3, -1, 1, 2, -1);
        ;
        i = USBParseGetNextAudioInterface(a2, p_bLength) )
  {
    p_bLength = &i->bLength;
    if ( !i )
      break;
    bNumEndpoints = i->bNumEndpoints;
    if ( bNumEndpoints )
    {
      if ( bNumEndpoints != 1 )
        continue;
      EndpointDescriptor = USBParseGetEndpointDescriptor(a2, p_bLength, 0);
      if ( EndpointDescriptor )
      {
        if ( EndpointDescriptor[2] )
          continue;
      }
    }
    if ( p_bLength )
    {
      v26 = a1;
      v24 = &v25;
      v13 = USBHwSelectStreamingAudioInterface((__int64)v23, p_bLength);
      goto LABEL_11;
    }
    break;
  }
  v13 = -1073741438;
LABEL_11:
  NextAudioInterface = USBD_ParseConfigurationDescriptorEx(a2, a2, a3, -1, 1, 2, -1);
  if ( NextAudioInterface )
  {
    v16 = a5 + 128;
    while ( 1 )
    {
      if ( v13 < 0 )
        return (unsigned int)v13;
      v17 = NextAudioInterface->bNumEndpoints;
      if ( v17 )
      {
        if ( (v17 != 1
           || (v18 = USBParseGetEndpointDescriptor(a2, &NextAudioInterface->bLength, 0)) != 0LL && *(_WORD *)&v18[2])
          && IsSupportedFormat(a2, &NextAudioInterface->bLength, v14) )
        {
          *(_QWORD *)(v16 + 16) = p_bLength;
          v13 = USBParseConvertInterfaceToDataRange(a2, &NextAudioInterface->bLength, v16 - 128);
          if ( v13 >= 0 )
            break;
        }
      }
LABEL_35:
      NextAudioInterface = USBParseGetNextAudioInterface(a2, &NextAudioInterface->bLength);
      if ( !NextAudioInterface )
        return (unsigned int)v13;
    }
    v19 = *(_DWORD *)(v16 + 80) & 0xF000;
    if ( v19 )
    {
      if ( v19 == 4096 )
      {
        v20 = (__int64 (__fastcall **)(PVOID *))USBType2PinDispatch;
        *(_DWORD *)(v16 - 16) = 880;
LABEL_29:
        *(_QWORD *)v16 = v20;
LABEL_30:
        if ( *(_DWORD *)(v16 - 20) )
        {
          v13 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v16 - 8), ExFreePool);
          if ( v13 < 0 )
            ExFreePool(*(PVOID *)(v16 - 8));
        }
        if ( a4 )
        {
          *a4 = v16 - 128;
          *(_DWORD *)(v16 - 124) |= 2u;
          a4[1] = &unk_1C000D338;
          a4 += 2;
          v16 += 216LL;
        }
        goto LABEL_35;
      }
      if ( v19 != 0x2000 )
        goto LABEL_30;
      v20 = &USBType3PinDispatch;
    }
    else
    {
      if ( *(char *)(*(_QWORD *)(v16 + 40) + 2LL) < 0 )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
        *(_QWORD *)v16 = &USBCapturePinDispatch;
        *(_DWORD *)(v16 - 16) = 12 * *(_DWORD *)(v21 + 208) * (*(_DWORD *)(v16 + 84) + 12) + 2768;
        goto LABEL_30;
      }
      v20 = &USBType1PinDispatch;
    }
    *(_DWORD *)(v16 - 16) = 968;
    goto LABEL_29;
  }
  return (unsigned int)v13;
}
