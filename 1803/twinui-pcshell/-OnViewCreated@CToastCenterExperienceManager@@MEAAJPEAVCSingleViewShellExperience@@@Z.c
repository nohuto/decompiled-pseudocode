/*
 * XREFs of ?OnViewCreated@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180164D10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x18006BFAC (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnViewCreated(
        CToastCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  int v3; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CSingleViewShellExperience::SetPreferentialRMSettings((__int64)this + 16, 1);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1022LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v4)
    || SetPropW(0LL, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40A,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
