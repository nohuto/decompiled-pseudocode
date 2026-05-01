/*
 * XREFs of ?Show@CTaskContinuityActivitiesExperienceManager@@UEAAJXZ @ 0x1800AB4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 */

__int64 __fastcall CTaskContinuityActivitiesExperienceManager::Show(CTaskContinuityActivitiesExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CSingleViewShellExperience::Show((char *)this + 72, 0LL);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xBA,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
