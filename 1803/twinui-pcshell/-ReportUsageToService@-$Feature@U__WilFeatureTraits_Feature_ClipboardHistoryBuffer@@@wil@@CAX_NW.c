/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ClipboardHistoryBuffer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802412EC
 * Callers:
 *     _lambda_114373a7e1561dd71911e06c6b6df4ef_::operator() @ 0x1800A1480 (_lambda_114373a7e1561dd71911e06c6b6df4ef_--operator().c)
 *     _lambda_5e1669f70f5e626cb13f0ae9b344f394_::operator() @ 0x1800A1804 (_lambda_5e1669f70f5e626cb13f0ae9b344f394_--operator().c)
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18023F710 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ClipboardHistoryBuffer@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18023D428 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ClipboardHistoryBuffer@@@wil.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_ClipboardHistoryBuffer>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // [rsp+20h] [rbp-18h]
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ClipboardHistoryBuffer>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ClipboardHistoryBuffer>::GetCachedFeatureEnabledState(a1, a2, a3);
  LODWORD(v3) = 3;
  LOBYTE(v4) = 0;
  v5 = 0;
  v6 = v4;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ClipboardHistoryBuffer>::GetFeaturePropertyCache'::`2'::data,
    0xC77D18u,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    0LL,
    v3);
}
