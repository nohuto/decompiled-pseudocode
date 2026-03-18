/*
 * XREFs of ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1C0263E98
 * Callers:
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C025DEFC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0026EC0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall vSpRemoveShapeHint(struct SPRITE *a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    EngUnlockSurface(*((SURFOBJ **)a1 + 16));
    *((_QWORD *)a1 + 16) = 0LL;
    *((_QWORD *)a1 + 30) = 0LL;
    *(_DWORD *)a1 &= ~0x40u;
    if ( a2 )
      *(_DWORD *)a1 &= ~0x80u;
    REGION::vDeleteREGION(*((REGION **)a1 + 24));
    v4 = *((_QWORD *)a1 + 18);
    *((_QWORD *)a1 + 24) = 0LL;
    v5 = v4;
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v5);
    *((_QWORD *)a1 + 18) = 0LL;
  }
}
