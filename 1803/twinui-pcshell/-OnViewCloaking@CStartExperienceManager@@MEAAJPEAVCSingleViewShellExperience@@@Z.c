/*
 * XREFs of ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800773D0
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18006B838 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1800765D0 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x180076E74 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086288 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewCloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int MonitorInformation; // eax
  int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-58h]
  bool v9; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+44h] [rbp-34h] BYREF
  struct tagRECT v11; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT v12; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((_BYTE *)this + 552) )
    return 0LL;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)((char *)this - 88),
                         a2,
                         &v12,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v10,
                         &v9,
                         &v11,
                         0LL);
  if ( MonitorInformation < 0 )
  {
    v7 = 534LL;
LABEL_17:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorInformation,
      v8);
    return 0LL;
  }
  v5 = 81;
  if ( *((_BYTE *)a2 + 52) )
  {
    v5 = 82;
  }
  else if ( v10 )
  {
    switch ( v10 )
    {
      case 1:
        v5 = 79;
        break;
      case 2:
        v5 = 78;
        break;
      case 3:
        v5 = 80;
        break;
    }
  }
  else
  {
    v5 = 77;
  }
  wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService();
  MonitorInformation = CExperienceManagerAnimationHelper::Begin(
                         (__int64)this + 488,
                         *((ExperienceManagerUtils **)this + 30),
                         v5 | 0x200000u);
  if ( MonitorInformation < 0 )
  {
    v7 = 566LL;
    goto LABEL_17;
  }
  return 0LL;
}
