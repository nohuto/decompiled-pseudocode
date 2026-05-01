/*
 * XREFs of ?DismissPopupMenu@@YA_NI@Z @ 0x180185BA0
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18017F580 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

char __fastcall DismissPopupMenu(UINT uTimeout)
{
  char v2; // bl
  HWND WindowW; // rdi
  DWORD WindowThreadProcessId; // eax
  tagGUITHREADINFO pgui; // [rsp+40h] [rbp-68h] BYREF

  v2 = 0;
  WindowW = FindWindowW((LPCWSTR)0x8000, 0LL);
  if ( WindowW )
  {
    pgui.cbSize = 72;
    memset(&pgui.flags, 0, 0x44uLL);
    WindowThreadProcessId = GetWindowThreadProcessId(WindowW, 0LL);
    if ( GetGUIThreadInfo(WindowThreadProcessId, &pgui) )
    {
      if ( (pgui.flags & 4) != 0 )
        return SendMessageTimeoutW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL, 3u, uTimeout, 0LL) != 0;
    }
  }
  return v2;
}
