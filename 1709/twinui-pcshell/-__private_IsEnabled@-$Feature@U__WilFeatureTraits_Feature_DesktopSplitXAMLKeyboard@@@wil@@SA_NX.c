/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_DesktopSplitXAMLKeyboard@@@wil@@SA_NXZ @ 0x18019E528
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18019A160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplitXAMLKeyboard@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18019E58C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplitXAMLKeyboard@@@w.c)
 */

bool wil::Feature<__WilFeatureTraits_Feature_DesktopSplitXAMLKeyboard>::__private_IsEnabled()
{
  bool v0; // bl
  __int16 v2; // [rsp+44h] [rbp+Ch]
  int v3; // [rsp+48h] [rbp+10h] BYREF
  __int16 v4; // [rsp+4Ch] [rbp+14h]

  v0 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_DesktopSplitXAMLKeyboard>::GetCachedFeatureEnabledState() == 2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplitXAMLKeyboard>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DesktopSplitXAMLKeyboard>::GetCachedFeatureEnabledState();
  LOBYTE(v2) = 2;
  v4 = v2;
  v3 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplitXAMLKeyboard>::GetFeaturePropertyCache'::`2'::data,
    0xDF8929u,
    (const struct FEATURE_LOGGED_TRAITS *)&v3,
    v0,
    3);
  return v0;
}
