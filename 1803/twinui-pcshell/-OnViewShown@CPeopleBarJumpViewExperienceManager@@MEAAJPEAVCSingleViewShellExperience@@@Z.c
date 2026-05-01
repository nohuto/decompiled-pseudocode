/*
 * XREFs of ?OnViewShown@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016F1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180309580 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewShown(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
         (char *)this + 232,
         *((unsigned int *)this + 62),
         ((unsigned __int64)this - 32) & -(__int64)(this != (CPeopleBarJumpViewExperienceManager *)48),
         *((_QWORD *)a2 + 3));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      284LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return 0LL;
}
