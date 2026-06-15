/*
 * XREFs of AudioServerIsFormatSupported @ 0x180001740
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800C46C0 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     McTemplateU0 @ 0x1800021C0 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x1800021FC (McTemplateU0zqttq.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800022C4 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180002BA0 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180002C84 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x1800030F8 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180003174 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800032C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039070 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180063980 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800B9B3C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800BB044 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1800C08B8 (-AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800C0E48 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800C1D2C (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 */

__int64 __fastcall AudioServerIsFormatSupported(
        void *a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        unsigned __int16 *Src,
        struct tWAVEFORMATEX **a6)
{
  __int128 v6; // xmm0
  __int64 v10; // rcx
  int v11; // ecx
  int MixFormat; // esi
  __int64 v13; // rdx
  int v14; // eax
  struct IMMDevice *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  struct tWAVEFORMATEX *v19; // rbx
  struct tWAVEFORMATEX *v20; // rax
  struct tWAVEFORMATEX *v21; // r12
  struct tWAVEFORMATEX *v22; // r15
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  struct _GUID *v27; // r8
  _QWORD *v28; // r15
  struct KSDATAFORMAT_WAVEFORMATEX *v29; // r12
  struct KSDATAFORMAT_WAVEFORMATEX *v30; // rcx
  void *v31; // rcx
  int AcceptableSPDIFTypeForDevice; // eax
  int (*v33)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v34; // edx
  _QWORD *v35; // r15
  struct KSDATAFORMAT_WAVEFORMATEX *v36; // r12
  struct KSDATAFORMAT_WAVEFORMATEX *v37; // rcx
  __int64 v38; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v39; // r8d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v40; // edx
  _QWORD *v41; // r14
  struct KSDATAFORMAT_WAVEFORMATEX *v42; // r15
  struct KSDATAFORMAT_WAVEFORMATEX *v43; // rcx
  int v44; // r15d
  int v45; // r12d
  int v46; // eax
  int v47; // eax
  _QWORD *v48; // r14
  struct KSDATAFORMAT_WAVEFORMATEX *v49; // r15
  struct KSDATAFORMAT_WAVEFORMATEX *v50; // rcx
  bool v51; // si
  struct CEndpointCharacteristics *v52; // rcx
  struct tWAVEFORMATEX **v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+20h] [rbp-E0h]
  int v56; // [rsp+20h] [rbp-E0h]
  int *v57; // [rsp+20h] [rbp-E0h]
  LPVOID pv; // [rsp+70h] [rbp-90h] BYREF
  int v59[2]; // [rsp+78h] [rbp-88h] BYREF
  struct CEndpointCharacteristics *v60; // [rsp+80h] [rbp-80h] BYREF
  __int64 p_pv; // [rsp+88h] [rbp-78h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v62; // [rsp+90h] [rbp-70h] BYREF
  __int64 v63; // [rsp+98h] [rbp-68h]
  LPVOID v64[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _GUID v65; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v66; // [rsp+C0h] [rbp-40h] BYREF
  struct _GUID v67; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v68[48]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v69; // [rsp+110h] [rbp+10h]
  __int128 v70; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v6 = *a4;
  *(_QWORD *)&v66.Data1 = a2;
  pv = a1;
  v59[0] = a3;
  v69 = v6;
  v70 = v6;
  EtwEventActivityIdControl(4LL, &v70);
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v10,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(v68);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      v11,
      (unsigned int)&AudioSrv_IsFormatSupported_Task_Start,
      a2,
      *((_DWORD *)a4 + 4),
      *((_DWORD *)a4 + 6),
      *((_DWORD *)a4 + 9),
      *((_DWORD *)a4 + 5));
  if ( !a3 && !a6 )
  {
    MixFormat = -2147024809;
    v13 = 4020LL;
LABEL_130:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      (int)v54);
    goto LABEL_131;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 72LL))(
          g_PolicyManager,
          *((unsigned int *)a4 + 4))
    || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a4 + 5)) )
  {
    MixFormat = -2147024809;
    AudSrvTraceLoggingErrorHelper("ValidateVadServerSettings", 0x53Bu, -2147024809);
    v13 = 4022LL;
    goto LABEL_130;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( *Src == 0xFFFE && Src[8] < 0x16u )
  {
    MixFormat = -2147024809;
    v13 = 4029LL;
    goto LABEL_130;
  }
  v60 = 0LL;
  v14 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          &v60);
  MixFormat = v14;
  if ( v14 >= 0 )
  {
    v15 = (struct IMMDevice *)*((_QWORD *)v60 + 2);
    ((void (__fastcall *)(struct IMMDevice *))v15->lpVtbl->AddRef)(v15);
    if ( Src[1] > 2u && ((*Src - 1) & 0xFFFD) == 0 )
    {
      MixFormat = -2004287480;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFC9,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890008LL,
        (int)v54);
LABEL_125:
      if ( v15 )
        ((void (__fastcall *)(struct IMMDevice *))v15->lpVtbl->Release)(v15);
      goto LABEL_127;
    }
    if ( !*((_DWORD *)v60 + 37) && Src[1] > 2u )
    {
      wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::ReportUsageToService(65533LL, 0LL);
      LOBYTE(v16) = 2;
      wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::ReportUsageToService(v17, v16);
      if ( (g_dwSpatialEndpointQuery & 1) == 0 )
      {
        v64[0] = 0LL;
        if ( ((int (__fastcall *)(struct IMMDevice *, __int64, LPVOID *))v15->lpVtbl->OpenPropertyStore)(v15, 2LL, v64) >= 0 )
        {
          p_pv = 11LL;
          v62 = (struct KSDATAFORMAT_WAVEFORMATEX *)0xFFFF;
          v63 = 0LL;
          (*(void (__fastcall **)(LPVOID, void *, __int64 *))(*(_QWORD *)v64[0] + 48LL))(
            v64[0],
            &PKEY_SpatialAudioEndpoint_MultiChannelQueried,
            &p_pv);
        }
        g_dwSpatialEndpointQuery |= 1u;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v64);
      }
    }
    v18 = Src[8];
    v19 = 0LL;
    v20 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v18 + 18);
    v21 = v20;
    if ( v20 )
    {
      memcpy_0(v20, Src, v18 + 18);
      MixFormat = 0;
    }
    else
    {
      MixFormat = -2147024882;
    }
    v22 = 0LL;
    if ( v21 )
    {
      v19 = v21;
      v22 = v21;
    }
    if ( MixFormat < 0 )
    {
      v23 = (unsigned int)MixFormat;
      v24 = 4067LL;
LABEL_104:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v23,
        (int)v54);
      goto LABEL_123;
    }
    if ( *((_DWORD *)a4 + 5) == 1 )
    {
      v64[0] = 0LL;
      v25 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, LPVOID, LPVOID *))(*(_QWORD *)g_PolicyManager + 32LL))(
              g_PolicyManager,
              pv,
              v64);
      MixFormat = v25;
      if ( v25 < 0 )
      {
        v26 = 4072LL;
LABEL_38:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v25,
          (int)v54);
        goto LABEL_49;
      }
      if ( !(*(unsigned int (__fastcall **)(LPVOID, _QWORD, _QWORD))(*(_QWORD *)v64[0] + 144LL))(
              v64[0],
              *((unsigned int *)a4 + 4),
              0LL) )
      {
        MixFormat = 1;
LABEL_49:
        v31 = v64;
LABEL_50:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v31);
        goto LABEL_123;
      }
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v64[0] + 120LL))(v64[0]);
      LODWORD(v54) = 0;
      v25 = DeriveAudioProcessingModeConfiguration(
              *((unsigned int *)a4 + 4),
              *((unsigned int *)a4 + 6),
              *((unsigned int *)a4 + 26));
      MixFormat = v25;
      if ( v25 < 0 )
      {
        v26 = 4098LL;
        goto LABEL_38;
      }
      p_pv = (__int64)&pv;
      pv = 0LL;
      v62 = 0LL;
      LOBYTE(v63) = 1;
      MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(
                    v60,
                    v19,
                    v27,
                    &v67,
                    (struct _GUID *)v54,
                    (struct tWAVEFORMATEX **)&v62);
      if ( (_BYTE)v63 )
      {
        v28 = (_QWORD *)p_pv;
        v29 = v62;
        v30 = *(struct KSDATAFORMAT_WAVEFORMATEX **)p_pv;
        if ( v62 != *(struct KSDATAFORMAT_WAVEFORMATEX **)p_pv )
        {
          if ( v30 )
            CoTaskMemFree(v30);
          *v28 = v29;
        }
      }
      if ( MixFormat < 0 )
      {
LABEL_47:
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_49;
      }
      v55 = *((_DWORD *)a4 + 4);
      if ( !(unsigned int)AreResourcesAvailableForStream(
                            *(_QWORD *)&v66.Data1,
                            *((unsigned int *)v60 + 37),
                            &v65,
                            *((unsigned int *)a4 + 5)) )
      {
        MixFormat = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x100C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x88890008LL,
          v55);
        goto LABEL_47;
      }
      if ( pv )
        CoTaskMemFree(pv);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v64);
      goto LABEL_122;
    }
    if ( v59[0] )
    {
      v44 = IsExclusiveModeDisabled(v15) == 0;
      v45 = IsOffloadDisabled(v15);
      if ( v45 && !v44 )
        goto LABEL_98;
      if ( g_PolicyManager )
      {
        *(_QWORD *)v59 = 0LL;
        v46 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, LPVOID, int *))(*(_QWORD *)g_PolicyManager + 32LL))(
                g_PolicyManager,
                pv,
                v59);
        MixFormat = v46;
        if ( v46 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x104C,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v46,
            (int)v54);
          v31 = v59;
          goto LABEL_50;
        }
        if ( v44 )
          v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)v59 + 144LL))(
                  *(_QWORD *)v59,
                  *((unsigned int *)a4 + 4),
                  1LL);
        if ( !v45 && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v59 + 88LL))(*(_QWORD *)v59) )
          v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v59 + 144LL))(
                  *(_QWORD *)v59,
                  *((unsigned int *)a4 + 4),
                  0LL) == 0;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v59);
      }
      if ( !v44 )
      {
LABEL_98:
        MixFormat = -2004287474;
        v24 = 4188LL;
        v23 = 2290679822LL;
        goto LABEL_104;
      }
      if ( !(unsigned int)IsSPDIFFormat(v19) || !(unsigned int)IsSPDIFEndpoint(v15) )
      {
        *(_QWORD *)v59 = 0LL;
        v57 = v59;
        v47 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v15->lpVtbl->Activate)(
                v15,
                &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
                23LL);
        MixFormat = v47;
        if ( v47 >= 0 )
        {
          v64[0] = 0LL;
          p_pv = (__int64)v64;
          v62 = 0LL;
          LOBYTE(v63) = 1;
          MixFormat = CreateKSFormatFromWFXFormat(v19, &v62);
          if ( (_BYTE)v63 )
          {
            v48 = (_QWORD *)p_pv;
            v49 = v62;
            v50 = *(struct KSDATAFORMAT_WAVEFORMATEX **)p_pv;
            if ( v62 != *(struct KSDATAFORMAT_WAVEFORMATEX **)p_pv )
            {
              if ( v50 )
                CoTaskMemFree(v50);
              *v48 = v49;
            }
          }
          if ( MixFormat >= 0 )
          {
            pv = 0LL;
            LODWORD(v57) = v45;
            v51 = (*(int (__fastcall **)(_QWORD, LPVOID, _QWORD, _QWORD, int *, LPVOID *))(**(_QWORD **)v59 + 80LL))(
                    *(_QWORD *)v59,
                    v64[0],
                    *(unsigned int *)v64[0],
                    0LL,
                    v57,
                    &pv) < 0;
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&pv);
            if ( !v51 )
            {
              if ( v64[0] )
                CoTaskMemFree(v64[0]);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v59);
              goto LABEL_122;
            }
            MixFormat = -2004287480;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1069,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)MixFormat,
              (int)v59);
          }
          if ( v64[0] )
            CoTaskMemFree(v64[0]);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1066,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v47,
            (int)v59);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v59);
        goto LABEL_123;
      }
      AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v15, v19, 0LL, v45);
      MixFormat = AcceptableSPDIFTypeForDevice;
      if ( AcceptableSPDIFTypeForDevice < 0 )
      {
        v24 = 4192LL;
        goto LABEL_103;
      }
    }
    else
    {
      LODWORD(v54) = *((_DWORD *)v60 + 37) == 1;
      AcceptableSPDIFTypeForDevice = DeriveAudioProcessingModeConfiguration(
                                       *((unsigned int *)a4 + 4),
                                       *((unsigned int *)a4 + 6),
                                       *((unsigned int *)a4 + 26));
      MixFormat = AcceptableSPDIFTypeForDevice;
      if ( AcceptableSPDIFTypeForDevice < 0 )
      {
        v24 = 4133LL;
LABEL_103:
        v23 = (unsigned int)AcceptableSPDIFTypeForDevice;
        goto LABEL_104;
      }
      if ( !*((_DWORD *)a4 + 9) )
      {
        if ( *((_DWORD *)a4 + 27) )
        {
          if ( (v19->wFormatTag != 0xFFFE
             || (*(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&v22[1].nSamplesPerSec
                                                                                          + 2)
              || *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&v22[1].wBitsPerSample)
             && (*(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&v22[1].nSamplesPerSec
                                                                                          + 2)
              || *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&v22[1].wBitsPerSample))
            && ((v19->wFormatTag - 1) & 0xFFFD) != 0 )
          {
            MixFormat = -2004287480;
            v24 = 4144LL;
            v23 = 2290679816LL;
            goto LABEL_104;
          }
          goto LABEL_122;
        }
        v34 = *((_DWORD *)a4 + 5);
        p_pv = (__int64)&pv;
        LOBYTE(v63) = 1;
        pv = 0LL;
        v62 = 0LL;
        v65 = *(struct _GUID *)v64;
        MixFormat = CEndpointCharacteristics::GetMixFormat(v60, v34, &v65, v33, (struct tWAVEFORMATEX **)&v62);
        if ( (_BYTE)v63 )
        {
          v35 = (_QWORD *)p_pv;
          v36 = v62;
          v37 = *(struct KSDATAFORMAT_WAVEFORMATEX **)p_pv;
          if ( v62 != *(struct KSDATAFORMAT_WAVEFORMATEX **)p_pv )
          {
            if ( v37 )
              CoTaskMemFree(v37);
            *v35 = v36;
          }
        }
        if ( MixFormat >= 0 )
        {
          v39 = *((_DWORD *)a4 + 5);
          v65 = v66;
          MixFormat = IsStreamFormatSupportedForMixFormat(v60, &v65, v39, (const struct tWAVEFORMATEX *)pv, v19, a6);
          goto LABEL_82;
        }
        v38 = 4150LL;
LABEL_81:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v38,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)MixFormat,
          v56);
LABEL_82:
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_123;
      }
      v40 = *((_DWORD *)a4 + 5);
      p_pv = (__int64)&pv;
      LOBYTE(v63) = 1;
      pv = 0LL;
      v67 = v66;
      v66 = *(struct _GUID *)v64;
      v62 = 0LL;
      MixFormat = DeriveConnectorFormatFromStreamFormat(
                    v60,
                    v40,
                    v19,
                    &v66,
                    &v67,
                    &v65,
                    1,
                    (struct tWAVEFORMATEX **)&v62);
      if ( (_BYTE)v63 )
      {
        v41 = (_QWORD *)p_pv;
        v42 = v62;
        v43 = *(struct KSDATAFORMAT_WAVEFORMATEX **)p_pv;
        if ( v62 != *(struct KSDATAFORMAT_WAVEFORMATEX **)p_pv )
        {
          if ( v43 )
            CoTaskMemFree(v43);
          *v41 = v42;
        }
      }
      if ( MixFormat < 0 )
      {
        v38 = 4159LL;
        goto LABEL_81;
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
LABEL_122:
    MixFormat = 0;
LABEL_123:
    if ( v19 )
      CoTaskMemFree(v19);
    goto LABEL_125;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFC2,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v14,
    (int)v54);
LABEL_127:
  v52 = v60;
  if ( v60 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v60 + 16LL))(v60);
LABEL_131:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v52, &AudioSrv_IsFormatSupported_Task_Stop);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(v68);
  EtwEventActivityIdControl(4LL, &v70);
  return (unsigned int)MixFormat;
}
