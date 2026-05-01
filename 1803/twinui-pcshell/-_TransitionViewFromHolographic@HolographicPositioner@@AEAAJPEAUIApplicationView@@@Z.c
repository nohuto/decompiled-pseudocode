/*
 * XREFs of ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B3868
 * Callers:
 *     ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1801ADEB0 (-ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18012FF60 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4R.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18014C46C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B1AA8 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     _LogEventWithViewHostItemData @ 0x1801B2B30 (_LogEventWithViewHostItemData.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1801B3734 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::_TransitionViewFromHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v16; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  HolographicPositioner::_FindViewHostItem((__int64)this, &v19, (__int64)a2);
  v4 = v19;
  if ( !v19 || !*((_QWORD *)this + 29) )
    goto LABEL_12;
  LogEventWithViewHostItemData(
    v19,
    (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::TransitionViewFromHolographic<unsigned short const *,unsigned int &>);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 29) + 56LL))(*((_QWORD *)this + 29), v4);
  v9 = v5;
  if ( v5 < 0 )
  {
    v10 = 1690LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_16;
  }
  wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsageToService(v7, v6, v8);
  LODWORD(v16) = 3;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v18);
  v11 = v18;
  if ( !v18 )
  {
    v9 = -2147024882;
    v12 = 2147942414LL;
    v13 = 1700LL;
    goto LABEL_9;
  }
  *(_OWORD *)(v18 + 128) = 0LL;
  *(_OWORD *)(v11 + 144) = 0uLL;
  *(_QWORD *)(v11 + 160) = v16;
  *(_BYTE *)(v11 + 124) = 1;
  v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v11);
  v9 = v14;
  if ( v14 >= 0 )
  {
    v18 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v11);
LABEL_12:
    v5 = HolographicPositioner::_SendViewTransitionNotification((__int64)this, a2, 1);
    v9 = v5;
    if ( v5 >= 0 )
    {
      v9 = 0;
      goto LABEL_16;
    }
    v10 = 1706LL;
    goto LABEL_14;
  }
  v12 = (unsigned int)v14;
  v13 = 1702LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)v12);
  if ( v11 )
  {
    v18 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v11);
  }
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v9;
}
