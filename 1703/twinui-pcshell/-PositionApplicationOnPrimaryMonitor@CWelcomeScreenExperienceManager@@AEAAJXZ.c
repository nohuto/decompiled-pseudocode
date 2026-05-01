/*
 * XREFs of ?PositionApplicationOnPrimaryMonitor@CWelcomeScreenExperienceManager@@AEAAJXZ @ 0x1800B38A0
 * Callers:
 *     ?OnViewCreated@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B2CB0 (-OnViewCreated@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShowing@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B2D90 (-OnViewShowing@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionApplication@CWelcomeScreenExperienceManager@@UEAAJXZ @ 0x1800B3330 (-PositionApplication@CWelcomeScreenExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$ApplicationPositionedOnPrimaryMonitor@AEAJAEAJAEAJAEAJ@WelcomeScreenExperienceManagerTelemetry@@SAXAEAJ000@Z @ 0x1800B4D90 (--$ApplicationPositionedOnPrimaryMonitor@AEAJAEAJAEAJAEAJ@WelcomeScreenExperienceManagerTelemetr.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180181774 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall CWelcomeScreenExperienceManager::PositionApplicationOnPrimaryMonitor(ExperienceManagerUtils **this)
{
  HMONITOR v2; // rbx
  const char *v3; // r9
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  HWND v9; // rax
  struct tagRECT v10; // [rsp+40h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( this[20] )
  {
    v2 = MonitorFromPoint(0LL, 1u);
    if ( v2 == (HMONITOR)-1LL )
    {
      v4 = 287LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v4,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
               v3);
    }
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v2, &mi) )
    {
      v4 = 290LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v4,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
               v3);
    }
    v10.left = 0;
    v10.top = 0;
    v10.right = mi.rcMonitor.right - mi.rcMonitor.left;
    v10.bottom = mi.rcMonitor.bottom - mi.rcMonitor.top;
    v6 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(this + 17), &v10);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x127,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    WelcomeScreenExperienceManagerTelemetry::ApplicationPositionedOnPrimaryMonitor<long &,long &,long &,long &>(
      &v10,
      &v10.top,
      &v10.right,
      &v10.bottom);
    v9 = ExperienceManagerUtils::WindowFromViewWrapper(this[20], v8);
    SetWindowPos(v9, 0LL, 0, 0, 0, 0, 0x613u);
  }
  return 0LL;
}
