/*
 * XREFs of ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18009B6BC
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerIsFormatSupported @ 0x18000A9B0 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dd @ 0x180090690 (WPP_SF_dd.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x18009CB94 (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800A0E20 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800BD5AC (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DeriveOffloadConnectorFormatFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        struct tWAVEFORMATEX *Src,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct tWAVEFORMATEX **a6)
{
  struct tWAVEFORMATEX *v9; // rbx
  struct tWAVEFORMATEX **v10; // r12
  struct tWAVEFORMATEX **v11; // rdi
  int v12; // eax
  struct tWAVEFORMATEX *v13; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v14; // edx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // r8d
  int v16; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 nChannels; // edx
  DWORD nSamplesPerSec; // ecx
  unsigned int v19; // r14d
  LPVOID pv[4]; // [rsp+30h] [rbp-30h] BYREF
  struct _GUID v22; // [rsp+50h] [rbp-10h] BYREF
  struct tWAVEFORMATEX *Srca; // [rsp+A0h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v24; // [rsp+B0h] [rbp+50h] BYREF

  pv[1] = (LPVOID)-2LL;
  pv[2] = 0LL;
  a5 = 0LL;
  Srca = 0LL;
  v9 = 0LL;
  v24 = 0LL;
  pv[0] = 0LL;
  v10 = a6;
  *a6 = 0LL;
  v11 = (struct tWAVEFORMATEX **)*((_QWORD *)a1 + 2);
  a6 = v11;
  (*(void (__fastcall **)(struct tWAVEFORMATEX **))&(*v11)->nAvgBytesPerSec)(v11);
  v12 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)pv);
  v13 = (struct tWAVEFORMATEX *)pv[0];
  if ( v12 < 0 )
    goto LABEL_19;
  if ( (int)CloneWaveFormat(Src, &v24) < 0 )
    goto LABEL_18;
  v9 = v24;
  v16 = IsFormatSupportedByHwAudioEngine((struct IMMDevice *)v11, v14, v24, 0LL);
  if ( v16 )
  {
    if ( (*(int (__fastcall **)(struct tWAVEFORMATEX **, struct _GUID **))&(*v11)[2].nSamplesPerSec)(v11, &a5) < 0
      || (int)CEndpointCharacteristics::GetOffloadDeviceFormat(a1, &Srca) < 0 )
    {
      goto LABEL_19;
    }
    if ( (int)CloneWaveFormat(Srca, &v24) >= 0 )
    {
      nChannels = Srca->nChannels;
      if ( v13->nChannels == (_WORD)nChannels )
      {
        v9 = v24;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_dd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x10u,
            (__int64)&WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
            v13->nChannels);
        }
        nSamplesPerSec = v13->nSamplesPerSec;
        v9 = v24;
        v24->nSamplesPerSec = nSamplesPerSec;
        v9->nAvgBytesPerSec = nSamplesPerSec * v9->nBlockAlign;
        v16 = IsFormatSupportedByHwAudioEngine((struct IMMDevice *)v11, nChannels, v9, 0LL);
      }
      goto LABEL_14;
    }
LABEL_18:
    v9 = v24;
    goto LABEL_19;
  }
LABEL_14:
  if ( v16 >= 0 )
  {
    v22 = *a4;
    if ( IsOffloadConnectorFormatSupportedForMixFormat(a1, &v22, v15, v9, v9) >= 0 )
    {
      v22 = *a4;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(a1, &v22, eOffloadConnector, v9, v13, 0LL) )
        CloneWaveFormat(v9, v10);
    }
  }
LABEL_19:
  v19 = *v10 == 0LL ? 0x88890008 : 0;
  CoTaskMemFree(v13);
  CoTaskMemFree(v9);
  CoTaskMemFree(Srca);
  Srca = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(struct tWAVEFORMATEX **))&(*v11)->cbSize)(v11);
  CoTaskMemFree(a5);
  a5 = 0LL;
  CoTaskMemFree(0LL);
  return v19;
}
