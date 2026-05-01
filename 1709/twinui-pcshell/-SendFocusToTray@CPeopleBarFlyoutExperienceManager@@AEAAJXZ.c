/*
 * XREFs of ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1800AF364
 * Callers:
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x1800AD7F0 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 *     ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800AEDB0 (-OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::SendFocusToTray(CPeopleBarFlyoutExperienceManager *this)
{
  HWND WindowW; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( SetForegroundWindow(WindowW) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x339,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
