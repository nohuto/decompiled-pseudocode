/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C009CE98
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C009CA40 (GreGetDxSharedSurface.c)
 *     GreHintSpriteBlt @ 0x1C013564C (GreHintSpriteBlt.c)
 *     GreGetDxRgn @ 0x1C024E018 (GreGetDxRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C024E270 (GreGetHwndUpdateIds.c)
 *     GreHintDxUpdate @ 0x1C024E738 (GreHintDxUpdate.c)
 *     GreSetHwndPresentFlags @ 0x1C024EBB4 (GreSetHwndPresentFlags.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C009CED4 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C009CF30 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2, HSPRITE a3)
{
  *(_QWORD *)this = 0LL;
  if ( a2 )
    a3 = DWMALTSPRITEREF::hspLookupWindow(a2);
  if ( a3 )
    DWMALTSPRITEREF::AltLockSpriteObj(this, a3);
  return this;
}
