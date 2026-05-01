/*
 * XREFs of ?Dismiss@CPeopleBarJumpViewExperienceManager@@AEAAJ_N@Z @ 0x1800A5778
 * Callers:
 *     ?Dismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ @ 0x1800A4D50 (-Dismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18018300C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::Dismiss(CPeopleBarJumpViewExperienceManager *this, char a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  HWND WindowW; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 24) == 2 )
  {
    if ( *((_QWORD *)this + 10) )
    {
      v3 = CSingleViewShellExperience::Hide((char *)this + 56, 0LL);
      if ( v3 < 0 )
      {
        v4 = 334LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v4,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
        return (unsigned int)v3;
      }
    }
    if ( a2 )
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( !SetForegroundWindow(WindowW) )
      {
        v3 = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15F,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
          (const char *)0x80004005LL);
        v4 = 339LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
