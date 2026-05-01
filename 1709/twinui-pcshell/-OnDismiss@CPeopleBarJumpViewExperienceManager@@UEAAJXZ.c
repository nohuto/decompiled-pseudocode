/*
 * XREFs of ?OnDismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ @ 0x1800B12D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0C88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnDismiss(CPeopleBarJumpViewExperienceManager *this)
{
  int v1; // eax
  int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 20) == 2
    && *((_QWORD *)this + 8)
    && (v1 = CSingleViewShellExperience::DestroyView((CPeopleBarJumpViewExperienceManager *)((char *)this + 40)),
        v2 = v1,
        v1 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A4,
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
      (void *)0x71,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
