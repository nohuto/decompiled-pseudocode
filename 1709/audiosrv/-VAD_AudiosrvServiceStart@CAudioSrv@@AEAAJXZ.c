/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063FBC
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180061F40 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18005E7E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x180060184 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x180060C4C (--0CPolicyConfig@@QEAA@XZ.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x180063644 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180064844 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x18006E344 (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIV.c)
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18007B694 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800941B8 (-InitializeDeviceGraphManager@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x180098020 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x1800AF5F4 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@$$V@Details.c)
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x1800BECE4 (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  void *v2; // rax
  CPolicyConfig *v3; // rax
  __int64 v4; // rdx
  signed int AudioSessionManagerProvider; // ebx
  LSTATUS ValueW; // eax
  unsigned int v7; // ecx
  void *v8; // rax
  CAudioHealthMonitor *v9; // rax
  unsigned int v10; // r8d
  const char *v11; // r9
  __int64 v12; // rdx
  LSTATUS v13; // eax
  unsigned int v14; // r8d
  LSTATUS v15; // eax
  unsigned int v16; // ecx
  const GUID *v17; // r8
  const GUID *v18; // r9
  void *v19; // r8
  const struct _TlgProvider_t *v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // r8d
  const char *v23; // r9
  RPC_STATUS v25; // ebx
  __int64 v26; // rdx
  unsigned int pvData; // [rsp+48h] [rbp-19h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-15h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-11h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-9h] BYREF
  WINBOOL fPending; // [rsp+60h] [rbp-1h] BYREF
  __int64 v32; // [rsp+68h] [rbp+7h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+Fh] BYREF
  int *v34; // [rsp+90h] [rbp+2Fh]
  __int64 v35; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v32 = -2LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids);
  }
  v2 = operator new(0x490uLL, (const struct std::nothrow_t *)&std::nothrow);
  Context = v2;
  if ( v2 )
    v3 = CPolicyConfig::CPolicyConfig((CPolicyConfig *)v2);
  else
    v3 = 0LL;
  g_PolicyConfig = v3;
  if ( v3 )
  {
    pvData = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
               L"AudioHealthMonitorLimit",
               0x18u,
               0LL,
               &pvData,
               &pcbData);
    v7 = pvData;
    if ( ValueW )
      v7 = 5;
    pvData = v7;
    if ( v7 )
    {
      v8 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      Context = v8;
      v9 = v8 ? CAudioHealthMonitor::CAudioHealthMonitor((CAudioHealthMonitor *)v8, pvData) : 0LL;
      g_AudioHealthMonitor = v9;
      if ( !v9 )
      {
        v4 = 2163LL;
        goto LABEL_10;
      }
    }
    AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>();
    if ( AudioSessionManagerProvider < 0 )
    {
      v12 = 2168LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
        (const char *)(unsigned int)AudioSessionManagerProvider);
      return (unsigned int)AudioSessionManagerProvider;
    }
    if ( !g_pVolumeProvider )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x879, v10, v11);
      __debugbreak();
    }
    AudioSessionManagerProvider = (*(__int64 (__fastcall **)(CVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 24LL))(g_pVolumeProvider);
    if ( AudioSessionManagerProvider < 0 )
    {
      v12 = 2170LL;
      goto LABEL_21;
    }
    AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,>();
    if ( AudioSessionManagerProvider < 0 )
    {
      v12 = 2172LL;
      goto LABEL_21;
    }
    pcbData = 4;
    v13 = RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"AudioSrvWatchDogTimerInMs",
            0x18u,
            0LL,
            &pvData,
            &pcbData);
    v14 = g_AudioSrvWatchDogTimerInMs;
    if ( !v13 )
      v14 = pvData;
    g_AudioSrvWatchDogTimerInMs = v14;
    pcbData = 4;
    v15 = RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"EnableInProcOffload",
            0x18u,
            0LL,
            &pvData,
            &pcbData);
    v16 = g_AudioSrvEnableInProcOffloadIfPossible;
    if ( !v15 )
      v16 = pvData;
    g_AudioSrvEnableInProcOffloadIfPossible = v16;
    InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( fPending )
    {
      Context = qword_18014C2B8;
      qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v19);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
    }
    v20 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v20 > 4u )
    {
      v34 = &g_AudioSrvEnableInProcOffloadIfPossible;
      v35 = 4LL;
      TlgWrite(v20, &unk_18010EB44, v17, v18, 3u, &pData);
    }
    AudioSessionManagerProvider = InitializeDeviceGraphManager();
    if ( AudioSessionManagerProvider < 0 )
    {
      v12 = 2192LL;
      goto LABEL_21;
    }
    AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager,>();
    if ( AudioSessionManagerProvider < 0 )
    {
      v12 = 2194LL;
      goto LABEL_21;
    }
    AudioSessionManagerProvider = CreateAudioSessionManagerProvider();
    if ( AudioSessionManagerProvider < 0 )
    {
      v12 = 2196LL;
      goto LABEL_21;
    }
    Context = g_PolicyManager;
    AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
                                    v21,
                                    &Context);
    if ( AudioSessionManagerProvider < 0 )
    {
      v12 = 2198LL;
      goto LABEL_21;
    }
    SecurityDescriptor = 0LL;
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054"
             "893335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
            1u,
            &SecurityDescriptor,
            0LL) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x899,
               (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
               v23);
    if ( !SecurityDescriptor )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x89A, v22, v23);
      __debugbreak();
    }
    if ( ServerEndpointIsStarted(L"AudioClientRpc") )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids);
      }
    }
    else
    {
      v25 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor);
      if ( v25 )
      {
        v26 = 2217LL;
        goto LABEL_57;
      }
    }
    v25 = RpcServerRegisterIf3(&unk_1800FB0D0, 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, SecurityDescriptor);
    if ( !v25 )
    {
      *((_DWORD *)this + 25) = 1;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids);
      }
      AudioSessionManagerProvider = 0;
      goto LABEL_63;
    }
    v26 = 2224LL;
LABEL_57:
    AudioSessionManagerProvider = v25 | 0x80010000;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v26,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)AudioSessionManagerProvider);
LABEL_63:
    LocalFree(SecurityDescriptor);
    return (unsigned int)AudioSessionManagerProvider;
  }
  v4 = 2153LL;
LABEL_10:
  AudioSessionManagerProvider = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
    (const char *)0x8007000ELL);
  return (unsigned int)AudioSessionManagerProvider;
}
