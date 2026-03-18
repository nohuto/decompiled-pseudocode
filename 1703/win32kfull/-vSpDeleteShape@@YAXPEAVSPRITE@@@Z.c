/*
 * XREFs of ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0260D10
 * Callers:
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C025BDD0 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025C9AC (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C025DEFC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0260D84 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010B384 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall vSpDeleteShape(struct SPRITE *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)a1 + 18) )
  {
    v4 = *((_QWORD *)a1 + 18);
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v4);
    *((_QWORD *)a1 + 18) = 0LL;
  }
  v2 = *((_QWORD *)a1 + 16);
  if ( v2 && (*(_DWORD *)a1 & 0x40) == 0 )
  {
    v3 = (_QWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(v2);
    if ( (unsigned int)HmgQueryAltLock(*v3) == 1 )
      vSpDeleteSurface(*((SURFOBJ **)a1 + 16));
    *((_QWORD *)a1 + 16) = 0LL;
  }
}
