/*
 * XREFs of ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18022A580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180078470 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800F6C78 (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??$As@UIObjectWithSite@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectWithSite@@@WRL@Microsoft@@@Details@12@@Z @ 0x180224ED8 (--$As@UIObjectWithSite@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 *     ??1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ @ 0x180225ED8 (--1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1802271B8 (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@UnsubscribeFromServices@StartWindowTelemetry@@QEAAXXZ @ 0x180228E18 (-StartActivity@UnsubscribeFromServices@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ @ 0x18022A208 (-UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ.c)
 *     ?UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ @ 0x18022A3D4 (-UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x18022B3E0 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::UnsubscribeFromServices(XamlLauncher *this, struct IServiceProvider *a2)
{
  ImmersiveMonitorHelper *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  void *ppvOut[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v12[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  ppvOut[1] = (void *)-2LL;
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"UnsubscribeFromServices");
  v12[0] = &StartWindowTelemetry::UnsubscribeFromServices::`vftable';
  StartWindowTelemetry::UnsubscribeFromServices::StartActivity((StartWindowTelemetry::UnsubscribeFromServices *)v12);
  if ( *((_DWORD *)this + 21) )
  {
    ppvOut[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
    if ( IUnknown_QueryService(
           *((IUnknown **)this - 5),
           (const GUID *const)&SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           ppvOut) >= 0 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut[0] + 32LL))(ppvOut[0], *((unsigned int *)this + 21));
      *((_DWORD *)this + 21) = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  }
  XamlLauncher::UninitializeStartExperienceManager((XamlLauncher *)((char *)this - 56));
  XamlLauncher::UninitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  v3 = (ImmersiveMonitorHelper *)*((_QWORD *)this + 9);
  if ( !v3 )
  {
LABEL_9:
    v7 = *((_QWORD *)this + 24);
    if ( v7 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 546LL;
        goto LABEL_12;
      }
      ppvOut[0] = 0LL;
      v8 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IObjectWithSite>((_QWORD *)this + 24, (__int64 *)ppvOut);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 548LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
        goto LABEL_20;
      }
      v8 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut[0] + 24LL))(ppvOut[0], 0LL);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 549LL;
        goto LABEL_17;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
    }
    wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12);
    v5 = 0;
    goto LABEL_20;
  }
  v4 = ImmersiveMonitorHelper::SetSite(v3, 0LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease((volatile int **)this + 9);
    goto LABEL_9;
  }
  v6 = 540LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v4);
LABEL_20:
  StartWindowTelemetry::UnsubscribeFromServices::~UnsubscribeFromServices((StartWindowTelemetry::UnsubscribeFromServices *)v12);
  return v5;
}
