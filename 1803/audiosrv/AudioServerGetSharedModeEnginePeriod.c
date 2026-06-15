/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x1800C46C0
 * Callers:
 *     <none>
 * Callees:
 *     AudioServerIsFormatSupported @ 0x180001740 (AudioServerIsFormatSupported.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18004039C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800B9B3C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800C2EB8 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        void *a1,
        __int64 a2,
        __int128 *a3,
        struct tWAVEFORMATEX *Src,
        int a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9)
{
  __int128 v9; // xmm0
  __int64 v14; // rcx
  struct _TP_TIMER **v15; // rax
  __int64 v16; // r8
  int *v17; // rbx
  int IsFormatSupported; // edi
  struct _GUID v19; // xmm6
  int v20; // eax
  int *v21; // r12
  int *v22; // r15
  int v23; // edx
  DWORD nSamplesPerSec; // r8d
  int v25; // edx
  int v26; // eax
  int *v27; // r9
  int v28; // eax
  _DWORD *v29; // r9
  void (*v30)(void); // rax
  struct CEndpointCharacteristics *v32; // [rsp+70h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  int *v34; // [rsp+80h] [rbp-80h]
  void *v35; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID v36; // [rsp+90h] [rbp-70h] BYREF
  int *v37; // [rsp+A0h] [rbp-60h]
  int *v38; // [rsp+A8h] [rbp-58h]
  struct _GUID v39; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v40; // [rsp+C0h] [rbp-40h] BYREF
  struct _TP_TIMER *v41[6]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v42; // [rsp+100h] [rbp+0h]
  __int128 v43; // [rsp+110h] [rbp+10h] BYREF

  v9 = *a3;
  v38 = a7;
  v37 = a8;
  v34 = a9;
  v42 = v9;
  v43 = v9;
  EtwEventActivityIdControl(4LL, &v43);
  v15 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               v14,
                               lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(v41, v15[1], v16, (struct _TP_TIMER *)L"AudioServerGetSharedModeEnginePeriod");
  v32 = 0LL;
  v17 = 0LL;
  v35 = 0LL;
  pv = 0LL;
  IsFormatSupported = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  IsFormatSupported = AudioServerIsFormatSupported(a1, a2, 0, a3, &Src->wFormatTag, (struct tWAVEFORMATEX **)&v35);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  IsFormatSupported = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                        g_pEndpointCharacteristicsCache,
                        a2,
                        0LL,
                        &v32);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  IsFormatSupported = DeriveAudioProcessingModeConfiguration(
                        *((_DWORD *)a3 + 4),
                        *((_DWORD *)a3 + 6),
                        *((_DWORD *)a3 + 26),
                        v32,
                        *((_DWORD *)v32 + 37) == 1,
                        0,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                        0,
                        *((_DWORD *)a3 + 10),
                        0,
                        &v39,
                        &v40,
                        &v36,
                        0LL);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  v19 = v39;
  v20 = DeriveConnectorFormatFromStreamFormat(
          v32,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
          Src,
          &v36,
          &v40,
          &v39,
          *((_DWORD *)a3 + 9),
          (struct tWAVEFORMATEX **)&pv);
  v17 = (int *)pv;
  IsFormatSupported = v20;
  if ( v20 < 0
    || (v21 = v37,
        v22 = v38,
        v23 = *((_DWORD *)a3 + 5),
        v36 = v19,
        IsFormatSupported = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                              (__int64)v32,
                              v23,
                              (unsigned __int16 *)pv,
                              &v36,
                              a5 != 0,
                              a6,
                              v38,
                              v37,
                              v34),
        IsFormatSupported < 0) )
  {
LABEL_9:
    AudSrvTraceLoggingErrorHelper("AudioServerGetSharedModeEnginePeriod", 4380, IsFormatSupported);
  }
  else
  {
    nSamplesPerSec = Src->nSamplesPerSec;
    v25 = v17[1];
    if ( nSamplesPerSec != v25 )
    {
      *a6 = TranslateFrameCountBetweenSamplingRates(*a6, v25, nSamplesPerSec);
      *v22 = TranslateFrameCountBetweenSamplingRates(*v22, v17[1], Src->nSamplesPerSec);
      v26 = TranslateFrameCountBetweenSamplingRates(*v21, v17[1], Src->nSamplesPerSec);
      v27 = v34;
      *v21 = v26;
      v28 = TranslateFrameCountBetweenSamplingRates(*v27, v17[1], Src->nSamplesPerSec);
      *v29 = v28;
    }
  }
  CoTaskMemFree(v17);
  operator delete(v35, (const struct std::nothrow_t *)0x12);
  if ( v32 )
  {
    v30 = *(void (**)(void))(*(_QWORD *)v32 + 16LL);
    if ( (char *)v30 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((__int64)v32);
    else
      v30();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v41);
  EtwEventActivityIdControl(4LL, &v43);
  return (unsigned int)IsFormatSupported;
}
