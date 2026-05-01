/*
 * XREFs of ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016F240
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18006C0CC (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1800765D0 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18007ABD0 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086288 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18016EA8C (-GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewUncloaking(
        CPeopleBarJumpViewExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v3; // rdi
  HSTRING v4; // r8
  const WCHAR *StringRawBuffer; // rax
  const char *v6; // r9
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // edi
  int MonitorWorkArea; // eax
  __int64 v17; // rdx
  struct tagRECT v19; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               a2[3],
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       *((Microsoft::WRL::Wrappers::Details **)this + 38),
                       0LL,
                       v4) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 38), 0LL);
    if ( !SetWindowTextW(v3, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xB9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        v6);
  }
  v7 = *((_DWORD *)this + 63);
  v8 = 15LL;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v8 = 7LL;
      }
      else
      {
        v8 = 11LL;
      }
    }
    else
    {
      v8 = 13LL;
    }
  }
  else
  {
    v8 = 14LL;
  }
  v11 = CSingleViewShellExperience::ShowBorder((__int64)this + 8, v8, 1LL, 0LL, 0LL);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      188LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  v14 = *((unsigned int *)this + 63);
  v15 = 92;
  if ( (_DWORD)v14 )
  {
    v14 = (unsigned int)(v14 - 1);
    if ( (_DWORD)v14 )
    {
      v14 = (unsigned int)(v14 - 1);
      if ( (_DWORD)v14 )
      {
        if ( (_DWORD)v14 == 1 )
          v15 = 90;
      }
      else
      {
        v15 = 88;
      }
    }
    else
    {
      v15 = 91;
    }
  }
  else
  {
    v15 = 89;
  }
  wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService(v14, v12, v13);
  MonitorWorkArea = CPeopleBarJumpViewExperienceManager::GetMonitorWorkArea(
                      (CPeopleBarJumpViewExperienceManager *)((char *)this - 48),
                      &v19);
  if ( MonitorWorkArea < 0 )
  {
    v17 = 209LL;
LABEL_26:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v17,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorWorkArea);
    return 0LL;
  }
  MonitorWorkArea = CExperienceManagerAnimationHelper::Begin(
                      (__int64)this + 312,
                      *((ExperienceManagerUtils **)this + 4),
                      v15 | 0x200000u);
  if ( MonitorWorkArea < 0 )
  {
    v17 = 212LL;
    goto LABEL_26;
  }
  return 0LL;
}
