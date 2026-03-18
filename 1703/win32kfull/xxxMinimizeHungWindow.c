/*
 * XREFs of xxxMinimizeHungWindow @ 0x1C020CBF8
 * Callers:
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 * Callees:
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00B9844 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxShowOwnedWindows @ 0x1C00E8AD0 (xxxShowOwnedWindows.c)
 *     xxxSendMinRectMessages @ 0x1C0106320 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxDrawAnimatedRects @ 0x1C020CA90 (xxxDrawAnimatedRects.c)
 */

char __fastcall xxxMinimizeHungWindow(struct tagWND *a1)
{
  char result; // al
  __int64 RectRgnIndirect; // rbx
  __int64 v4; // rdx
  struct tagWND *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagRECT v8; // [rsp+40h] [rbp-28h] BYREF

  result = *((_BYTE *)a1 + 71);
  if ( (result & 0x20) == 0 && (result & 0x10) != 0 )
  {
    if ( (gdwPUDFlags & 0x10000) != 0 )
    {
      *(_QWORD *)&v8.left = 0LL;
      *(_QWORD *)&v8.right = 0LL;
      xxxSendMinRectMessages((unsigned __int64 *)a1, (struct _LARGE_STRING *)&v8);
      if ( !IsRectEmptyInl(&v8) )
        xxxDrawAnimatedRects(a1, 3, (struct tagRECT *)a1 + 8, &v8);
    }
    SetVisible(a1, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect((char *)a1 + 128);
    xxxShowOwnedWindows((__int64)a1, 1u, RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      xxxActivateOnMinimize(v5, v4, v6, v7);
    return PostEventMessageEx(
             *((_QWORD *)a1 + 2),
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL),
             0xAu,
             (__int64)a1,
             0,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
