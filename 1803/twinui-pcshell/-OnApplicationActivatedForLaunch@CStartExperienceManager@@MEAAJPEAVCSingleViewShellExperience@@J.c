/*
 * XREFs of ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x180173B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x180094440 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ??$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z @ 0x1801727AC (--$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnApplicationActivatedForLaunch(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        int a3)
{
  _BYTE *v4; // rbx
  HWND ShellWindow; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( a3 == -2144927148 || a3 == -2147009295 )
  {
    v4 = (char *)this + 553;
    StartMenuExperienceTelemetry::InfraFailure<bool &,long &>((unsigned __int8 *)this + 553, (__int64)&v10);
    if ( *v4 )
    {
      ShellWindow = GetShellWindow();
      PostMessageW(ShellWindow, 0x533u, 1uLL, 0LL);
    }
    a3 = v10;
  }
  v6 = ExperienceManagerUtils::PostToUIThread(0LL, (struct IUnknown *)this - 11, (void *)0x401, a3);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
