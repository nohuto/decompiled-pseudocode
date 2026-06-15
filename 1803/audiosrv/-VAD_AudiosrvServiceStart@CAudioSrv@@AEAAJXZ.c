/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005C0D8
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18005C7B0 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18004A7BC (--0CPolicyConfig@@QEAA@XZ.c)
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x180059AB8 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x18005BD38 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x18005CBE4 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x18005DF10 (-InitializeDeviceGraphManager@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x18005E4D4 (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x18005EA54 (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIV.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x18005F454 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@$$V@Details.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x18005FAE4 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009B080 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009EC90 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  CPolicyConfig *v2; // rax
  LSTATUS ValueW; // eax
  unsigned int v4; // ecx
  CAudioHealthMonitor *v5; // rax
  int AudioSessionManagerProvider; // ebx
  unsigned int v7; // r8d
  const char *v8; // r9
  LSTATUS v9; // eax
  unsigned int v10; // r8d
  LSTATUS v11; // eax
  __int64 v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // r8d
  const char *v18; // r9
  RPC_STATUS v19; // ebx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int cData; // [rsp+28h] [rbp-39h]
  unsigned int pvData; // [rsp+48h] [rbp-19h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-15h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+7h] BYREF
  int *v29; // [rsp+88h] [rbp+27h]
  int v30; // [rsp+90h] [rbp+2Fh]
  int v31; // [rsp+94h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v27[1] = -2LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_50e5db73954a39d05dfaedbce4ea5db2_Traceguids);
  }
  v2 = (CPolicyConfig *)operator new(0x490uLL, (const struct std::nothrow_t *)&std::nothrow);
  v27[0] = v2;
  if ( v2 )
    v2 = CPolicyConfig::CPolicyConfig(v2);
  g_PolicyConfig = v2;
  if ( !v2 )
  {
    v21 = 2168LL;
LABEL_40:
    AudioSessionManagerProvider = -2147024882;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)AudioSessionManagerProvider,
      cData);
    return (unsigned int)AudioSessionManagerProvider;
  }
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
  v4 = pvData;
  if ( ValueW )
    v4 = 5;
  pvData = v4;
  if ( v4 )
  {
    v5 = (CAudioHealthMonitor *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v27[0] = v5;
    if ( v5 )
      v5 = CAudioHealthMonitor::CAudioHealthMonitor(v5, pvData);
    g_AudioHealthMonitor = v5;
    if ( !v5 )
    {
      v21 = 2178LL;
      goto LABEL_40;
    }
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>();
  if ( AudioSessionManagerProvider < 0 )
  {
    v21 = 2183LL;
    goto LABEL_42;
  }
  if ( !g_pVolumeProvider )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x888, v7, v8);
    __debugbreak();
  }
  AudioSessionManagerProvider = (*(__int64 (__fastcall **)(CVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 24LL))(g_pVolumeProvider);
  if ( AudioSessionManagerProvider < 0 )
  {
    v21 = 2185LL;
    goto LABEL_42;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,>();
  if ( AudioSessionManagerProvider < 0 )
  {
    v21 = 2187LL;
    goto LABEL_42;
  }
  pcbData = 4;
  v9 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"AudioSrvWatchDogTimerInMs",
         0x18u,
         0LL,
         &pvData,
         &pcbData);
  v10 = g_AudioSrvWatchDogTimerInMs;
  if ( !v9 )
    v10 = pvData;
  g_AudioSrvWatchDogTimerInMs = v10;
  pcbData = 4;
  v11 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"EnableInProcOffload",
          0x18u,
          0LL,
          &pvData,
          &pcbData);
  v12 = (unsigned int)g_AudioSrvEnableInProcOffloadIfPossible;
  if ( !v11 )
    v12 = pvData;
  g_AudioSrvEnableInProcOffloadIfPossible = v12;
  v13 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                     v12,
                                                     lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                       + 1);
  if ( *(_DWORD *)v13 > 4u )
  {
    v29 = &g_AudioSrvEnableInProcOffloadIfPossible;
    v30 = 4;
    v31 = 0;
    TlgWrite(v13, &unk_180144DEE, v14, v15, 3u, &pData);
  }
  AudioSessionManagerProvider = InitializeDeviceGraphManager();
  if ( AudioSessionManagerProvider < 0 )
  {
    v21 = 2207LL;
    goto LABEL_42;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager,>();
  if ( AudioSessionManagerProvider < 0 )
  {
    v21 = 2209LL;
    goto LABEL_42;
  }
  AudioSessionManagerProvider = CreateAudioSessionManagerProvider();
  if ( AudioSessionManagerProvider < 0 )
  {
    v21 = 2211LL;
    goto LABEL_42;
  }
  v27[0] = g_PolicyManager;
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
                                  v16,
                                  v27);
  if ( AudioSessionManagerProvider < 0 )
  {
    v21 = 2213LL;
    goto LABEL_42;
  }
  SecurityDescriptor = 0LL;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893"
          "335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    if ( !SecurityDescriptor )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x8A9, v17, v18);
      __debugbreak();
    }
    if ( ServerEndpointIsStarted(L"AudioClientRpc") )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_50e5db73954a39d05dfaedbce4ea5db2_Traceguids);
      }
    }
    else
    {
      v19 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor);
      if ( v19 )
      {
        v22 = 2232LL;
        goto LABEL_58;
      }
    }
    cData = 1234;
    v19 = RpcServerRegisterIf3(&unk_180120950, 0LL, 0LL, 33LL);
    if ( !v19 )
    {
      *((_DWORD *)this + 25) = 1;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_50e5db73954a39d05dfaedbce4ea5db2_Traceguids);
      }
      AudioSessionManagerProvider = 0;
      goto LABEL_34;
    }
    v22 = 2239LL;
LABEL_58:
    AudioSessionManagerProvider = v19 | 0x80010000;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)AudioSessionManagerProvider,
      cData);
LABEL_34:
    LocalFree(SecurityDescriptor);
    return (unsigned int)AudioSessionManagerProvider;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x8A8,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
           v18);
}
