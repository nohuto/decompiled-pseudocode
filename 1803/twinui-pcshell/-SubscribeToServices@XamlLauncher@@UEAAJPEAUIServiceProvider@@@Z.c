/*
 * XREFs of ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180229EA0
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
 *     ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVImmersiveMonitorHelper@@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x180225250 (--$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState.c)
 *     ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x180225EB0 (--1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1802271B8 (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ @ 0x180228CE0 (-StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x18022B3E0 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::SubscribeToServices(XamlLauncher *this, struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h] BYREF
  struct IXamlLauncherState *v12; // [rsp+48h] [rbp-C0h] BYREF
  struct IServiceProvider *v13[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v14[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v13[1] = (struct IServiceProvider *)-2LL;
  v13[0] = a2;
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"SubscribeToServices");
  v14[0] = &StartWindowTelemetry::SubscribeToServices::`vftable';
  StartWindowTelemetry::SubscribeToServices::StartActivity((StartWindowTelemetry::SubscribeToServices *)v14);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64, char *))(*(_QWORD *)v10 + 24LL))(
           v10,
           &unk_1803AD850,
           1LL,
           ((unsigned __int64)this - 16) & -(__int64)(this != (XamlLauncher *)56),
           (char *)this + 84);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 366LL;
      goto LABEL_9;
    }
    v12 = (struct IXamlLauncherState *)*((_QWORD *)this + 24);
    Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease((volatile int **)this + 9);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<ImmersiveMonitorHelper,ImmersiveMonitorHelper,IServiceProvider * &,IXamlLauncherState *>(
           (ImmersiveMonitorHelper **)this + 9,
           v13,
           &v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 368LL;
      goto LABEL_9;
    }
    v4 = ImmersiveMonitorHelper::SetSite(*((ImmersiveMonitorHelper **)this + 9), (struct IUnknown *)this - 7);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 369LL;
      goto LABEL_9;
    }
    v11 = 0LL;
    v7 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IObjectWithSite>((_QWORD *)this + 24, &v11);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v11 + 24LL))(v11, a2);
      v5 = v7;
      if ( v7 >= 0 )
      {
        wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14);
        v5 = 0;
        goto LABEL_16;
      }
      v8 = 372LL;
    }
    else
    {
      v8 = 371LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v7);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    goto LABEL_17;
  }
  v6 = 363LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v4);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  StartWindowTelemetry::SubscribeToServices::~SubscribeToServices((StartWindowTelemetry::SubscribeToServices *)v14);
  return v5;
}
