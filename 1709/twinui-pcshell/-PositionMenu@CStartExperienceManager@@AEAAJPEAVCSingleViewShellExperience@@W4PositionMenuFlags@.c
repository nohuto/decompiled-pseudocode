/*
 * XREFs of ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B8324
 * Callers:
 *     ?UpdatePosition@CStartExperienceManager@@UEAAX_N@Z @ 0x1800B5AE0 (-UpdatePosition@CStartExperienceManager@@UEAAX_N@Z.c)
 *     ?OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B7800 (-OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShowing@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B7820 (-OnViewShowing@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x1800B7F70 (-WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800B8010 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StartFullScreenTransparentWindow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800B9900 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StartFullScreenTransparentWi.c)
 *     ??$Start@$$V@StartMenuReposition@StartMenuExperienceTelemetry@@SA?AV01@XZ @ 0x1800B9CB0 (--$Start@$$V@StartMenuReposition@StartMenuExperienceTelemetry@@SA-AV01@XZ.c)
 *     ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x1800B9D5C (--$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMe.c)
 *     ?Stop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BAA84 (-Stop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ @ 0x1800BBB10 (--1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStartExperienceManager::PositionMenu(CStartExperienceManager *a1, __int64 a2, int a3)
{
  char v3; // si
  struct CSingleViewShellExperience *v6; // rdx
  int MonitorInformation; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  bool v11[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+4Ch] [rbp-BCh] BYREF
  int v13; // [rsp+50h] [rbp-B8h]
  int v14; // [rsp+58h] [rbp-B0h] BYREF
  int v15[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct tagRECT v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h]
  HMONITOR v18; // [rsp+80h] [rbp-88h] BYREF
  struct tagRECT v19; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v20[320]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v17 = -2LL;
  v3 = a3;
  v14 = a3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetCachedFeatureEnabledState();
  v12 = 6;
  LOBYTE(v13) = 3;
  LODWORD(v18) = 6;
  WORD2(v18) = v13;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data,
    0x7AE09Bu,
    (const struct FEATURE_LOGGED_TRAITS *)&v18,
    1,
    3);
  StartMenuExperienceTelemetry::StartMenuReposition::Start<>((StartMenuExperienceTelemetry::StartMenuReposition *)v20);
  v19 = 0LL;
  *(_QWORD *)&v16.left = 0LL;
  *(_QWORD *)&v16.right = 0LL;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         a1,
                         v6,
                         &v19,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v12,
                         v11,
                         &v16,
                         &v18);
  v8 = MonitorInformation;
  if ( MonitorInformation < 0 )
  {
    v9 = 869LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorInformation);
    goto LABEL_12;
  }
  v11[0] = 1;
  v15[0] = v19.bottom - v19.top;
  LODWORD(v18) = v19.right - v19.left;
  StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
    (unsigned int)v20,
    (unsigned int)&v19,
    (unsigned int)&v19.top,
    (unsigned int)&v18,
    (__int64)v15,
    a2 + 52,
    (__int64)v11,
    (__int64)&v14);
  *((_DWORD *)a1 + 158) = *(_DWORD *)(a2 + 44);
  *((_DWORD *)a1 + 159) = *(_DWORD *)(a2 + 48);
  if ( *(_QWORD *)(a2 + 24) )
  {
    MonitorInformation = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)a2, &v19);
    v8 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v9 = 879LL;
      goto LABEL_8;
    }
  }
  if ( (v3 & 4) != 0 )
  {
    LODWORD(v18) = 4;
    HIDWORD(v18) = (unsigned __int16)v12;
    RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, &v18, 8LL, 0LL);
  }
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((StartMenuExperienceTelemetry::StartMenuReposition *)v20);
  v8 = 0;
LABEL_12:
  StartMenuExperienceTelemetry::StartMenuReposition::~StartMenuReposition((StartMenuExperienceTelemetry::StartMenuReposition *)v20);
  return v8;
}
