/*
 * XREFs of ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B7830
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009C834 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800B8010 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1801DB1A4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1801DB1A4.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewCloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int MonitorInformation; // eax
  __int64 v5; // rdx
  int v6; // ebx
  int v8; // [rsp+40h] [rbp-40h] BYREF
  __int16 v9; // [rsp+44h] [rbp-3Ch]
  bool v10; // [rsp+48h] [rbp-38h] BYREF
  int v11; // [rsp+4Ch] [rbp-34h] BYREF
  __int16 v12; // [rsp+50h] [rbp-30h]
  struct tagRECT v13; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v14; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( !*((_BYTE *)this + 544) )
  {
    MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                           (CStartExperienceManager *)((char *)this - 96),
                           a2,
                           &v14,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&v8,
                           &v10,
                           &v13,
                           0LL);
    if ( MonitorInformation < 0 )
    {
      v5 = 536LL;
LABEL_18:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)MonitorInformation);
      return 0LL;
    }
    v6 = 81;
    if ( *((_BYTE *)a2 + 52) )
    {
      v6 = 82;
    }
    else if ( v8 )
    {
      switch ( v8 )
      {
        case 1:
          v6 = 79;
          break;
        case 2:
          v6 = 78;
          break;
        case 3:
          v6 = 80;
          break;
      }
    }
    else
    {
      v6 = 77;
    }
    if ( (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetCachedFeatureEnabledState();
    LOBYTE(v9) = 0;
    v11 = 0;
    v12 = v9;
    v8 = 0;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
      0x7A7F42u,
      (const struct FEATURE_LOGGED_TRAITS *)&v11,
      0,
      3);
    MonitorInformation = CExperienceManagerAnimationHelper::Begin(
                           (char *)this + 480,
                           *((_QWORD *)this + 29),
                           v6 | 0x200000u);
    if ( MonitorInformation < 0 )
    {
      v5 = 568LL;
      goto LABEL_18;
    }
  }
  return 0LL;
}
