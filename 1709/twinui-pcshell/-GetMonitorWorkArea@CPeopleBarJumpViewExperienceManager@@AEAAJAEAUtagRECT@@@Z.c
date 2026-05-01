/*
 * XREFs of ?GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x1800B2078
 * Callers:
 *     ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B1780 (-OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B19A0 (-OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::GetMonitorWorkArea(
        CPeopleBarJumpViewExperienceManager *this,
        struct tagRECT *a2)
{
  HMONITOR v3; // rdi
  const char *v4; // r9
  __int64 v5; // rdx
  __int64 result; // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = MonitorFromRect((LPCRECT)((char *)this + 312), 1u);
  if ( v3 == (HMONITOR)-1LL )
  {
    v5 = 369LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
             v4);
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v3, &mi) )
  {
    v5 = 372LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
             v4);
  }
  result = 0LL;
  *a2 = mi.rcWork;
  return result;
}
