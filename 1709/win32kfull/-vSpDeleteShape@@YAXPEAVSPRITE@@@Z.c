/*
 * XREFs of ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C000A15C
 * Callers:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000A004 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C000A3E8 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C025CEA8 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025D114 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0114930 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall vSpDeleteShape(struct SPRITE *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)a1 + 18) )
  {
    v3 = *((_QWORD *)a1 + 18);
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v3);
    *((_QWORD *)a1 + 18) = 0LL;
  }
  if ( *((_QWORD *)a1 + 16) && (*(_DWORD *)a1 & 0x40) == 0 )
  {
    v2 = (_QWORD *)SURFOBJ_TO_SURFACE_NOT_NULL();
    if ( (unsigned int)HmgQueryAltLock(*v2) == 1 )
      vSpDeleteSurface(*((SURFOBJ **)a1 + 16));
    *((_QWORD *)a1 + 16) = 0LL;
  }
}
