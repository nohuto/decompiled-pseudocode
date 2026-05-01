/*
 * XREFs of ?OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B19A0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009C834 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@.c)
 *     ?GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x1800B2078 (-GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1801DB1A4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1801DB1A4.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewCloaking(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // edx
  int v4; // ebx
  int v5; // edx
  int v6; // edx
  int MonitorWorkArea; // eax
  __int64 v8; // rdx
  __int16 v10; // [rsp+44h] [rbp-2Ch]
  int v11; // [rsp+48h] [rbp-28h] BYREF
  __int16 v12; // [rsp+4Ch] [rbp-24h]
  struct tagRECT v13; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = *((_DWORD *)this + 63);
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
  MonitorWorkArea = CPeopleBarJumpViewExperienceManager::GetMonitorWorkArea(
                      (CPeopleBarJumpViewExperienceManager *)((char *)this - 48),
                      &v13);
  if ( MonitorWorkArea < 0 )
  {
    v8 = 244LL;
LABEL_15:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorWorkArea);
    return 0LL;
  }
  MonitorWorkArea = CExperienceManagerAnimationHelper::Begin((char *)this + 344, *((_QWORD *)this + 4), v4 | 0x200000u);
  if ( MonitorWorkArea < 0 )
  {
    v8 = 247LL;
    goto LABEL_15;
  }
  return 0LL;
}
