/*
 * XREFs of ?BringToForeground@CStartExperienceManager@@UEAAJXZ @ 0x180173460
 * Callers:
 *     <none>
 * Callees:
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x1800697EC (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStartExperienceManager::BringToForeground(CStartExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 36) )
    return 0LL;
  if ( !*((_DWORD *)this + 76) )
    return 0LL;
  v1 = CSingleViewShellExperience::BringToForeground((CStartExperienceManager *)((char *)this + 264));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
