/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002571C
 * Callers:
 *     GreForceClipRgnChange @ 0x1C0005328 (GreForceClipRgnChange.c)
 *     GreGetSprite @ 0x1C00062E4 (GreGetSprite.c)
 *     GreWindowBeginLayoutUpdate @ 0x1C0007EB8 (GreWindowBeginLayoutUpdate.c)
 *     GreIsWindowResizeInProgress @ 0x1C0022E8C (GreIsWindowResizeInProgress.c)
 *     GreHintSpriteShape @ 0x1C0023878 (GreHintSpriteShape.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C009D248 (GreUpdateSpriteClipRgn.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C00FF250 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreWindowLayoutComplete @ 0x1C0104658 (GreWindowLayoutComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C024DB88 (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C024DC6C (GreConfirmWindowResizeCommit.c)
 *     GreGetWindowResizeTelemetry @ 0x1C024E3D4 (GreGetWindowResizeTelemetry.c)
 *     GreProtectSpriteContent @ 0x1C024E9CC (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C024EE98 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C024F05C (GreWindowResizeStarted.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002574C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00257CC (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMSPRITEREF *__fastcall DWMSPRITEREF::DWMSPRITEREF(DWMSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = DWMSPRITEREF::hspLookupWindow(a2);
  DWMSPRITEREF::LockSpriteObj(this, v3);
  return this;
}
