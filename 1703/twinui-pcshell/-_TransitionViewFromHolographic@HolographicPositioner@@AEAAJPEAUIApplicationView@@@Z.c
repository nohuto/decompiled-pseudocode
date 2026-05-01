/*
 * XREFs of ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB6D4
 * Callers:
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DAC2C (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005AF04 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@.c)
 *     _LogEventWithViewHostItemData @ 0x1800D73B4 (_LogEventWithViewHostItemData.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1800DBB20 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1800DBFD8 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 *     ??$Make@VApplicationViewOperation@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800DEF40 (--$Make@VApplicationViewOperation@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOperati.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIApplicationViewOperation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E26A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIApplicationViewOperation@@U-$InterfaceLi_ea_1800E26A0.c)
 *     ?InitAppViewData@ImmersiveApplicationLayout@@YAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18017F518 (-InitAppViewData@ImmersiveApplicationLayout@@YAXPEAUAPPLICATION_VIEW_DATA@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::_TransitionViewFromHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rdx
  struct APPLICATION_VIEW_DATA *v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  __int16 v12; // [rsp+3Ch] [rbp-34h]
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  __int128 v14; // [rsp+58h] [rbp-18h]
  __int64 v15; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v17; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+48h] BYREF

  HolographicPositioner::_FindViewHostItem(this, &v18, a2);
  v4 = v18;
  if ( v18 && *((_QWORD *)this + 25) )
  {
    LogEventWithViewHostItemData(
      v18,
      (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::TransitionViewFromHolographic<unsigned short const *,unsigned int &>);
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 25) + 56LL))(*((_QWORD *)this + 25), v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 1406LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_18;
    }
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetCachedFeatureEnabledState();
    LOBYTE(v12) = 3;
    LODWORD(v17) = 0;
    WORD2(v17) = v12;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
      0x8DFABCu,
      (const struct FEATURE_LOGGED_TRAITS *)&v17,
      1,
      3);
    ImmersiveApplicationLayout::InitAppViewData((ImmersiveApplicationLayout *)&v13, v8);
    DWORD2(v14) = 0;
    Microsoft::WRL::Details::Make<ApplicationViewOperation>(&v17);
    v9 = v17;
    if ( !v17 )
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x588,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_11;
    }
    *(_OWORD *)(v17 + 96) = v13;
    *(_OWORD *)(v9 + 112) = v14;
    *(_QWORD *)(v9 + 128) = v15;
    *(_BYTE *)(v9 + 92) = 1;
    v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 296LL))(a2, v9);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x58A,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v10);
LABEL_11:
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewOperation,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
      goto LABEL_18;
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewOperation,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
  }
  v5 = HolographicPositioner::_SendViewTransitionNotification(this, a2, 1LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1422LL;
    goto LABEL_16;
  }
  v6 = 0;
LABEL_18:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
