/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c3a81127ec11b603f32deec9cb27abe__&___ptr64_::Run @ 0x1800B9AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800965B8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801815C8 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18018C2BC (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c3a81127ec11b603f32deec9cb27abe______ptr64_::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // [rsp+3Ch] [rbp-24h]
  __int64 v5; // [rsp+48h] [rbp-18h] BYREF
  char v6; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v8; // [rsp+70h] [rbp+10h] BYREF

  v8 = *(_QWORD *)(a1 + 16);
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v5, &v8);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 0;
  LODWORD(v8) = 0;
  WORD2(v8) = v4;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
    0x7A7F42u,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    0,
    3);
  v2 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(*(_QWORD *)(a1 + 16) + 704LL));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1EC,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(*(_QWORD *)(a1 + 16) + 56LL));
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1EE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    if ( v6 )
      *(_DWORD *)(v5 + 736) = 0;
  }
}
