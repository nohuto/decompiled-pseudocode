/*
 * XREFs of ?DismissPopupMenu@@YA_NXZ @ 0x180095A30
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1800782F0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

char DismissPopupMenu(void)
{
  char v0; // bl
  HWND WindowW; // rdi
  DWORD WindowThreadProcessId; // eax
  tagGUITHREADINFO pgui; // [rsp+40h] [rbp-68h] BYREF

  v0 = 1;
  WindowW = FindWindowW((LPCWSTR)0x8000, 0LL);
  if ( WindowW )
  {
    pgui.cbSize = 72;
    memset_0(&pgui.flags, 0, 0x44uLL);
    WindowThreadProcessId = GetWindowThreadProcessId(WindowW, 0LL);
    if ( GetGUIThreadInfo(WindowThreadProcessId, &pgui) )
    {
      if ( (pgui.flags & 4) != 0 )
        return SendMessageTimeoutW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL, 3u, 0x12Cu, 0LL) != 0;
    }
  }
  return v0;
}
