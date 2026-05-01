/*
 * XREFs of ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1800B7D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z @ 0x1800B9BF0 (--$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1801DBD20 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnApplicationActivatedForLaunch(
        struct IUnknown *this,
        struct CSingleViewShellExperience *a2,
        unsigned int a3)
{
  _BYTE *v4; // rbx
  HWND ShellWindow; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = a3;
  if ( a3 == -2144927148 || a3 == -2147009295 )
  {
    v4 = (char *)&this[68].lpVtbl + 1;
    StartMenuExperienceTelemetry::InfraFailure<bool &,long &>((char *)&this[68].lpVtbl + 1, &v11);
    if ( *v4 )
    {
      ShellWindow = GetShellWindow();
      PostMessageW(ShellWindow, 0x533u, 1uLL, 0LL);
    }
    a3 = v11;
  }
  v6 = ExperienceManagerUtils::PostToUIThread(0LL, this - 12, (void *)0x401, a3, v9);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
