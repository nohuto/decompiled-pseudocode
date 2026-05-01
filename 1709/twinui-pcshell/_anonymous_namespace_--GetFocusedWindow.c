/*
 * XREFs of _anonymous_namespace_::GetFocusedWindow @ 0x180198938
 * Callers:
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI@Z @ 0x1801997BC (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18019BA5C (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x18019CC38 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

HWND anonymous_namespace_::GetFocusedWindow()
{
  HWND result; // rax
  struct tagGUITHREADINFO pgui; // [rsp+20h] [rbp-68h] BYREF

  memset(&pgui, 0, sizeof(pgui));
  pgui.cbSize = 72;
  GetGUIThreadInfo(0, &pgui);
  result = pgui.hwndFocus;
  if ( !pgui.hwndFocus )
    return GetForegroundWindow();
  return result;
}
