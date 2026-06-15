/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003543C
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180035B70 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x180033C7C (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@@Details@WR.c)
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x1800341A8 (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x1800342C0 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x1800343C8 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x180035FB8 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18003772C (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800379F0 (-InitializeDeviceGraphManager@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x180038048 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x18003829C (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIVolu.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x18008230C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  CPolicyConfig *v2; // rax
  LSTATUS ValueW; // eax
  unsigned int v4; // ecx
  CAudioHealthMonitor *v5; // rax
  signed int v6; // ebx
  unsigned int AudioSessionManagerProvider; // eax
  LSTATUS v8; // eax
  unsigned int v9; // ecx
  LSTATUS v10; // eax
  __int64 v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // eax
  bool v17; // cc
  unsigned int v18; // eax
  CVolumeStrip *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r9
  signed int LastError; // eax
  unsigned int pvData; // [rsp+48h] [rbp-19h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-15h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-11h] BYREF
  __int64 v27[2]; // [rsp+58h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+7h] BYREF
  int *v29; // [rsp+88h] [rbp+27h]
  int v30; // [rsp+90h] [rbp+2Fh]
  int v31; // [rsp+94h] [rbp+33h]

  v27[1] = -2LL;
  SecurityDescriptor = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids);
  }
  v2 = (CPolicyConfig *)operator new(0x250uLL, (const struct std::nothrow_t *)&std::nothrow);
  v27[0] = (__int64)v2;
  if ( v2 )
    v2 = CPolicyConfig::CPolicyConfig(v2);
  g_PolicyConfig = v2;
  if ( !v2 )
  {
    v6 = -2147024882;
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_96;
    }
    v21 = 46LL;
LABEL_50:
    v22 = 2147942414LL;
LABEL_52:
    WPP_SF_d(*((_QWORD *)v20 + 2), v21, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids, v22);
LABEL_96:
    CAudioSrv::VAD_AudiosrvServiceStop(this);
    goto LABEL_41;
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
    v27[0] = (__int64)v5;
    if ( v5 )
      v5 = CAudioHealthMonitor::CAudioHealthMonitor(v5, pvData);
    g_AudioHealthMonitor = v5;
    if ( !v5 )
    {
      v6 = -2147024882;
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
        || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        goto LABEL_96;
      }
      v21 = 47LL;
      goto LABEL_50;
    }
  }
  if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider>() < 0 || !g_pVolumeProvider )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids);
    }
    v6 = -2147024882;
    goto LABEL_96;
  }
  v6 = (*(__int64 (__fastcall **)(CVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 24LL))(g_pVolumeProvider);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids);
    }
    goto LABEL_96;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache>();
  v6 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_96;
    }
    v21 = 50LL;
LABEL_51:
    v22 = AudioSessionManagerProvider;
    goto LABEL_52;
  }
  pcbData = 4;
  v8 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"AudioSrvWatchDogTimerInMs",
         0x18u,
         0LL,
         &pvData,
         &pcbData);
  v9 = g_AudioSrvWatchDogTimerInMs;
  if ( !v8 )
    v9 = pvData;
  g_AudioSrvWatchDogTimerInMs = v9;
  pcbData = 4;
  v10 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"EnableInProcOffload",
          0x18u,
          0LL,
          &pvData,
          &pcbData);
  v11 = (unsigned int)g_AudioSrvEnableInProcOffloadIfPossible;
  if ( !v10 )
    v11 = pvData;
  g_AudioSrvEnableInProcOffloadIfPossible = v11;
  v12 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                     v11,
                                                     lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                       + 1);
  if ( *(_DWORD *)v12 > 4u )
  {
    v29 = &g_AudioSrvEnableInProcOffloadIfPossible;
    v30 = 4;
    v31 = 0;
    TlgWrite(v12, &unk_1800F8C38, v13, v14, 3u, &pData);
  }
  AudioSessionManagerProvider = InitializeDeviceGraphManager();
  v6 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_96;
    }
    v21 = 51LL;
    goto LABEL_51;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager>();
  v6 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_96;
    }
    v21 = 52LL;
    goto LABEL_51;
  }
  AudioSessionManagerProvider = CreateAudioSessionManagerProvider();
  v6 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_96;
    }
    v21 = 53LL;
    goto LABEL_51;
  }
  v27[0] = (__int64)g_PolicyManager;
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
                                  v15,
                                  v27);
  v6 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_96;
    }
    v21 = 54LL;
    goto LABEL_51;
  }
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-405489"
           "3335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_96;
  }
  if ( !ServerEndpointIsStarted(L"AudioClientRpc") )
  {
    v16 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", v6 + 10, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor);
    v6 = v16;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids, v16);
    }
LABEL_34:
    v17 = v6 <= 0;
    if ( v6 )
      goto LABEL_87;
    goto LABEL_35;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids);
    goto LABEL_34;
  }
LABEL_35:
  v18 = RpcServerRegisterIf3(&unk_1800DDB10, 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, SecurityDescriptor);
  v6 = v18;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 57LL, &WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids, v18);
  }
  v17 = v6 <= 0;
  if ( !v6 )
  {
    *((_DWORD *)this + 25) = 1;
    goto LABEL_41;
  }
LABEL_87:
  if ( !v17 )
    v6 = (unsigned __int16)v6 | 0x80070000;
  if ( v6 < 0 )
    goto LABEL_96;
LABEL_41:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::VAD_AudiosrvServiceStart", 0x8F8u, v6);
  return (unsigned int)v6;
}
