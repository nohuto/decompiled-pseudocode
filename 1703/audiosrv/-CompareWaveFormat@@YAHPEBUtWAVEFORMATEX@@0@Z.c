/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180003C10
 * Callers:
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEA_J@Z @ 0x180003310 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000A3D0 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x18000D900 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ABF78 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     _lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator() @ 0x1800BB974 (_lambda_0a80d7e3d12d42377e48064cdd362aeb_--operator().c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BC61C (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180057F9A (memcmp_0.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  WORD wFormatTag; // r10
  int v4; // r9d
  __int16 v5; // r8
  __int128 v6; // xmm1
  __int16 v7; // di
  __int64 v8; // xmm0_8
  int v9; // r11d
  WORD v10; // r10
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int16 v13; // dx
  int v14; // ecx
  __int16 v15; // ax
  __int64 v16; // rax
  WORD nChannels; // r11
  __int128 v19; // xmm0
  WORD v20; // si
  WORD wBitsPerSample; // r14
  __int128 v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int128 Buf2; // [rsp+28h] [rbp-19h] BYREF
  _BYTE v28[24]; // [rsp+38h] [rbp-9h]
  __int128 Buf1; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v30[24]; // [rsp+60h] [rbp+1Fh]

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    wFormatTag = a1->wFormatTag;
    v4 = 4;
    v5 = -2;
    if ( a1->wFormatTag == 0xFFFE )
    {
      if ( a1->cbSize != 22 )
      {
        v23 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v23 )
          v23 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v23 )
        {
          v24 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v24 )
            v24 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v24 )
            return v2;
        }
      }
      v6 = *(_OWORD *)&a1->cbSize;
      Buf1 = *(_OWORD *)&a1->wFormatTag;
      v7 = Buf1;
      v8 = *(_QWORD *)&a1[1].wBitsPerSample;
      *(_OWORD *)v30 = v6;
      v9 = DWORD1(v6);
      *(_WORD *)v30 = 22;
      *(_QWORD *)&v30[16] = v8;
    }
    else
    {
      if ( a1->cbSize && ((wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      nChannels = a1->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u || ((a1->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v7 = -2;
      *(_WORD *)&v30[2] = a1->wBitsPerSample;
      v19 = *(_OWORD *)&a1->wFormatTag;
      *(_WORD *)v30 = 22;
      Buf1 = v19;
      LOWORD(Buf1) = -2;
      *(GUID *)&v30[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v30[8] = wFormatTag;
      if ( nChannels == 1 )
        v9 = 4;
      else
        v9 = 3;
      *(_DWORD *)&v30[4] = v9;
    }
    v10 = a2->wFormatTag;
    if ( a2->wFormatTag != 0xFFFE )
    {
      if ( a2->cbSize && ((v10 - 1) & 0xFFFD) != 0 )
        return v2;
      v20 = a2->nChannels;
      if ( (unsigned __int16)(v20 - 1) > 1u )
        return v2;
      wBitsPerSample = a2->wBitsPerSample;
      if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      *(_WORD *)v28 = 22;
      *(_WORD *)&v28[2] = wBitsPerSample;
      v22 = *(_OWORD *)&a2->wFormatTag;
      *(GUID *)&v28[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v28[8] = v10;
      Buf2 = v22;
      LOWORD(Buf2) = -2;
      if ( v20 != 1 )
        v4 = 3;
      *(_DWORD *)&v28[4] = v4;
      goto LABEL_9;
    }
    if ( a2->cbSize == 22 )
      goto LABEL_8;
    v25 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v25 )
      v25 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v25 )
      goto LABEL_8;
    v26 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v26 )
      v26 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v26 )
    {
LABEL_8:
      v11 = *(_OWORD *)&a2->cbSize;
      Buf2 = *(_OWORD *)&a2->wFormatTag;
      v5 = Buf2;
      v12 = *(_QWORD *)&a2[1].wBitsPerSample;
      *(_OWORD *)v28 = v11;
      v4 = DWORD1(v11);
      *(_QWORD *)&v28[16] = v12;
      *(_WORD *)v28 = 22;
LABEL_9:
      if ( WORD1(Buf1) )
      {
        v13 = WORD1(Buf2);
      }
      else
      {
        v13 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( DWORD1(Buf1) )
      {
        v14 = DWORD1(Buf2);
      }
      else
      {
        v14 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( HIWORD(Buf1) )
      {
        v15 = HIWORD(Buf2);
      }
      else
      {
        v15 = 0;
        HIDWORD(Buf2) = 0;
      }
      if ( !v9 )
      {
        v4 = 0;
        *(_DWORD *)&v28[4] = 0;
      }
      if ( !v7 )
      {
        v5 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v13 )
      {
        WORD1(Buf1) = 0;
        DWORD2(Buf1) = 0;
        WORD6(Buf1) = 0;
      }
      if ( !v14 )
        *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
      if ( !v15 )
        HIDWORD(Buf1) = 0;
      if ( !v4 )
        *(_DWORD *)&v30[4] = 0;
      if ( !v5 )
        LOWORD(Buf1) = 0;
      v16 = *(_QWORD *)&v30[8] - *(_QWORD *)&v28[8];
      if ( *(_QWORD *)&v30[8] == *(_QWORD *)&v28[8] )
        v16 = *(_QWORD *)&v30[16] - *(_QWORD *)&v28[16];
      if ( !v16 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
        return 1;
    }
  }
  return v2;
}
