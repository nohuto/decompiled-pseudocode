/*
 * XREFs of AudioServerIsFormatSupported @ 0x18001F5A0
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x18008F370 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180007208 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@.c)
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x1800087B0 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18000882C (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800201C0 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180022BF0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180035664 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180082BE4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18008B300 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x18008C08C (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 *     McTemplateU0 @ 0x1800906F8 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x180090734 (McTemplateU0zqttq.c)
 *     WPP_SF_dddd @ 0x1800908A0 (WPP_SF_dddd.c)
 */

__int64 __fastcall AudioServerIsFormatSupported(
        struct tWAVEFORMATEX *a1,
        __int64 a2,
        WINBOOL a3,
        __int128 *a4,
        unsigned __int16 *Src,
        struct tWAVEFORMATEX **a6)
{
  __int128 v6; // xmm0
  _OWORD *v9; // r12
  void *v10; // rbx
  DWORD v11; // edi
  DWORD CurrentThreadId; // eax
  __int64 v13; // rcx
  struct IMMDevice *v14; // rbx
  int AcceptableSPDIFTypeForDevice; // edi
  __int64 v16; // r8
  unsigned __int16 v17; // cx
  char v18; // cl
  __int64 v19; // r8
  __int64 v20; // rdi
  unsigned __int16 *v21; // rax
  unsigned __int16 *v22; // rsi
  unsigned __int16 v23; // ax
  __int64 v24; // r9
  struct _GUID *v25; // r8
  int (*v26)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v27; // edx
  int MixFormat; // eax
  void *v29; // r15
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v30; // r8d
  int v31; // r15d
  int v32; // r13d
  char *v33; // rax
  __int64 v34; // r10
  __int64 v35; // rcx
  struct _GUID *DueTime; // [rsp+20h] [rbp-E0h]
  __int64 *DueTimea; // [rsp+20h] [rbp-E0h]
  WINBOOL v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  CEndpointCharacteristics *v41; // [rsp+80h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v42; // [rsp+88h] [rbp-78h] BYREF
  WINBOOL fPending; // [rsp+90h] [rbp-70h] BYREF
  int v44; // [rsp+98h] [rbp-68h] BYREF
  int v45; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+C0h] [rbp-40h] BYREF
  LPVOID v50; // [rsp+C8h] [rbp-38h] BYREF
  struct IMMDevice *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h] BYREF
  PROPVARIANT pvar[3]; // [rsp+E0h] [rbp-20h] BYREF
  void *phNewTimer; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v55; // [rsp+100h] [rbp+0h]
  DWORD v56; // [rsp+108h] [rbp+8h]
  const wchar_t *v57; // [rsp+110h] [rbp+10h]
  void *v58; // [rsp+118h] [rbp+18h]
  char v59; // [rsp+120h] [rbp+20h]
  struct tWAVEFORMATEX *v60; // [rsp+128h] [rbp+28h] BYREF
  _DWORD v61[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v62; // [rsp+138h] [rbp+38h]
  struct _GUID v63; // [rsp+140h] [rbp+40h]
  struct _GUID v64; // [rsp+150h] [rbp+50h]
  struct _GUID v65; // [rsp+160h] [rbp+60h]
  struct _GUID v66; // [rsp+170h] [rbp+70h] BYREF
  struct _GUID v67; // [rsp+180h] [rbp+80h] BYREF
  struct _GUID v68; // [rsp+190h] [rbp+90h] BYREF
  struct _GUID v69; // [rsp+1A0h] [rbp+A0h]
  struct _GUID v70; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _GUID v71; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _GUID v72; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v73; // [rsp+200h] [rbp+100h]
  __int128 v74; // [rsp+210h] [rbp+110h] BYREF
  unsigned __int16 *v75; // [rsp+220h] [rbp+120h] BYREF
  int v76; // [rsp+228h] [rbp+128h]
  int v77; // [rsp+22Ch] [rbp+12Ch]
  void *v78; // [rsp+230h] [rbp+130h]
  int v79; // [rsp+238h] [rbp+138h]
  int v80; // [rsp+23Ch] [rbp+13Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+240h] [rbp+140h] BYREF
  int *v82; // [rsp+250h] [rbp+150h]
  __int64 v83; // [rsp+258h] [rbp+158h]
  int *v84; // [rsp+260h] [rbp+160h]
  __int64 v85; // [rsp+268h] [rbp+168h]

  v6 = *a4;
  v42 = a1;
  v39 = a3;
  v73 = v6;
  v74 = v6;
  EtwEventActivityIdControl(4LL, &v74);
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v9 = 0LL;
  v10 = g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  v55 = *((_QWORD *)Context + 1);
  phNewTimer = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v58 = v10;
  v56 = CurrentThreadId;
  v57 = L"AudioServerIsFormatSupported";
  v59 = 0;
  if ( v11 >= 0x3E8 )
    CreateTimerQueueTimer(&phNewTimer, 0LL, CWatchdogTimer::TimerCallback, &phNewTimer, v11, 0, 0x20u);
  v14 = 0LL;
  pv = 0LL;
  v60 = 0LL;
  v51 = 0LL;
  v47 = 0LL;
  v52 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      v13,
      (unsigned int)&AudioSrv_IsFormatSupported_Task_Start,
      a2,
      *((_DWORD *)a4 + 4),
      *((_DWORD *)a4 + 6),
      *((_DWORD *)a4 + 9),
      *((_DWORD *)a4 + 5));
  if ( v39 || a6 )
  {
    AcceptableSPDIFTypeForDevice = 0;
    if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 64LL))(
            g_PolicyManager,
            *((unsigned int *)a4 + 4))
      || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a4 + 5)) )
    {
      AcceptableSPDIFTypeForDevice = -2147024809;
      AudSrvTraceLoggingErrorHelper("ValidateVadServerSettings", 0x4E1u, -2147024809);
    }
    if ( AcceptableSPDIFTypeForDevice < 0 )
      goto LABEL_82;
    if ( a6 )
      *a6 = 0LL;
    if ( *Src == 0xFFFE && Src[8] < 0x16u )
    {
      AcceptableSPDIFTypeForDevice = -2147024809;
      goto LABEL_82;
    }
    AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                     g_pEndpointCharacteristicsCache,
                                     a2,
                                     0LL,
                                     &v41);
    if ( AcceptableSPDIFTypeForDevice < 0 )
      goto LABEL_82;
    v51 = (struct IMMDevice *)*((_QWORD *)v41 + 2);
    v14 = v51;
    ((void (__fastcall *)(struct IMMDevice *))v14->lpVtbl->AddRef)(v14);
    v17 = Src[1];
    if ( v17 > 2u && ((*Src - 1) & 0xFFFD) == 0 )
    {
      AcceptableSPDIFTypeForDevice = -2004287480;
      goto LABEL_91;
    }
    if ( !*((_DWORD *)v41 + 37) && v17 > 2u )
    {
      wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::ReportUsageToService(v17, 0, v16);
      wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::ReportUsageToService(v18, 2u, v19);
      if ( (g_dwSpatialEndpointQuery & 1) == 0 )
      {
        v46 = 0LL;
        if ( !((unsigned int (__fastcall *)(struct IMMDevice *, __int64, __int64 *))v14->lpVtbl->OpenPropertyStore)(
                v14,
                2LL,
                &v46) )
        {
          pvar[0] = (PROPVARIANT)11;
          pvar[1] = (PROPVARIANT)0xFFFF;
          pvar[2] = 0LL;
          (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v46 + 48LL))(
            v46,
            &PKEY_SpatialAudioEndpoint_MultiChannelQueried,
            pvar);
          PropVariantClear(pvar);
        }
        g_dwSpatialEndpointQuery |= 1u;
        if ( v46 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      }
    }
    v20 = Src[8];
    v21 = (unsigned __int16 *)CoTaskMemAlloc(v20 + 18);
    v22 = v21;
    if ( !v21 )
    {
      AcceptableSPDIFTypeForDevice = -2147024882;
      goto LABEL_82;
    }
    memcpy_0(v21, Src, v20 + 18);
    v23 = *v22;
    if ( *v22 == 0xFFFE )
      v23 = v22[12];
    v24 = v23;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dddd(*((_QWORD *)WPP_GLOBAL_Control + 2));
    }
    if ( *((_DWORD *)a4 + 5) == 1 )
    {
      AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct tWAVEFORMATEX *, __int64 *, __int64))(*(_QWORD *)g_PolicyManager + 32LL))(
                                       g_PolicyManager,
                                       v42,
                                       &v40,
                                       v24);
      if ( AcceptableSPDIFTypeForDevice >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v40 + 144LL))(
               v40,
               *((unsigned int *)a4 + 4),
               0LL) )
        {
          if ( v40 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
            v40 = 0LL;
          }
          LODWORD(DueTime) = 0;
          AcceptableSPDIFTypeForDevice = DeriveAudioProcessingModeConfiguration(
                                           *((unsigned int *)a4 + 4),
                                           *((unsigned int *)a4 + 6),
                                           *((unsigned int *)a4 + 26));
          if ( AcceptableSPDIFTypeForDevice >= 0 )
          {
            v66 = v65;
            AcceptableSPDIFTypeForDevice = DeriveOffloadConnectorFormatFromStreamFormat(
                                             v41,
                                             (struct tWAVEFORMATEX *)v22,
                                             v25,
                                             &v66,
                                             DueTime,
                                             &v60);
          }
        }
        else
        {
          AcceptableSPDIFTypeForDevice = 1;
        }
      }
      goto LABEL_79;
    }
    if ( !v39 )
    {
      AcceptableSPDIFTypeForDevice = DeriveAudioProcessingModeConfiguration(
                                       *((unsigned int *)a4 + 4),
                                       *((unsigned int *)a4 + 6),
                                       *((unsigned int *)a4 + 26));
      if ( AcceptableSPDIFTypeForDevice >= 0 )
      {
        v27 = *((_DWORD *)a4 + 5);
        if ( *((_DWORD *)a4 + 9) )
        {
          v70 = v69;
          v42 = 0LL;
          v71 = v63;
          v72 = v64;
          AcceptableSPDIFTypeForDevice = DeriveConnectorFormatFromStreamFormat(
                                           v41,
                                           v27,
                                           (struct tWAVEFORMATEX *)v22,
                                           &v72,
                                           &v71,
                                           &v70,
                                           1,
                                           &v42);
          CoTaskMemFree(v42);
        }
        else
        {
          v67 = v64;
          MixFormat = CEndpointCharacteristics::GetMixFormat(v41, v27, &v67, v26, (struct tWAVEFORMATEX **)&pv);
          v29 = pv;
          AcceptableSPDIFTypeForDevice = MixFormat;
          if ( MixFormat >= 0 )
          {
            v30 = *((_DWORD *)a4 + 5);
            v68 = v63;
            AcceptableSPDIFTypeForDevice = IsStreamFormatSupportedForMixFormat(
                                             v41,
                                             &v68,
                                             v30,
                                             (const struct tWAVEFORMATEX *)pv,
                                             (const struct tWAVEFORMATEX *)v22,
                                             a6);
          }
          if ( v29 )
            CoTaskMemFree(v29);
        }
      }
      goto LABEL_79;
    }
    v31 = IsExclusiveModeDisabled(v14) == 0;
    v32 = IsOffloadDisabled(v14);
    if ( !v32 || v31 )
    {
      if ( g_PolicyManager )
      {
        AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct tWAVEFORMATEX *, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
                                         g_PolicyManager,
                                         v42,
                                         &v40);
        if ( AcceptableSPDIFTypeForDevice < 0 )
          goto LABEL_79;
        if ( v31 )
          v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v40 + 144LL))(
                  v40,
                  *((unsigned int *)a4 + 4),
                  1LL);
        if ( !v32 )
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v40 + 144LL))(
                  v40,
                  *((unsigned int *)a4 + 4),
                  0LL) == 0;
        if ( v40 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
          v40 = 0LL;
        }
      }
      if ( v31 )
      {
        if ( (unsigned int)IsSPDIFFormat((const struct tWAVEFORMATEX *)v22) && (unsigned int)IsSPDIFEndpoint(v14) )
        {
          AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(
                                           v14,
                                           (const struct tWAVEFORMATEX *)v22,
                                           0LL,
                                           v32);
        }
        else
        {
          DueTimea = &v47;
          AcceptableSPDIFTypeForDevice = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v14->lpVtbl->Activate)(
                                           v14,
                                           &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
                                           23LL);
          if ( AcceptableSPDIFTypeForDevice >= 0 )
          {
            if ( *v22 == 0xFFFE && v22[8] < 0x16u )
            {
              AcceptableSPDIFTypeForDevice = -2147024809;
            }
            else
            {
              v33 = (char *)CoTaskMemAlloc(v22[8] + 82LL);
              v9 = v33;
              if ( v33 )
              {
                *(_DWORD *)v33 = v22[8] + 82;
                *(_QWORD *)(v33 + 4) = 0LL;
                *((_DWORD *)v33 + 3) = 0;
                *((GUID *)v33 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
                *((GUID *)v33 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
                memcpy_0(v33 + 64, v22, v22[8] + 18LL);
                if ( *v22 == 0xFFFE )
                {
                  v9[2] = *(_OWORD *)(v22 + 12);
                }
                else
                {
                  v9[2] = GUID_00000000_0000_0010_8000_00aa00389b71;
                  *((_DWORD *)v9 + 8) = *v22;
                }
                LODWORD(DueTimea) = v32;
                AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)v47 + 80LL))(
                                                 v47,
                                                 v9,
                                                 *(unsigned int *)v9,
                                                 0LL,
                                                 DueTimea,
                                                 &v52);
                if ( AcceptableSPDIFTypeForDevice < 0 )
                  AcceptableSPDIFTypeForDevice = -2004287480;
              }
              else
              {
                AcceptableSPDIFTypeForDevice = -2147024882;
              }
            }
          }
        }
        goto LABEL_79;
      }
    }
    AcceptableSPDIFTypeForDevice = -2004287474;
LABEL_79:
    CoTaskMemFree(v22);
    if ( v9 )
      CoTaskMemFree(v9);
    goto LABEL_82;
  }
  AcceptableSPDIFTypeForDevice = -2147024809;
LABEL_82:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v13, &AudioSrv_IsFormatSupported_Task_Stop);
  if ( AcceptableSPDIFTypeForDevice < 0 )
  {
    v45 = AcceptableSPDIFTypeForDevice;
    v44 = 3894;
    InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v39, &v50);
    if ( v39 )
    {
      v50 = qword_18014C2B8;
      qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
    }
    if ( **((_DWORD **)v50 + 1) > 4u )
    {
      TlgCreateSz(&pDesc, "AudioServerIsFormatSupported");
      v83 = 4LL;
      v82 = &v44;
      v84 = &v45;
      v85 = 4LL;
      v61[1] = 4;
      v75 = *(unsigned __int16 **)(v34 + 8);
      v61[0] = ((unsigned int)&unk_18010E876 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v35 = *(_QWORD *)(v34 + 32);
      v62 = 0LL;
      v76 = *v75;
      v78 = &unk_18010E881;
      v77 = 2;
      v79 = 35;
      v80 = 1;
      EtwEventWriteTransfer(v35, v61, 0LL, 0LL, 5, &v75);
      v14 = v51;
    }
  }
  if ( v40 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    v40 = 0LL;
  }
LABEL_91:
  if ( v41 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  if ( v14 )
    ((void (__fastcall *)(struct IMMDevice *))v14->lpVtbl->Release)(v14);
  if ( phNewTimer )
  {
    DeleteTimerQueueTimer(0LL, phNewTimer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    phNewTimer = 0LL;
  }
  if ( v59 && v58 )
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v58 + 8LL))(v58, v55);
  EtwEventActivityIdControl(4LL, &v74);
  return (unsigned int)AcceptableSPDIFTypeForDevice;
}
