/*
 * XREFs of UpdateSprite @ 0x1C00923FC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0090BA8 (_SetLayeredWindowAttributes.c)
 *     UpdateSpriteArea @ 0x1C00E4894 (UpdateSpriteArea.c)
 *     OffsetChildren @ 0x1C00FDC68 (OffsetChildren.c)
 *     xxxCompositedPaint @ 0x1C020D040 (xxxCompositedPaint.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C0092518 (GreUpdateSprite.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C00925F4 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
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
