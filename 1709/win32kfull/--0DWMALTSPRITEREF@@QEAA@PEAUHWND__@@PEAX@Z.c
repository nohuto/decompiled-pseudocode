/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00E785C
 * Callers:
 *     GreHintSpriteBlt @ 0x1C00E4BB4 (GreHintSpriteBlt.c)
 *     GreGetDxSharedSurface @ 0x1C00E7634 (GreGetDxSharedSurface.c)
 *     GreGetDxRgn @ 0x1C024FA88 (GreGetDxRgn.c)
 *     GreGetHwndUpdateIds @ 0x1C024FCE4 (GreGetHwndUpdateIds.c)
 *     GreHintDxUpdate @ 0x1C02501AC (GreHintDxUpdate.c)
 *     GreSetHwndPresentFlags @ 0x1C0250628 (GreSetHwndPresentFlags.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00E7898 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00E78F4 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
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
