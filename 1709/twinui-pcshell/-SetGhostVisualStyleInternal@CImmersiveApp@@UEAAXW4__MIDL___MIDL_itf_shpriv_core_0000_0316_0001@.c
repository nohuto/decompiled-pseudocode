/*
 * XREFs of ?SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0316_0001@@@Z @ 0x1800582F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001EB1C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppressi.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::SetGhostVisualStyleInternal(__int64 a1, int a2)
{
  __int16 v4; // [rsp+44h] [rbp+Ch]
  int v5; // [rsp+50h] [rbp+18h] BYREF
  __int16 v6; // [rsp+54h] [rbp+1Ch]

  if ( a2 != *(_DWORD *)(a1 + 344) )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState();
    LOBYTE(v4) = 3;
    v5 = 0;
    v6 = v4;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
      0xBF61Bu,
      (const struct FEATURE_LOGGED_TRAITS *)&v5,
      1,
      3);
    if ( *(_DWORD *)(a1 + 348) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 288) + 40LL))(
        *(_QWORD *)(a1 + 288),
        2 - (unsigned int)(a2 != 0));
    *(_DWORD *)(a1 + 344) = a2;
  }
}
