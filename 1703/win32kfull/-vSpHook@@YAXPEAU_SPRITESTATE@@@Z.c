/*
 * XREFs of ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A51E4
 * Callers:
 *     bSpEnableSprites @ 0x1C00A4E80 (bSpEnableSprites.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C01108A0 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7860 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A843C (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHook(struct _SPRITESTATE *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  bool v4; // zf

  v1 = *(_QWORD **)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 2568LL);
  *((_DWORD *)a1 + 28) = 1;
  *((_DWORD *)a1 + 27) = *(_DWORD *)(v3 + 112) | 0x3A5EF;
  v1[354] = SpStrokeAndFillPath;
  v1[352] = SpStrokePath;
  v1[353] = SpFillPath;
  v1[356] = SpBitBlt;
  v1[357] = SpCopyBits;
  v1[358] = SpStretchBlt;
  v1[361] = SpTextOut;
  v1[369] = SpLineTo;
  v1[412] = SpTransparentBlt;
  v1[409] = SpAlphaBlend;
  v1[408] = SpPlgBlt;
  v1[406] = SpGradientFill;
  v1[428] = SpDrawStream;
  v1[407] = SpStretchBltROP;
  v1[378] = SpSaveScreenBits;
  v4 = *((_DWORD *)a1 + 31) == 0;
  *((_DWORD *)a1 + 2) = 1;
  if ( v4 )
  {
    SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)a1 + 128));
    vSpComputeSpriteRanges(a1);
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)a1 + 128));
  }
}
