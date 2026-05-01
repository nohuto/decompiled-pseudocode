/*
 * XREFs of ?DimStart@CStartExperienceManager@@UEAAJXZ @ 0x1800B8800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x1800B8530 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 */

__int64 __fastcall CStartExperienceManager::DimStart(CStartExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 600) )
    return 0LL;
  v1 = CStartExperienceManager::ReactivateHelper(
         (CStartExperienceManager *)((char *)this - 40),
         L"OnDimmedStateChanged",
         1);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x3EC,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
