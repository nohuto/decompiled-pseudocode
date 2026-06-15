/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800C8550
 * Callers:
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001EDA0 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004E770 (-IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004EB10 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004F8C0 (-IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004FA90 (-IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_00.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800D1D08 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     _lambda_bc829bb10b63470994cc211668497c87_::operator() @ 0x1800E9504 (_lambda_bc829bb10b63470994cc211668497c87_--operator().c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800EA18C (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  __int16 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  int v8; // esi
  WORD nChannels; // r10
  __int128 v10; // xmm0
  int wFormatTag; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  int v16; // r11d
  WORD v17; // cx
  __int128 v18; // xmm0
  int v19; // eax
  __int16 v20; // r9
  int v21; // edx
  __int16 v22; // r10
  __int64 v23; // rax
  __int16 v25; // [rsp+20h] [rbp-60h]
  __int128 Buf2; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v27[24]; // [rsp+38h] [rbp-48h]
  __int128 Buf1; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v29[24]; // [rsp+60h] [rbp-20h]

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( !a2 )
    return v2;
  v3 = -2;
  if ( a1->wFormatTag == 0xFFFE )
  {
    if ( a1->cbSize != 22 )
    {
      v4 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v4 )
        v4 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( v4 )
      {
        v5 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
           - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
        if ( !v5 )
          v5 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
        if ( v5 )
          return v2;
      }
    }
    v6 = *(_OWORD *)&a1->cbSize;
    Buf1 = *(_OWORD *)&a1->wFormatTag;
    v7 = *(_QWORD *)&a1[1].wBitsPerSample;
    *(_OWORD *)v29 = v6;
    v8 = DWORD1(v6);
    *(_QWORD *)&v29[16] = v7;
    v25 = Buf1;
  }
  else
  {
    if ( a1->cbSize && ((a1->wFormatTag - 1) & 0xFFFD) != 0 )
      return v2;
    nChannels = a1->nChannels;
    if ( (unsigned __int16)(nChannels - 1) > 1u || ((a1->wBitsPerSample - 8) & 0xFFE7) != 0 )
      return v2;
    v10 = *(_OWORD *)&a1->wFormatTag;
    *(_WORD *)&v29[2] = a1->wBitsPerSample;
    Buf1 = v10;
    LOWORD(Buf1) = -2;
    v25 = -2;
    wFormatTag = a1->wFormatTag;
    v8 = 4 - (nChannels != 1);
    *(GUID *)&v29[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
    *(_DWORD *)&v29[8] = wFormatTag;
  }
  *(_WORD *)v29 = 22;
  if ( a2->wFormatTag != 0xFFFE )
  {
    if ( a2->cbSize && ((a2->wFormatTag - 1) & 0xFFFD) != 0 )
      return v2;
    v17 = a2->nChannels;
    if ( (unsigned __int16)(v17 - 1) > 1u || ((a2->wBitsPerSample - 8) & 0xFFE7) != 0 )
      return v2;
    v18 = *(_OWORD *)&a2->wFormatTag;
    v19 = a2->wFormatTag;
    *(_WORD *)&v27[2] = a2->wBitsPerSample;
    Buf2 = v18;
    LOWORD(Buf2) = -2;
    *(GUID *)&v27[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
    v16 = 4 - (v17 != 1);
    *(_DWORD *)&v27[8] = v19;
    goto LABEL_32;
  }
  if ( a2->cbSize == 22 )
    goto LABEL_26;
  v12 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
  if ( !v12 )
    goto LABEL_26;
  v13 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
  if ( !v13 )
    v13 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
  if ( !v13 )
  {
LABEL_26:
    v14 = *(_OWORD *)&a2->cbSize;
    Buf2 = *(_OWORD *)&a2->wFormatTag;
    v3 = Buf2;
    v15 = *(_QWORD *)&a2[1].wBitsPerSample;
    *(_OWORD *)v27 = v14;
    v16 = DWORD1(v14);
    *(_QWORD *)&v27[16] = v15;
LABEL_32:
    *(_WORD *)v27 = 22;
    if ( WORD1(Buf1) )
    {
      v20 = WORD1(Buf2);
    }
    else
    {
      v20 = 0;
      WORD1(Buf2) = 0;
      DWORD2(Buf2) = 0;
      WORD6(Buf2) = 0;
    }
    if ( DWORD1(Buf1) )
    {
      v21 = DWORD1(Buf2);
    }
    else
    {
      v21 = 0;
      *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
    }
    if ( HIWORD(Buf1) )
    {
      v22 = HIWORD(Buf2);
    }
    else
    {
      v22 = 0;
      HIDWORD(Buf2) = 0;
    }
    *(_DWORD *)&v27[4] = v8 != 0 ? v16 : 0;
    if ( !v25 )
    {
      v3 = 0;
      LOWORD(Buf2) = 0;
    }
    if ( !v20 )
    {
      WORD1(Buf1) = 0;
      DWORD2(Buf1) = 0;
      WORD6(Buf1) = 0;
    }
    if ( !v21 )
      *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
    if ( !v22 )
      HIDWORD(Buf1) = 0;
    *(_DWORD *)&v29[4] = (v8 != 0 ? v16 : 0) != 0 ? v8 : 0;
    if ( !v3 )
      LOWORD(Buf1) = 0;
    v23 = *(_QWORD *)&v29[8] - *(_QWORD *)&v27[8];
    if ( *(_QWORD *)&v29[8] == *(_QWORD *)&v27[8] )
      v23 = *(_QWORD *)&v29[16] - *(_QWORD *)&v27[16];
    if ( !v23 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
      return 1;
  }
  return v2;
}
