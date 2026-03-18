/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009CF00
 * Callers:
 *     GreAdjustSpriteDirtyAccum @ 0x1C009C794 (GreAdjustSpriteDirtyAccum.c)
 *     GrePtInSprite @ 0x1C009CD10 (GrePtInSprite.c)
 *     GreNotifyDirtySprite @ 0x1C009CFC4 (GreNotifyDirtySprite.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C024DA04 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C009CED4 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C009CF30 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = DWMALTSPRITEREF::hspLookupWindow(a2);
  DWMALTSPRITEREF::AltLockSpriteObj(this, v3);
  return this;
}
