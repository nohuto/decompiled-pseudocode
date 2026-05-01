/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_512366ecfeba81417a610fd392d16e61__&___ptr64_::Run @ 0x1800CDE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009C834 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0C88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1801DB408 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_512366ecfeba81417a610fd392d16e61______ptr64_::Run(
        __int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int16 v6; // [rsp+74h] [rbp+24h]
  int v7; // [rsp+78h] [rbp+28h] BYREF
  __int16 v8; // [rsp+7Ch] [rbp+2Ch]

  v2 = *(_QWORD *)(a1 + 16);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetCachedFeatureEnabledState();
  LOBYTE(v6) = 0;
  v7 = 0;
  v8 = v6;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
    0x7A7F42u,
    (const struct FEATURE_LOGGED_TRAITS *)&v7,
    0,
    3);
  v3 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(*(_QWORD *)(a1 + 16) + 704LL));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1ED,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(*(_QWORD *)(a1 + 16) + 56LL));
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1EF,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    *(_DWORD *)(v2 + 736) = 0;
  }
}
