/*
 * XREFs of AudioServerIsFormatSupported @ 0x18000A9B0
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800A2C90 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180003FCC (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800040B0 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     TemplateEventDescriptor @ 0x18000B310 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x18000B330 (Template_zqttq.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18002D5D8 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18002D6C8 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004B8FC (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18009A1B4 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18009B6BC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800A04EC (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800A1268 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 *     WPP_SF_dddd @ 0x1800A3BF0 (WPP_SF_dddd.c)
 */

__int64 __fastcall AudioServerIsFormatSupported(
        struct tWAVEFORMATEX *a1,
        const unsigned __int16 *a2,
        int a3,
        __int128 *a4,
        _WORD *Src,
        struct tWAVEFORMATEX **a6)
{
  __int128 v6; // xmm0
  __int64 v10; // rcx
  struct IMMDevice *v11; // rbx
  int AliasedEndpointCharacteristics; // edi
  __int64 v13; // rdi
  struct tWAVEFORMATEX *v14; // rax
  struct tWAVEFORMATEX *v15; // rsi
  __int64 v16; // r8
  struct tWAVEFORMATEX *v17; // rax
  __int64 wFormatTag; // r9
  struct _GUID *v19; // r8
  int AcceptableSPDIFTypeForDevice; // eax
  void *v21; // r14
  int (*v22)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v23; // edx
  int MixFormat; // eax
  struct tWAVEFORMATEX *v25; // r15
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v26; // r8d
  struct tWAVEFORMATEX *v27; // rcx
  int v28; // eax
  int v29; // r15d
  int v30; // r12d
  int KSFormatFromWFXFormat; // eax
  __int64 v32; // r10
  __int64 v33; // rcx
  struct tWAVEFORMATEX **v35; // [rsp+20h] [rbp-E0h]
  struct tWAVEFORMATEX **v36; // [rsp+20h] [rbp-E0h]
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  struct CEndpointCharacteristics *v39; // [rsp+70h] [rbp-90h] BYREF
  struct tWAVEFORMATEX *v40; // [rsp+78h] [rbp-88h] BYREF
  WINBOOL fPending; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+88h] [rbp-78h] BYREF
  int v43; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-60h] BYREF
  struct tWAVEFORMATEX *v46; // [rsp+A8h] [rbp-58h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp-50h] BYREF
  struct IMMDevice *v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h] BYREF
  PROPVARIANT pvar[3]; // [rsp+C8h] [rbp-38h] BYREF
  struct tWAVEFORMATEX *v51; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v52[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v53; // [rsp+F0h] [rbp-10h]
  struct _GUID v54; // [rsp+100h] [rbp+0h]
  struct _GUID v55; // [rsp+110h] [rbp+10h]
  __int128 v56; // [rsp+120h] [rbp+20h]
  struct _GUID v57; // [rsp+130h] [rbp+30h]
  __int128 v58; // [rsp+140h] [rbp+40h]
  struct _GUID v59; // [rsp+150h] [rbp+50h] BYREF
  struct _GUID v60; // [rsp+160h] [rbp+60h] BYREF
  struct _GUID v61; // [rsp+170h] [rbp+70h] BYREF
  struct _GUID v62; // [rsp+180h] [rbp+80h]
  struct _GUID v63; // [rsp+190h] [rbp+90h] BYREF
  struct _GUID v64; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _GUID v65; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v66; // [rsp+1C0h] [rbp+C0h]
  __int128 v67; // [rsp+1D0h] [rbp+D0h]
  __int128 v68; // [rsp+1E0h] [rbp+E0h]
  __int128 v69; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int16 *v70; // [rsp+200h] [rbp+100h]
  int v71; // [rsp+208h] [rbp+108h]
  int v72; // [rsp+20Ch] [rbp+10Ch]
  void *v73; // [rsp+210h] [rbp+110h]
  int v74; // [rsp+218h] [rbp+118h]
  int v75; // [rsp+21Ch] [rbp+11Ch]
  const char *v76; // [rsp+220h] [rbp+120h]
  __int64 v77; // [rsp+228h] [rbp+128h]
  int *v78; // [rsp+230h] [rbp+130h]
  __int64 v79; // [rsp+238h] [rbp+138h]
  int *v80; // [rsp+240h] [rbp+140h]
  __int64 v81; // [rsp+248h] [rbp+148h]

  v6 = *a4;
  v40 = a1;
  v68 = v6;
  v69 = v6;
  EtwEventActivityIdControl(4LL, &v69);
  v11 = 0LL;
  v46 = 0LL;
  v51 = 0LL;
  pv = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  v49 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zqttq(
      v10,
      (unsigned int)&AudioSrv_IsFormatSupported_Task_Start,
      (_DWORD)a2,
      *((_DWORD *)a4 + 4),
      *((_DWORD *)a4 + 6),
      *((_DWORD *)a4 + 9),
      *((_DWORD *)a4 + 5));
  if ( a3 || a6 )
  {
    AliasedEndpointCharacteristics = 0;
    if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 64LL))(
            g_PolicyManager,
            *((unsigned int *)a4 + 4))
      || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a4 + 5)) )
    {
      AliasedEndpointCharacteristics = -2147024809;
      AudSrvTraceLoggingErrorHelper("ValidateVadServerSettings", 0x4AFu, -2147024809);
    }
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_72;
    if ( a6 )
      *a6 = 0LL;
    if ( *Src == 0xFFFE && Src[8] < 0x16u )
    {
      AliasedEndpointCharacteristics = -2147024809;
      goto LABEL_72;
    }
    AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v39);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_72;
    v48 = (struct IMMDevice *)*((_QWORD *)v39 + 2);
    v11 = v48;
    ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->AddRef)(v11);
    if ( Src[1] > 2u )
    {
      if ( ((*Src - 1) & 0xFFFD) == 0 )
      {
        AliasedEndpointCharacteristics = -2004287480;
        goto LABEL_81;
      }
      if ( !g_bMultiChannelQueried )
      {
        v44 = 0LL;
        if ( !((unsigned int (__fastcall *)(struct IMMDevice *, __int64, __int64 *))v11->lpVtbl->OpenPropertyStore)(
                v11,
                2LL,
                &v44) )
        {
          pvar[0] = (PROPVARIANT)11;
          pvar[1] = (PROPVARIANT)0xFFFF;
          pvar[2] = 0LL;
          (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v44 + 48LL))(
            v44,
            &PKEY_SpatialAudioEndpoint_MultiChannelQueried,
            pvar);
          PropVariantClear(pvar);
        }
        g_bMultiChannelQueried = 1;
        if ( v44 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      }
    }
    v13 = (unsigned __int16)Src[8];
    v14 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v13 + 18);
    v15 = v14;
    if ( !v14 )
    {
      AliasedEndpointCharacteristics = -2147024882;
      goto LABEL_72;
    }
    memcpy_0(v14, Src, v13 + 18);
    v17 = (struct tWAVEFORMATEX *)((char *)v15 + 24);
    if ( v15->wFormatTag != 0xFFFE )
      v17 = v15;
    wFormatTag = v17->wFormatTag;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dddd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        v15->nChannels,
        v16,
        wFormatTag,
        v15->nChannels,
        v15->nSamplesPerSec,
        v15->wBitsPerSample);
    }
    if ( *((_DWORD *)a4 + 5) == 1 )
    {
      AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct tWAVEFORMATEX *, __int64 *, __int64))(*(_QWORD *)g_PolicyManager + 32LL))(
                                         g_PolicyManager,
                                         v40,
                                         &v38,
                                         wFormatTag);
      if ( AliasedEndpointCharacteristics >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v38 + 136LL))(
                v38,
                *((unsigned int *)a4 + 4),
                0LL) )
        {
          AliasedEndpointCharacteristics = 1;
          goto LABEL_40;
        }
        if ( v38 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
          v38 = 0LL;
        }
        LODWORD(v35) = a3;
        AliasedEndpointCharacteristics = DeriveAudioProcessingModeConfiguration(
                                           *((unsigned int *)a4 + 4),
                                           *((unsigned int *)a4 + 6),
                                           v39,
                                           0LL);
        if ( AliasedEndpointCharacteristics < 0 )
          goto LABEL_40;
        v66 = v56;
        v67 = v58;
        v59 = v57;
        AcceptableSPDIFTypeForDevice = DeriveOffloadConnectorFormatFromStreamFormat(
                                         v39,
                                         v15,
                                         v19,
                                         &v59,
                                         (struct _GUID *)v35,
                                         &v51);
LABEL_39:
        AliasedEndpointCharacteristics = AcceptableSPDIFTypeForDevice;
      }
    }
    else if ( a3 )
    {
      v29 = IsExclusiveModeDisabled(v11) == 0;
      v30 = IsOffloadDisabled(v11);
      if ( v30 && !v29 )
        goto LABEL_63;
      if ( g_PolicyManager )
      {
        AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct tWAVEFORMATEX *, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
                                           g_PolicyManager,
                                           v40,
                                           &v38);
        if ( AliasedEndpointCharacteristics < 0 )
          goto LABEL_40;
        if ( v29 )
          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v38 + 136LL))(
                  v38,
                  *((unsigned int *)a4 + 4),
                  1LL);
        if ( !v30 )
          v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v38 + 136LL))(
                  v38,
                  *((unsigned int *)a4 + 4),
                  0LL) == 0;
        if ( v38 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
          v38 = 0LL;
        }
      }
      if ( !v29 )
      {
LABEL_63:
        AliasedEndpointCharacteristics = -2004287474;
        goto LABEL_40;
      }
      if ( IsSPDIFFormat(v15) && (unsigned int)IsSPDIFEndpoint(v11) )
      {
        AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v11, v15, 0LL, v30);
        goto LABEL_39;
      }
      v36 = (struct tWAVEFORMATEX **)&v45;
      AliasedEndpointCharacteristics = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v11->lpVtbl->Activate)(
                                         v11,
                                         &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                                         23LL);
      if ( AliasedEndpointCharacteristics >= 0 )
      {
        KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(v15, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
        v21 = pv;
        AliasedEndpointCharacteristics = KSFormatFromWFXFormat;
        if ( KSFormatFromWFXFormat >= 0 )
        {
          LODWORD(v36) = v30;
          AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD, _QWORD, struct tWAVEFORMATEX **, __int64 *))(*(_QWORD *)v45 + 80LL))(
                                             v45,
                                             pv,
                                             *(unsigned int *)pv,
                                             0LL,
                                             v36,
                                             &v49);
          if ( AliasedEndpointCharacteristics < 0 )
            AliasedEndpointCharacteristics = -2004287480;
        }
        goto LABEL_41;
      }
    }
    else
    {
      AliasedEndpointCharacteristics = DeriveAudioProcessingModeConfiguration(
                                         *((unsigned int *)a4 + 4),
                                         *((unsigned int *)a4 + 6),
                                         v39,
                                         *((_DWORD *)v39 + 37) == 1);
      if ( AliasedEndpointCharacteristics >= 0 )
      {
        v23 = *((_DWORD *)a4 + 5);
        if ( *((_DWORD *)a4 + 9) )
        {
          v63 = v62;
          v40 = 0LL;
          v64 = v54;
          v65 = v55;
          v28 = DeriveConnectorFormatFromStreamFormat(v39, v23, v15, &v65, &v64, &v63, 1, &v40);
          v27 = v40;
          AliasedEndpointCharacteristics = v28;
        }
        else
        {
          v60 = v55;
          MixFormat = CEndpointCharacteristics::GetMixFormat(v39, v23, &v60, v22, &v46);
          v25 = v46;
          AliasedEndpointCharacteristics = MixFormat;
          if ( MixFormat >= 0 )
          {
            v26 = *((_DWORD *)a4 + 5);
            v61 = v54;
            AliasedEndpointCharacteristics = IsStreamFormatSupportedForMixFormat(v39, &v61, v26, v46, v15, a6);
          }
          if ( !v25 )
            goto LABEL_40;
          v27 = v25;
        }
        CoTaskMemFree(v27);
      }
    }
LABEL_40:
    v21 = pv;
LABEL_41:
    CoTaskMemFree(v15);
    if ( v21 )
      CoTaskMemFree(v21);
    goto LABEL_72;
  }
  AliasedEndpointCharacteristics = -2147024809;
LABEL_72:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v10, &AudioSrv_IsFormatSupported_Task_Stop);
  if ( AliasedEndpointCharacteristics < 0 )
  {
    v43 = AliasedEndpointCharacteristics;
    v42 = 3909;
    InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( fPending )
    {
      Context = qword_18012BF30;
      qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
    }
    v32 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v32 > 4u )
    {
      v77 = 29LL;
      v76 = "AudioServerIsFormatSupported";
      v79 = 4LL;
      v78 = &v42;
      v80 = &v43;
      v81 = 4LL;
      v52[1] = 4;
      v70 = *(unsigned __int16 **)(v32 + 8);
      v52[0] = ((unsigned int)&unk_1800F898E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v33 = *(_QWORD *)(v32 + 32);
      v53 = 0LL;
      v71 = *v70;
      v73 = &unk_1800F8999;
      v72 = 2;
      v74 = 35;
      v75 = 1;
      EtwEventWriteTransfer(v33, v52, 0LL, 0LL);
      v11 = v48;
    }
  }
  if ( v38 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    v38 = 0LL;
  }
LABEL_81:
  if ( v39 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v39 + 16LL))(v39);
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  if ( v11 )
    ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->Release)(v11);
  EtwEventActivityIdControl(4LL, &v69);
  return (unsigned int)AliasedEndpointCharacteristics;
}
