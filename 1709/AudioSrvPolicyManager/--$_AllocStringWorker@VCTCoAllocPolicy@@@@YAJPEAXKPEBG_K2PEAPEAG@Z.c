/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180011518
 * Callers:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180005810 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x18000BA7C (-Initialize@CApplication@@IEAAJPEBG@Z.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHHHHH@Z @ 0x18000E7A4 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHHHHH@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x180012248 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x18001729C (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z @ 0x180018054 (-OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z.c)
 *     ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z @ 0x18001F574 (-CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x18001FB50 (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x18001FED4 (-CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z.c)
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x18001FFF0 (-CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180020C40 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?Initialize@CTrackedEndpoint@@QEAAJPEBG@Z @ 0x180023A64 (-Initialize@CTrackedEndpoint@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800116F8 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
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
