/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x18008F370
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     AudioServerIsFormatSupported @ 0x18001F5A0 (AudioServerIsFormatSupported.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180021E58 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18003162C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x18008CEB8 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        struct tWAVEFORMATEX *a1,
        __int64 a2,
        __int128 *a3,
        struct tWAVEFORMATEX *a4,
        int a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9)
{
  __int128 v9; // xmm0
  __int64 v14; // r8
  void *v15; // r8
  struct tWAVEFORMATEX *v16; // rbx
  int IsFormatSupported; // edi
  struct _GUID v18; // xmm6
  int v19; // eax
  int *v20; // r12
  int *v21; // r15
  int v22; // edx
  DWORD nSamplesPerSec; // r8d
  int v24; // edx
  int v25; // eax
  int *v26; // r9
  int v27; // eax
  _DWORD *v28; // r9
  void (*v29)(void); // rax
  WINBOOL fPending[2]; // [rsp+70h] [rbp-90h] BYREF
  struct CEndpointCharacteristics *v32; // [rsp+78h] [rbp-88h] BYREF
  LPVOID Context; // [rsp+80h] [rbp-80h] BYREF
  int *v34; // [rsp+88h] [rbp-78h]
  struct _GUID v35; // [rsp+90h] [rbp-70h] BYREF
  int *v36; // [rsp+A0h] [rbp-60h]
  int *v37; // [rsp+A8h] [rbp-58h]
  struct _GUID v38; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v39; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE Parameter[6]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v41; // [rsp+100h] [rbp+0h]
  __int128 v42; // [rsp+110h] [rbp+10h] BYREF

  v9 = *a3;
  v37 = a7;
  v36 = a8;
  v34 = a9;
  v41 = v9;
  v42 = v9;
  EtwEventActivityIdControl(4LL, &v42);
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context);
  if ( fPending[0] )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v15);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  CWatchdogTimer::CWatchdogTimer(
    Parameter,
    *((const struct _TlgProvider_t **)Context + 1),
    v14,
    L"AudioServerGetSharedModeEnginePeriod");
  v16 = 0LL;
  v32 = 0LL;
  *(_QWORD *)fPending = 0LL;
  Context = 0LL;
  IsFormatSupported = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( IsFormatSupported < 0 )
    goto LABEL_11;
  IsFormatSupported = AudioServerIsFormatSupported(a1, a2, 0, a3, &a4->wFormatTag, (struct tWAVEFORMATEX **)&Context);
  if ( IsFormatSupported < 0 )
    goto LABEL_11;
  IsFormatSupported = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                        g_pEndpointCharacteristicsCache,
                        a2,
                        0LL,
                        &v32);
  if ( IsFormatSupported < 0 )
    goto LABEL_11;
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
                        &v38,
                        &v39,
                        &v35,
                        0LL);
  if ( IsFormatSupported < 0 )
    goto LABEL_11;
  v18 = v38;
  v19 = DeriveConnectorFormatFromStreamFormat(
          (struct _RTL_CRITICAL_SECTION *)v32,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
          a4,
          &v35,
          &v39,
          &v38,
          *((_DWORD *)a3 + 9),
          (struct tWAVEFORMATEX **)fPending);
  v16 = *(struct tWAVEFORMATEX **)fPending;
  IsFormatSupported = v19;
  if ( v19 < 0
    || (v20 = v36,
        v21 = v37,
        v22 = *((_DWORD *)a3 + 5),
        v35 = v18,
        IsFormatSupported = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                              (__int64)v32,
                              v22,
                              *(const struct tWAVEFORMATEX **)fPending,
                              &v35,
                              a5 != 0,
                              a6,
                              v37,
                              v36,
                              v34),
        IsFormatSupported < 0) )
  {
LABEL_11:
    AudSrvTraceLoggingErrorHelper("AudioServerGetSharedModeEnginePeriod", 4069, IsFormatSupported);
  }
  else
  {
    nSamplesPerSec = a4->nSamplesPerSec;
    v24 = v16->nSamplesPerSec;
    if ( nSamplesPerSec != v24 )
    {
      *a6 = TranslateFrameCountBetweenSamplingRates(*a6, v24, nSamplesPerSec);
      *v21 = TranslateFrameCountBetweenSamplingRates(*v21, v16->nSamplesPerSec, a4->nSamplesPerSec);
      v25 = TranslateFrameCountBetweenSamplingRates(*v20, v16->nSamplesPerSec, a4->nSamplesPerSec);
      v26 = v34;
      *v20 = v25;
      v27 = TranslateFrameCountBetweenSamplingRates(*v26, v16->nSamplesPerSec, a4->nSamplesPerSec);
      *v28 = v27;
    }
  }
  CoTaskMemFree(v16);
  operator delete(Context, (const struct std::nothrow_t *)0x12);
  if ( v32 )
  {
    v29 = *(void (**)(void))(*(_QWORD *)v32 + 16LL);
    if ( (char *)v29 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v32);
    else
      v29();
  }
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  EtwEventActivityIdControl(4LL, &v42);
  return (unsigned int)IsFormatSupported;
}
