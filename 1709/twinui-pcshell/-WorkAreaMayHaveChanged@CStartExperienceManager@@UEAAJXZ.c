/*
 * XREFs of ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x1800B7F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B8324 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StartFullScreenTransparentWindow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800B9900 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StartFullScreenTransparentWi.c)
 */

__int64 __fastcall CStartExperienceManager::WorkAreaMayHaveChanged(CStartExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int16 v6; // [rsp+4Ch] [rbp+14h]
  int v7; // [rsp+50h] [rbp+18h] BYREF
  __int16 v8; // [rsp+54h] [rbp+1Ch]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetCachedFeatureEnabledState();
  v7 = 6;
  LOBYTE(v6) = 3;
  v8 = v6;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data,
    0x7AE09Bu,
    (const struct FEATURE_LOGGED_TRAITS *)&v7,
    1,
    3);
  v2 = CStartExperienceManager::PositionMenu((char *)this - 40, (char *)this + 264, 4LL);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x311,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
