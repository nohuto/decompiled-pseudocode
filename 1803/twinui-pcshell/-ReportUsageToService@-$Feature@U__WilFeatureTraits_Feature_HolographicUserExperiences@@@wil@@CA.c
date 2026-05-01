/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086118
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800860AC (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOve.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@SA_NXZ @ 0x18018BD10 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@SA_NXZ.c)
 *     ?ShouldHandleFrameworkViewTypeChange@HolographicPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1801B02D0 (-ShouldHandleFrameworkViewTypeChange@HolographicPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWO.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B0F60 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicDesktopHotkeyFunctionalityHiding@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18026FE94 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicDesktopHotkeyFun.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180279AB4 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitask.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18018B24C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int64 v4; // [rsp+20h] [rbp-18h]
  __int16 v5; // [rsp+54h] [rbp+1Ch]
  int v6; // [rsp+58h] [rbp+20h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v5) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetCachedFeatureEnabledState();
  LOBYTE(v5) = 3;
  v6 = 0;
  v7 = v5;
  LODWORD(v4) = a2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data,
    0x88518Bu,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    (struct wil_details_RecordUsageResult *)1,
    v4);
}
