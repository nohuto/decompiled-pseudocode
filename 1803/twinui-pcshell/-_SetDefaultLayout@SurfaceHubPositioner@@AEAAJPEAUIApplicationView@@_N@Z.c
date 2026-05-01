/*
 * XREFs of ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802BDA74
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180021750 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ControlGained@SurfaceHubPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1802BC520 (-ControlGained@SurfaceHubPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1802BC5F0 (-ControlGainedForActivation@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1802BCAA0 (-InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1802BCC00 (-ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802BD66C (-_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180132C18 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18014C46C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014E830 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802BCFD4 (-_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigur.c)
 *     ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1802BD160 (-_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@.c)
 *     ?_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1802BDD34 (-_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_SetDefaultLayout(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2,
        char a3)
{
  int MonitorForLaunch; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  struct IImmersiveMonitor *v9; // rbx
  const char *v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  void *v13; // rdi
  SurfaceHubPositioner *v14; // rcx
  int v15; // eax
  struct IApplicationViewTitlebarConfiguration *v17; // [rsp+28h] [rbp-29h] BYREF
  void *v18; // [rsp+30h] [rbp-21h] BYREF
  struct IImmersiveMonitor *v19; // [rsp+38h] [rbp-19h] BYREF
  __int64 v20; // [rsp+40h] [rbp-11h] BYREF
  _BYTE v21[16]; // [rsp+48h] [rbp-9h] BYREF
  __int128 v22; // [rsp+58h] [rbp+7h]
  __int64 v23; // [rsp+68h] [rbp+17h]
  __int64 v24; // [rsp+70h] [rbp+1Fh]
  __int128 v25; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v24 = -2LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v19);
  MonitorForLaunch = SurfaceHubPositioner::_GetMonitorForLaunch(this, a2, &v19);
  v7 = MonitorForLaunch;
  if ( MonitorForLaunch < 0 )
  {
    v8 = 623LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)MonitorForLaunch);
    goto LABEL_21;
  }
  v9 = v19;
  MonitorForLaunch = SurfaceHubPositioner::_SetPositionerMonitor(a2, v19);
  v7 = MonitorForLaunch;
  if ( MonitorForLaunch < 0 )
  {
    v8 = 626LL;
    goto LABEL_5;
  }
  v25 = 0uLL;
  if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)v9 + 88LL))(v9, &v25) >= 0 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v20);
    v11 = v20;
    if ( !v20 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        636LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        v10);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v18);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v18,
            &v25);
    if ( v11 && v12 >= 0 )
    {
      v13 = v18;
      if ( *(void **)(v11 + 72) != v18 )
      {
        v17 = (struct IApplicationViewTitlebarConfiguration *)v18;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v17);
        v17 = *(struct IApplicationViewTitlebarConfiguration **)(v11 + 72);
        *(_QWORD *)(v11 + 72) = v13;
        Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v17);
      }
      *(_DWORD *)(v11 + 116) = 255;
      *(_DWORD *)(v11 + 120) = 32;
      *(_DWORD *)(v11 + 168) = 1;
      if ( a3 )
        *(_WORD *)(v11 + 112) = 257;
      *(_DWORD *)(v11 + 184) = 0;
      *(_QWORD *)(v11 + 204) = 0LL;
      *(_QWORD *)(v11 + 212) = 0LL;
      *(_QWORD *)(v11 + 188) = 0LL;
      *(_QWORD *)(v11 + 196) = 0LL;
      *(_BYTE *)(v11 + 220) = 1;
      *(_QWORD *)(v11 + 224) = 0LL;
      memset_0(v21, 0, 0x28uLL);
      v22 = 0uLL;
      LODWORD(v23) = 3;
      *(_OWORD *)(v11 + 128) = 0LL;
      *(_OWORD *)(v11 + 144) = v22;
      *(_QWORD *)(v11 + 160) = v23;
      *(_BYTE *)(v11 + 124) = 1;
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      SurfaceHubPositioner::_CreateTitlebarConfiguration(v14, &v17);
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v11 + 176), (__int64)v17);
      v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v11);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          670LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    }
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v18);
    if ( v11 )
    {
      v20 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v11);
    }
  }
  v7 = 0;
LABEL_21:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v19);
  return v7;
}
