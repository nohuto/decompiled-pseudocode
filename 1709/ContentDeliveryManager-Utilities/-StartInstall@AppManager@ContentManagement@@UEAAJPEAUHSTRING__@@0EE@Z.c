/*
 * XREFs of ?StartInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE@Z @ 0x18000CC20
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800078C4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016000 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::StartInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        char a5)
{
  __int64 v9; // r9
  __int16 v12; // [rsp+44h] [rbp-34h]
  int v13; // [rsp+48h] [rbp-30h] BYREF
  __int16 v14; // [rsp+4Ch] [rbp-2Ch]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState();
  LOBYTE(v12) = 3;
  v13 = 0;
  v14 = v12;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v13,
    3);
  LOBYTE(v9) = a4;
  return (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING, HSTRING, __int64, char, _QWORD, _QWORD))(*(_QWORD *)this + 128LL))(
           this,
           a2,
           a3,
           v9,
           a5,
           0LL,
           0LL);
}
