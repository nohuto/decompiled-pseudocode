/*
 * XREFs of ?OnIdleStateChanged@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180173C10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x180076D48 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnIdleStateChanged(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        unsigned __int8 a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a2 + 10) != 1 )
  {
    v3 = CStartExperienceManager::ReactivateHelper(
           (CStartExperienceManager *)((char *)this - 88),
           L"OnUserSessionIdle",
           a3);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        680LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  return 0LL;
}
