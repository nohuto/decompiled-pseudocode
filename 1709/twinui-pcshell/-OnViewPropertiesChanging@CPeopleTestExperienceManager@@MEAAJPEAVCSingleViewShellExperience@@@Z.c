/*
 * XREFs of ?OnViewPropertiesChanging@CPeopleTestExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B2CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall CPeopleTestExperienceManager::OnViewPropertiesChanging(
        CPeopleTestExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  LONG v4; // ebp
  LONG v5; // r14d
  HMONITOR v6; // rsi
  const char *v7; // r9
  __int64 v8; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  struct tagRECT v12; // [rsp+20h] [rbp-58h] BYREF
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((_QWORD *)a2 + 3) && *((_DWORD *)a2 + 10) != 2 )
  {
    v4 = (int)*((float *)a2 + 11);
    v5 = (int)*((float *)a2 + 12);
    v6 = MonitorFromPoint(0LL, 0);
    if ( v6 == (HMONITOR)-1LL )
    {
      v8 = 69LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v8,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peopletestexperiencemanager.cpp",
               v7);
    }
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v6, &mi) )
    {
      v8 = 71LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v8,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peopletestexperiencemanager.cpp",
               v7);
    }
    v12.left = 0;
    v12.top = 0;
    v12.right = v4;
    v12.bottom = v5;
    v10 = CSingleViewShellExperience::SetPosition(a2, &v12);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x4D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peopletestexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
    CSingleViewShellExperience::Show((char *)this + 8, 0LL);
  }
  return 0LL;
}
