/*
 * XREFs of ?OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1800765D0 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086288 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18016EA8C (-GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewCloaking(
        ExperienceManagerUtils **this,
        struct CSingleViewShellExperience *a2,
        __int64 a3)
{
  __int64 v3; // rdx
  int v5; // ebx
  int MonitorWorkArea; // eax
  __int64 v7; // rdx
  struct tagRECT v9; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((unsigned int *)this + 63);
  v5 = 92;
  if ( (_DWORD)v3 )
  {
    v3 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v3 )
    {
      v3 = (unsigned int)(v3 - 1);
      if ( (_DWORD)v3 )
      {
        if ( (_DWORD)v3 == 1 )
          v5 = 91;
      }
      else
      {
        v5 = 89;
      }
    }
    else
    {
      v5 = 90;
    }
  }
  else
  {
    v5 = 88;
  }
  wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService((__int64)this, v3, a3);
  MonitorWorkArea = CPeopleBarJumpViewExperienceManager::GetMonitorWorkArea(
                      (CPeopleBarJumpViewExperienceManager *)(this - 6),
                      &v9);
  if ( MonitorWorkArea < 0 )
  {
    v7 = 247LL;
LABEL_13:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorWorkArea);
    return 0LL;
  }
  MonitorWorkArea = CExperienceManagerAnimationHelper::Begin((__int64)(this + 43), this[4], v5 | 0x200000u);
  if ( MonitorWorkArea < 0 )
  {
    v7 = 250LL;
    goto LABEL_13;
  }
  return 0LL;
}
