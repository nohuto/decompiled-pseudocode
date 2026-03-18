/*
 * XREFs of ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0260838
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C000A7F0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C025D970 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C025DB34 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C025E000 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C025E3CC (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     GreDisableMirrorRendering @ 0x1C02654C8 (GreDisableMirrorRendering.c)
 * Callees:
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00ED740 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 */

void __fastcall vSpCreateExMirror(HDEV a1)
{
  if ( a1 )
  {
    if ( !*((_QWORD *)a1 + 178) )
      *((_QWORD *)a1 + 178) = psoSpCreateSurface(
                                (struct _SPRITESTATE *)(a1 + 18),
                                0,
                                *(_DWORD *)(*((_QWORD *)a1 + 14) + 32LL),
                                *(_DWORD *)(*((_QWORD *)a1 + 14) + 36LL));
  }
}
