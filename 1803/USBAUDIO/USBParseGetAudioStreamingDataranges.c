/*
 * XREFs of USBParseGetAudioStreamingDataranges @ 0x1C0023C18
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C00241C0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     memset @ 0x1C000A580 (memset.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0020B5C (USBHwSelectStreamingAudioInterface.c)
 *     USBParseGetNextAudioInterface @ 0x1C00216EC (USBParseGetNextAudioInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C0021880 (USBParseGetEndpointDescriptor.c)
 *     IsSupportedFormat @ 0x1C00218F4 (IsSupportedFormat.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C002388C (USBParseConvertInterfaceToDataRange.c)
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
  _QWORD v23[22]; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v24[16]; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD *v25; // [rsp+100h] [rbp-A8h]

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
      memset(v23, 0, sizeof(v23));
      v23[2] = a1;
      v25 = v23;
      v13 = USBHwSelectStreamingAudioInterface((__int64)v24, p_bLength);
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
    v19 = *(_DWORD *)(v16 + 88) & 0xF000;
    if ( v19 )
    {
      if ( v19 == 4096 )
      {
        v20 = (__int64 (__fastcall **)(PVOID *))USBType2PinDispatch;
        *(_DWORD *)(v16 - 16) = 896;
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
          a4[1] = &unk_1C0010348;
          a4 += 2;
          v16 += 224LL;
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
        *(_DWORD *)(v16 - 16) = 12 * (*(_DWORD *)(v21 + 208) * (*(_DWORD *)(v16 + 92) + 12) + 232);
        goto LABEL_30;
      }
      v20 = &USBType1PinDispatch;
    }
    *(_DWORD *)(v16 - 16) = 984;
    goto LABEL_29;
  }
  return (unsigned int)v13;
}
