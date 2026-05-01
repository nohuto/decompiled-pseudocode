/*
 * XREFs of ?OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BE2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009C834 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1801DB1A4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1801DB1A4.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewCloaking(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // edx
  int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int16 v10; // [rsp+54h] [rbp+Ch]
  int v11; // [rsp+60h] [rbp+18h] BYREF
  __int16 v12; // [rsp+64h] [rbp+1Ch]

  v2 = *((_DWORD *)this + 100);
  v4 = 92;
  if ( v2 )
  {
    v5 = v2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 = 91;
      }
      else
      {
        v4 = 89;
      }
    }
    else
    {
      v4 = 90;
    }
  }
  else
  {
    v4 = 88;
  }
  if ( *((_DWORD *)this + 101) == 3 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetCachedFeatureEnabledState();
    LOBYTE(v10) = 0;
    v11 = 0;
    v12 = v10;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
      0x7A7F42u,
      (const struct FEATURE_LOGGED_TRAITS *)&v11,
      0,
      3);
    v7 = CExperienceManagerAnimationHelper::Begin((char *)this + 368, *((_QWORD *)this + 11), v4 | 0x200000u);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x248,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
  return 0LL;
}
