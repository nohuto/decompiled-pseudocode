/*
 * XREFs of ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1800B68A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009C834 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800B8010 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1801D299C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Hide(CStartExperienceManager *this, int a2)
{
  struct CSingleViewShellExperience *v4; // rdx
  int MonitorInformation; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // eax
  int v11; // [rsp+40h] [rbp-40h] BYREF
  __int16 v12; // [rsp+44h] [rbp-3Ch]
  bool v13[8]; // [rsp+48h] [rbp-38h] BYREF
  struct tagRECT v14; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp-10h] BYREF
  __int16 v17; // [rsp+74h] [rbp-Ch]
  __int16 v18; // [rsp+76h] [rbp-Ah]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( a2 && !*((_BYTE *)this + 600) )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetCachedFeatureEnabledState();
    LOBYTE(v12) = 0;
    v16 = 0;
    v17 = v12;
    v11 = 0;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
      0x7A7F42u,
      (const struct FEATURE_LOGGED_TRAITS *)&v16,
      0,
      3);
    MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                           (CStartExperienceManager *)((char *)this - 40),
                           v4,
                           &v15,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&v11,
                           v13,
                           &v14,
                           0LL);
    if ( MonitorInformation < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)MonitorInformation);
    HIWORD(v16) = a2;
    LOWORD(v16) = 1;
    v17 = v11;
    v18 = 0;
    RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, &v16, 8LL, 0LL);
  }
  if ( a2 == 7 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 48LL))(*((_QWORD *)this + 62));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    v7 = CSingleViewShellExperience::Hide((char *)this + 264, 0LL);
    v8 = v7;
    if ( v7 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x13C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    v10 = CSingleViewShellExperience::Hide((char *)this + 264, 0LL);
    v8 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x140,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
  }
  return v8;
}
