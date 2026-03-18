/*
 * XREFs of HintSpriteShape @ 0x1C0090EC4
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01C5084 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01C5370 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C00911BC (GreHintSpriteShape.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C00925F4 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 */

__int64 __fastcall HintSpriteShape(HDEV a1, struct tagWND *a2, HBITMAP a3, int a4)
{
  int v8; // eax
  _BYTE v10[64]; // [rsp+40h] [rbp-48h] BYREF

  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v10);
  v8 = IsWindowDesktopComposed(a2);
  return GreHintSpriteShape(a1, *(HWND *)a2, a3, a4, v8, 1);
}
