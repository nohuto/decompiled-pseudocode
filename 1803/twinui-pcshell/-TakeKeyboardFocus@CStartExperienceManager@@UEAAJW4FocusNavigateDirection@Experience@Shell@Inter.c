/*
 * XREFs of ?TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x180174790
 * Callers:
 *     <none>
 * Callees:
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x1800697EC (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x180173ECC (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 */

__int64 __fastcall CStartExperienceManager::TakeKeyboardFocus(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CSingleViewShellExperience::BringToForeground((CSingleViewShellExperience *)(a1 + 264));
  if ( v4 < 0 )
  {
    v5 = 883LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CStartExperienceManager::ReactivateHelper((CStartExperienceManager *)(a1 - 40), L"OnReceivingKeyboardFocus", a2);
  if ( v4 < 0 )
  {
    v5 = 884LL;
    goto LABEL_5;
  }
  return (unsigned int)v4;
}
