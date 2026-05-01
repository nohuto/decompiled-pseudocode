/*
 * XREFs of ?StartThemeChanged@CStartExperienceManager@@QEAAJW4StartThemeUpdateType@@@Z @ 0x180174748
 * Callers:
 *     ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x180173C50 (-OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x180173ECC (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 */

__int64 __fastcall CStartExperienceManager::StartThemeChanged(CStartExperienceManager *a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CStartExperienceManager::ReactivateHelper(a1, L"OnStartThemeChanged", a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x369,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
