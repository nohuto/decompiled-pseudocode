/*
 * XREFs of ?FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ @ 0x180170B80
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180018630 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803072C0 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShoulderTapExperienceManager::FocusHotkeyInvoked(CShoulderTapExperienceManager *this)
{
  char *v1; // rbx
  int v2; // eax
  __int64 v3; // rax
  int v4; // eax
  _BYTE v6[32]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((_DWORD *)this + 20) == 2 )
  {
    v1 = (char *)this + 40;
    v2 = CSingleViewShellExperience::NavigateView((char *)this + 40, 5LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        376LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v6, (const WCHAR **)&off_18034C4E8);
    v4 = ExperienceManagerUtils::RaiseReactivatedEvent(
           *((ExperienceManagerUtils **)v1 + 3),
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)v1 + 32),
           *((HSTRING *)v1 + 1),
           *((HSTRING *)v1 + 2),
           *(HSTRING *)(v3 + 24),
           0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        377LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
  }
  return 0LL;
}
