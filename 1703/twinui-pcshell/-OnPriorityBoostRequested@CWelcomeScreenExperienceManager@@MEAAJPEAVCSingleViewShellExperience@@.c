/*
 * XREFs of ?OnPriorityBoostRequested@CWelcomeScreenExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B3080
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyPriorityBoostIfNeeded@CWelcomeScreenExperienceManager@@AEAAJXZ @ 0x1800B2F6C (-ApplyPriorityBoostIfNeeded@CWelcomeScreenExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CWelcomeScreenExperienceManager::OnPriorityBoostRequested(
        CWelcomeScreenExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ++*((_DWORD *)this + 8);
  v2 = CWelcomeScreenExperienceManager::ApplyPriorityBoostIfNeeded((CWelcomeScreenExperienceManager *)((char *)this - 64));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
