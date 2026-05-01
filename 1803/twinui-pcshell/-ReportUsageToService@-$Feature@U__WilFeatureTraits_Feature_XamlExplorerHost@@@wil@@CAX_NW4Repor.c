/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C5E8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18018BB70 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CA-AW4.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@SA_NXZ @ 0x18018BDB0 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@SA_NXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlTaskbar@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1801F8370 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlTaskbar@@@wil@@CA-AW4wi.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802685F4 (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x18026930C (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18027114C (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CA-AW.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1802711B0 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@C.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18018B85C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CA-A.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int64 v4; // [rsp+20h] [rbp-18h]
  __int16 v5; // [rsp+54h] [rbp+1Ch]
  int v6; // [rsp+58h] [rbp+20h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v5) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetCachedFeatureEnabledState(a1);
  v6 = 4;
  LOBYTE(v5) = 3;
  v7 = v5;
  LODWORD(v4) = a2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetFeaturePropertyCache'::`2'::data,
    0x70A74Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    (struct wil_details_RecordUsageResult *)1,
    v4);
}
