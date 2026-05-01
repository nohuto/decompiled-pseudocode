/*
 * XREFs of ?HandleExitSizeMove@CStartSizingFrame@@AEAA_JXZ @ 0x1800D047C
 * Callers:
 *     ?v_WndProc@CStartSizingFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800D0220 (-v_WndProc@CStartSizingFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStartMenuWindow@CStartSizingFrame@@AEAAJPEAPEAUHWND__@@@Z @ 0x1800D0024 (-GetStartMenuWindow@CStartSizingFrame@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?PersistFinalHeight@CStartSizingFrame@@AEAAJH@Z @ 0x1800D0078 (-PersistFinalHeight@CStartSizingFrame@@AEAAJH@Z.c)
 *     ?ClearDCompResources@CStartSizingFrame@@AEAAXXZ @ 0x1800D0DA0 (-ClearDCompResources@CStartSizingFrame@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartSizingFrame::HandleExitSizeMove(CStartSizingFrame *this)
{
  int StartMenuWindow; // eax
  HWND hWndInsertAfter; // [rsp+40h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *((_BYTE *)this + 205) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), 0LL);
  CStartSizingFrame::ClearDCompResources(this);
  StartMenuWindow = CStartSizingFrame::GetStartMenuWindow(this, &hWndInsertAfter);
  if ( StartMenuWindow >= 0 )
  {
    SetWindowPos(*((HWND *)this + 1), hWndInsertAfter, 0, 0, 0, 0, 0x13u);
    Rect = 0LL;
    GetWindowRect(hWndInsertAfter, &Rect);
    CStartSizingFrame::PersistFinalHeight(this, Rect.bottom - Rect.top);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
      (const char *)(unsigned int)StartMenuWindow);
  }
  return 0LL;
}
