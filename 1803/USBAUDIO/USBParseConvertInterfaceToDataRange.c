/*
 * XREFs of USBParseConvertInterfaceToDataRange @ 0x1C002388C
 * Callers:
 *     USBParseGetAudioStreamingDataranges @ 0x1C0023C18 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C00216EC (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C0021734 (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C0021800 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C0021880 (USBParseGetEndpointDescriptor.c)
 */

__int64 __fastcall USBParseConvertInterfaceToDataRange(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  unsigned int v3; // esi
  unsigned __int8 *v7; // rbp
  unsigned int v8; // r14d
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax
  PUSB_COMMON_DESCRIPTOR v10; // r15
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax
  unsigned __int8 *p_bLength; // rbx
  PUSB_COMMON_DESCRIPTOR EndpointDescriptor; // rax
  PUSB_COMMON_DESCRIPTOR v14; // rax
  PUSB_COMMON_DESCRIPTOR v15; // rcx
  PUSB_COMMON_DESCRIPTOR v16; // rax
  PUSB_COMMON_DESCRIPTOR v17; // rcx
  UCHAR bLength; // al
  unsigned int v19; // ecx
  GUID v20; // xmm0
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // ecx
  _DWORD *PoolWithTag; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int8 *v29; // rbp
  unsigned int v30; // ecx
  int v32; // [rsp+70h] [rbp+18h]
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // [rsp+78h] [rbp+20h]

  v3 = 0;
  v7 = 0LL;
  v8 = 0;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(a1, a2, a3, 7uLL);
  v10 = AudioSpecificInterface;
  if ( !AudioSpecificInterface )
    return v3;
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                (unsigned __int16 *)&a1->bLength,
                                (char *)&AudioSpecificInterface->bLength + AudioSpecificInterface->bLength,
                                36,
                                8uLL);
  p_bLength = &DescriptorInConfiguration->bLength;
  if ( !DescriptorInConfiguration )
    return v3;
  *(_QWORD *)(a3 + 152) = DescriptorInConfiguration;
  *(_DWORD *)(a3 + 216) = *(unsigned __int16 *)&v10[2].bDescriptorType;
  *(_BYTE *)(a3 + 186) = v10[2].bLength;
  *(_QWORD *)(a3 + 136) = a2;
  *(_DWORD *)(a3 + 104) = DescriptorInConfiguration[3].bLength;
  EndpointDescriptor = USBParseGetEndpointDescriptor(a1, a2, 0);
  *(_QWORD *)(a3 + 168) = EndpointDescriptor;
  if ( !EndpointDescriptor )
    return (unsigned int)-1073741668;
  *(_DWORD *)(a3 + 220) = (unsigned __int16)EndpointDescriptor[2];
  if ( (EndpointDescriptor[1].bDescriptorType & 0xC) == 4 )
  {
    v32 = EndpointDescriptor[4].bLength & 0xF;
    NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
    v14 = USBParseFindDescriptorInConfiguration(
            (unsigned __int16 *)&a1->bLength,
            (char *)(*(_QWORD *)(a3 + 168) + **(unsigned __int8 **)(a3 + 168)),
            5,
            7uLL);
    v15 = v14;
    if ( !v14 || (v14[1].bLength & 0xF) != v32 || NextAudioInterface && v14 > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
      v15 = 0LL;
    *(_QWORD *)(a3 + 176) = v15;
  }
  v16 = USBParseGetEndpointDescriptor(a1, a2, 1);
  *(_QWORD *)(a3 + 160) = v16;
  v17 = v16;
  if ( !v16 )
    return (unsigned int)-1073741438;
  if ( *(char *)(*(_QWORD *)(a3 + 168) + 2LL) >= 0 )
  {
    bLength = v16[2].bLength;
    if ( bLength )
    {
      if ( *(_WORD *)&v17[2].bDescriptorType && (*(_QWORD *)(a3 + 176) || (unsigned __int8)(bLength - 1) > 1u) )
        return (unsigned int)-1073741438;
    }
  }
  v19 = *(unsigned __int16 *)&v10[2].bDescriptorType;
  if ( v19 > 0x1001 )
  {
    v21 = v19 - 4098;
    if ( v21 )
    {
      v22 = v21 - 4095;
      if ( v22 )
      {
        v23 = v22 - 2;
        if ( v23 )
        {
          if ( v23 != 252 )
            return (unsigned int)-1073741198;
          v20 = (GUID)KSDATAFORMAT_SUBTYPE_WMA_SPDIF;
        }
        else
        {
          v20 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF;
        }
      }
      else
      {
        v20 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF;
      }
    }
    else
    {
      v20 = KSDATAFORMAT_SUBTYPE_AC3_AUDIO;
    }
  }
  else if ( v19 == 4097 )
  {
    v20 = (GUID)KSDATAFORMAT_SUBTYPE_MPEG;
  }
  else
  {
    if ( !*(_WORD *)&v10[2].bDescriptorType )
      return (unsigned int)-1073741198;
    if ( v19 <= 2 )
    {
      v20 = KSDATAFORMAT_SUBTYPE_PCM;
    }
    else
    {
      switch ( v19 )
      {
        case 3u:
          v20 = KSDATAFORMAT_SUBTYPE_IEEE_FLOAT;
          break;
        case 4u:
          v20 = (GUID)KSDATAFORMAT_SUBTYPE_ALAW;
          break;
        case 5u:
          v20 = (GUID)KSDATAFORMAT_SUBTYPE_MULAW;
          break;
        default:
          return (unsigned int)-1073741198;
      }
    }
  }
  *(GUID *)(a3 + 32) = v20;
  *(_QWORD *)a3 = 88LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(GUID *)(a3 + 16) = KSDATAFORMAT_TYPE_AUDIO;
  *(GUID *)(a3 + 48) = KSDATAFORMAT_SPECIFIER_WAVEFORMATEX;
  v24 = *(_WORD *)&v10[2].bDescriptorType & 0xF000;
  if ( (*(_WORD *)&v10[2].bDescriptorType & 0xF000) != 0 )
  {
    if ( v24 == 4096 )
    {
      *(_QWORD *)(a3 + 64) = 6LL;
      v7 = p_bLength + 9;
      *(_DWORD *)(a3 + 72) = 0;
      v8 = p_bLength[8];
      goto LABEL_46;
    }
    if ( v24 != 0x2000 )
      goto LABEL_46;
    *(_DWORD *)(a3 + 64) = 2;
    *(_DWORD *)(a3 + 68) = 16;
    *(_DWORD *)(a3 + 72) = 16;
  }
  else
  {
    *(_DWORD *)(a3 + 64) = p_bLength[4];
    *(_DWORD *)(a3 + 68) = 8 * p_bLength[5];
    *(_DWORD *)(a3 + 72) = 8 * p_bLength[5];
    *(_BYTE *)(a3 + 187) = p_bLength[5];
  }
  v8 = p_bLength[7];
  v7 = p_bLength + 8;
LABEL_46:
  v25 = *v7 + ((v7[1] + (v7[2] << 8)) << 8);
  *(_DWORD *)(a3 + 76) = v25;
  *(_DWORD *)(a3 + 80) = v25;
  *(_DWORD *)(a3 + 108) = v8;
  if ( v8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v8, 0x41627845u);
    *(_QWORD *)(a3 + 120) = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = *(_DWORD *)(a3 + 76);
      if ( v8 > 1 )
      {
        v27 = 4LL;
        v28 = v8 - 1;
        v29 = v7 + 4;
        do
        {
          v30 = *(v29 - 1) + ((*v29 + (v29[1] << 8)) << 8);
          *(_DWORD *)(v27 + *(_QWORD *)(a3 + 120)) = v30;
          if ( v30 < *(_DWORD *)(a3 + 76) )
            *(_DWORD *)(a3 + 76) = v30;
          if ( v30 > *(_DWORD *)(a3 + 80) )
            *(_DWORD *)(a3 + 80) = v30;
          v29 += 3;
          v27 += 4LL;
          --v28;
        }
        while ( v28 );
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 80) = v7[3] + ((v7[4] + (v7[5] << 8)) << 8);
  }
  return v3;
}
