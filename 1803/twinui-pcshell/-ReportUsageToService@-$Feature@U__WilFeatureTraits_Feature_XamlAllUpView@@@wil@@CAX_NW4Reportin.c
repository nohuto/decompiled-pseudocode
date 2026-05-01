/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C584
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@SA_NXZ @ 0x18018BD90 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@SA_NXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18020B254 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@wil@.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802685F4 (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x18026930C (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180271E58 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18018B780 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CA-AW4w.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int64 v4; // [rsp+20h] [rbp-18h]
  __int16 v5; // [rsp+54h] [rbp+1Ch]
  int v6; // [rsp+58h] [rbp+20h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v5) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetCachedFeatureEnabledState(a1);
  v6 = 4;
  LOBYTE(v5) = 3;
  v7 = v5;
  LODWORD(v4) = a2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data,
    0x78E913u,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    (struct wil_details_RecordUsageResult *)1,
    v4);
}
