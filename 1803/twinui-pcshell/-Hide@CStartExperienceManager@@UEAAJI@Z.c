/*
 * XREFs of ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1800776B0
 * Callers:
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1800789B0 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?OnCortanaAppTransitionCompleted@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180078FF0 (-OnCortanaAppTransitionCompleted@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experienc.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18006B838 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x180076E74 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086288 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Hide(CStartExperienceManager *this, int a2)
{
  struct CSingleViewShellExperience *v4; // rdx
  int MonitorInformation; // eax
  int v6; // eax
  int v7; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-68h]
  int v11; // [rsp+20h] [rbp-68h]
  bool v12; // [rsp+40h] [rbp-48h] BYREF
  __int16 v13; // [rsp+44h] [rbp-44h] BYREF
  struct tagRECT v14; // [rsp+48h] [rbp-40h] BYREF
  struct tagRECT v15; // [rsp+58h] [rbp-30h] BYREF
  _WORD v16[4]; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a2 && !*((_BYTE *)this + 600) )
  {
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService();
    MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                           (CStartExperienceManager *)((char *)this - 40),
                           v4,
                           &v15,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&v13,
                           &v12,
                           &v14,
                           0LL);
    if ( MonitorInformation < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x130,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)MonitorInformation,
        v11);
    v16[1] = a2;
    v16[0] = 1;
    v16[2] = v13;
    v16[3] = 0;
    RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v16, 8LL, 0LL);
  }
  if ( a2 == 7 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 48LL))(*((_QWORD *)this + 62));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13D,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        v10);
    v7 = CSingleViewShellExperience::Hide((__int64)this + 264, 0LL);
    if ( v7 >= 0 )
      return 0LL;
    v9 = 318LL;
    goto LABEL_15;
  }
  v7 = CSingleViewShellExperience::Hide((__int64)this + 264, 0LL);
  if ( v7 < 0 )
  {
    v9 = 322LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      v10);
  }
  return (unsigned int)v7;
}
