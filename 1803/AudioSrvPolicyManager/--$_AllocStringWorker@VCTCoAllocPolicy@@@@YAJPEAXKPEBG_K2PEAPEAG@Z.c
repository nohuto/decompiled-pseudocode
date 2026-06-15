/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180017D14
 * Callers:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180009770 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?Initialize@CApplication@@IEAAJPEBG_K@Z @ 0x1800108D4 (-Initialize@CApplication@@IEAAJPEBG_K@Z.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800134F4 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHH_NHH@Z @ 0x180013E44 (-Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHH_NHH@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18001A4E8 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18002075C (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x180021524 (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z @ 0x180028B04 (-CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG_K@Z @ 0x180029228 (-Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG_K@Z.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBG_KKHPEAPEAV1@@Z @ 0x1800294F8 (-CreateInstance@HostedAppStateChangedContext@@SAJPEBG_KKHPEAPEAV1@@Z.c)
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x180029620 (-CreateInstance@ApplicationStateChangedContext@@SAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18002A6A0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?Initialize@CTrackedEndpoint@@QEAAJPEBG@Z @ 0x18002CBC8 (-Initialize@CTrackedEndpoint@@QEAAJPEBG@Z.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002ED64 (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800306B4 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x1800313D8 (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180018BB8 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int16 **a6)
{
  unsigned __int64 v6; // rdi
  unsigned int v9; // ebx
  unsigned __int16 *v10; // rax
  unsigned __int16 **v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v13; // [rsp+28h] [rbp-20h]
  unsigned int v14; // [rsp+30h] [rbp-18h]

  v6 = -1LL;
  *a6 = 0LL;
  if ( a4 + 1 >= a4 )
    v6 = a4 + 1;
  v9 = a4 + 1 < a4 ? 0x80070216 : 0;
  if ( a4 + 1 >= a4 )
  {
    *a6 = 0LL;
    if ( is_mul_ok(v6, 2uLL) )
    {
      v10 = (unsigned __int16 *)CoTaskMemAlloc(2 * v6);
      *a6 = v10;
      if ( v10 )
      {
        v9 = 0;
        StringCchCopyNExW(v10, v6, a3, a4, v12, v13, v14);
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  return v9;
}
