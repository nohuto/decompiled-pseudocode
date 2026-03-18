/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009205C
 * Callers:
 *     GreWindowBeginLayoutUpdate @ 0x1C000C394 (GreWindowBeginLayoutUpdate.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreIsWindowResizeInProgress @ 0x1C0090F40 (GreIsWindowResizeInProgress.c)
 *     GreHintSpriteShape @ 0x1C00911BC (GreHintSpriteShape.c)
 *     GreForceClipRgnChange @ 0x1C00E6124 (GreForceClipRgnChange.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00E6FFC (GreUpdateSpriteClipRgn.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C010A2E4 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreWindowLayoutComplete @ 0x1C010FA38 (GreWindowLayoutComplete.c)
 *     GreGetSprite @ 0x1C011B420 (GreGetSprite.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C024F5F8 (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C024F6DC (GreConfirmWindowResizeCommit.c)
 *     GreGetWindowResizeTelemetry @ 0x1C024FE48 (GreGetWindowResizeTelemetry.c)
 *     GreProtectSpriteContent @ 0x1C0250440 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0250914 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0250AF0 (GreWindowResizeStarted.c)
 * Callees:
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00920FC (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMSPRITEREF *__fastcall DWMSPRITEREF::DWMSPRITEREF(DWMSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax
  __int64 v4; // rdx

  *(_QWORD *)this = 0LL;
  v3 = DWMSPRITEREF::hspLookupWindow(a2);
  if ( v3 )
  {
    LOBYTE(v4) = 15;
    *(_QWORD *)this = HmgLock(v3, v4);
  }
  return this;
}
