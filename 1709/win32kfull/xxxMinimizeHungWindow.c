/*
 * XREFs of xxxMinimizeHungWindow @ 0x1C020EA88
 * Callers:
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxShowOwnedWindows @ 0x1C004BB84 (xxxShowOwnedWindows.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C6C40 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C010FF44 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxDrawAnimatedRects @ 0x1C020E920 (xxxDrawAnimatedRects.c)
 */

char __fastcall xxxMinimizeHungWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  __int64 RectRgnIndirect; // rbx
  struct tagRECT v7; // [rsp+40h] [rbp-28h] BYREF

  result = *((_BYTE *)a1 + 71);
  if ( (result & 0x20) == 0 && (result & 0x10) != 0 )
  {
    if ( (gdwPUDFlags & 0x10000) != 0 )
    {
      *(_QWORD *)&v7.left = 0LL;
      *(_QWORD *)&v7.right = 0LL;
      xxxSendMinRectMessages((unsigned __int64 *)a1, (struct _LARGE_STRING *)&v7, a3, a4);
      if ( !IsRectEmptyInl(&v7) )
        xxxDrawAnimatedRects(a1, 3, (struct tagRECT *)a1 + 8, &v7);
    }
    SetVisible(a1, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect((char *)a1 + 128);
    xxxShowOwnedWindows((__int64)a1, 1, RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133LL);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      xxxActivateOnMinimize(a1);
    return PostEventMessageEx(
             *((struct tagTHREADINFO **)a1 + 2),
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL),
             0xAu,
             (__int64)a1,
             0,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
