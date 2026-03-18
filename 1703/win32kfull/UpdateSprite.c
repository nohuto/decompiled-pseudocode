/*
 * XREFs of UpdateSprite @ 0x1C0025A10
 * Callers:
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0022C08 (_SetLayeredWindowAttributes.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     OffsetChildren @ 0x1C009E97C (OffsetChildren.c)
 *     UpdateSpriteArea @ 0x1C013534C (UpdateSpriteArea.c)
 *     xxxCompositedPaint @ 0x1C020BA84 (xxxCompositedPaint.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C0025B2C (GreUpdateSprite.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0025C08 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateSprite(
        HDEV a1,
        struct tagWND *a2,
        __int64 a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  int v14; // eax
  _BYTE v17[56]; // [rsp+88h] [rbp-80h] BYREF

  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v17);
  v14 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreUpdateSprite(
                         a1,
                         *(HWND *)a2,
                         0LL,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         a10,
                         a11,
                         a12,
                         (struct tagMINIWINDOWINFO *)v17,
                         v14,
                         0) == 0
       ? 0x803F0001
       : 0;
}
