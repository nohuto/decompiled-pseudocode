/*
 * XREFs of ?InitAppViewData@ImmersiveApplicationLayout@@YAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18017F518
 * Callers:
 *     ??0CImmersiveApp@@QEAA@XZ @ 0x1800509B0 (--0CImmersiveApp@@QEAA@XZ.c)
 *     ?GetViewDataInternal@CImmersiveApp@@UEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x180053880 (-GetViewDataInternal@CImmersiveApp@@UEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z.c)
 *     ??0CFrameApplicationPresentation@@QEAA@XZ @ 0x180065D78 (--0CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB6D4 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB8B4 (-_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18017F3AC (-ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CompactOverlayMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800178B4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CompactOverlayMode@@@wil@@CA.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

void __fastcall ImmersiveApplicationLayout::InitAppViewData(
        ImmersiveApplicationLayout *this,
        struct APPLICATION_VIEW_DATA *a2)
{
  __int16 v3; // [rsp+34h] [rbp-14h]
  int v4; // [rsp+50h] [rbp+8h] BYREF
  __int16 v5; // [rsp+54h] [rbp+Ch]

  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetCachedFeatureEnabledState();
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CompactOverlayMode>::GetFeaturePropertyCache'::`2'::data,
    0x50A13Fu,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
  *((_DWORD *)this + 8) |= 2u;
}
