/*
 * XREFs of ?_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B3C58
 * Callers:
 *     ?EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1801AE1C0 (-EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1801AE2D0 (-ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B3A10 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18012FF60 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4R.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18014C46C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1801B15B4 (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B1AA8 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_UpdateViewStateDataForView(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rbx
  HolographicPositioner *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v16[16]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v20; // [rsp+90h] [rbp+30h] BYREF
  struct IApplicationViewTitlebarConfiguration *v21; // [rsp+98h] [rbp+38h] BYREF

  v15[1] = -2LL;
  HolographicPositioner::_FindViewHostItem((__int64)this, v15, (__int64)a2);
  v3 = v15[0];
  if ( !v15[0] )
    goto LABEL_13;
  memset_0(v16, 0, 0x28uLL);
  v17 = 0uLL;
  LODWORD(v18) = 3;
  v20 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 112LL))(v3, &v20);
  v8 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BC,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_14;
  }
  LODWORD(v17) = v20 != 1;
  wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsageToService(v6, v5, v7);
  DWORD2(v17) = 1;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v14);
  v9 = v14;
  if ( !v14 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_10;
  }
  *(_OWORD *)(v14 + 128) = 0LL;
  *(_OWORD *)(v9 + 144) = v17;
  *(_QWORD *)(v9 + 160) = v18;
  *(_BYTE *)(v9 + 124) = 1;
  *(_DWORD *)(v9 + 116) = 255;
  *(_DWORD *)(v9 + 120) = 0;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v11 = HolographicPositioner::_CreateTitleBarConfiguration(v10, &v21);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1742LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v11);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v9 + 176), (__int64)v21);
  v12 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v9);
  v8 = v12;
  if ( v12 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v9);
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D2,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
LABEL_10:
  if ( v9 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v9);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  return v8;
}
