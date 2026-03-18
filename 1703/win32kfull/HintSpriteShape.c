/*
 * XREFs of HintSpriteShape @ 0x1C0022E0C
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C001D5C8 (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01C1844 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01C2300 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C0023878 (GreHintSpriteShape.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0025C08 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall HintSpriteShape(HDEV a1, struct tagWND *a2, HBITMAP a3, int a4)
{
  int v8; // eax
  _BYTE v10[56]; // [rsp+40h] [rbp-68h] BYREF

  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v10);
  v8 = IsWindowDesktopComposed(a2);
  return GreHintSpriteShape(a1, *(HWND *)a2, a3, a4, v8, 1);
}
