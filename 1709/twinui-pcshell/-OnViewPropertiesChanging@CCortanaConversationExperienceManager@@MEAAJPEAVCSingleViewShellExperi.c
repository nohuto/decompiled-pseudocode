/*
 * XREFs of ?OnViewPropertiesChanging@CCortanaConversationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18009DA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1801DB760 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall CCortanaConversationExperienceManager::OnViewPropertiesChanging(
        CCortanaConversationExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  HMONITOR v4; // rbx
  const char *v5; // r9
  __int64 v6; // rdx
  HMONITOR v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  struct tagRECT rcWork; // [rsp+20h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((_QWORD *)a2 + 3) )
  {
    v4 = MonitorFromPoint(0LL, 0);
    if ( v4 == (HMONITOR)-1LL )
    {
      v6 = 57LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaconversationexperiencemanager.cpp",
               v5);
    }
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v4, &mi) )
    {
      v6 = 59LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaconversationexperiencemanager.cpp",
               v5);
    }
    rcWork = mi.rcWork;
    rcWork.left = rcWork.right
                - ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x1A0, (int)v4, v8);
    v9 = CSingleViewShellExperience::SetPosition(a2, &rcWork);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x41,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaconversationexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    CSingleViewShellExperience::Show((char *)this + 8, 0LL);
  }
  return 0LL;
}
