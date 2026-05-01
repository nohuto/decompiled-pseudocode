/*
 * XREFs of ?OnViewHidden@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016EEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18006C0CC (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x180076654 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x180092CB4 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewHidden(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  SingleViewLightDismissHelper::UnregisterWithLightDismiss((CPeopleBarJumpViewExperienceManager *)((char *)this + 232));
  v3 = CExperienceManagerAnimationHelper::End((CPeopleBarJumpViewExperienceManager *)((char *)this + 344));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      291LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = CSingleViewShellExperience::ShowBorder((__int64)this + 8, 0LL, 0LL, 0LL, 0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      292LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
