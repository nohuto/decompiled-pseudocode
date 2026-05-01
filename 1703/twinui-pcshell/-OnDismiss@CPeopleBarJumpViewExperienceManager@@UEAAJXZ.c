/*
 * XREFs of ?OnDismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ @ 0x1800A4970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18018300C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnDismiss(CPeopleBarJumpViewExperienceManager *this)
{
  int v1; // eax
  int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 20) == 2
    && *((_QWORD *)this + 8)
    && (v1 = CSingleViewShellExperience::Hide((char *)this + 40, 0LL), v2 = v1, v1 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x14E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
  }
  else
  {
    v2 = 0;
  }
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
