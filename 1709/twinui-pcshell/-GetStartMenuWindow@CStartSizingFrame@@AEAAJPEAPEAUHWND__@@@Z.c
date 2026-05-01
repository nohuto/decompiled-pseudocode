/*
 * XREFs of ?GetStartMenuWindow@CStartSizingFrame@@AEAAJPEAPEAUHWND__@@@Z @ 0x1800D0024
 * Callers:
 *     ?HandleExitSizeMove@CStartSizingFrame@@AEAA_JXZ @ 0x1800D047C (-HandleExitSizeMove@CStartSizingFrame@@AEAA_JXZ.c)
 *     ?HandleWindowPositionChanging@CStartSizingFrame@@AEAA_JPEAUtagWINDOWPOS@@@Z @ 0x1800D061C (-HandleWindowPositionChanging@CStartSizingFrame@@AEAA_JPEAUtagWINDOWPOS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall CStartSizingFrame::GetStartMenuWindow(CStartSizingFrame *this, HWND *a2)
{
  __int64 v2; // rcx
  ExperienceManagerUtils *v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = *((_QWORD *)this + 2);
  if ( v2 && (v3 = *(ExperienceManagerUtils **)(v2 + 24)) != 0LL )
  {
    *a2 = ExperienceManagerUtils::WindowFromViewWrapper(
            v3,
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
      (const char *)0x80070490LL);
    return 2147943568LL;
  }
}
