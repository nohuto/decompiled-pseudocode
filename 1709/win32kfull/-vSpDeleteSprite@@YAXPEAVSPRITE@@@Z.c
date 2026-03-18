/*
 * XREFs of ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000A004
 * Callers:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0009EC8 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0009F50 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     vSpDynamicModeChange @ 0x1C00ECC20 (vSpDynamicModeChange.c)
 *     ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C01147C4 (-vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0258DF0 (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0259810 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C025D970 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C025DB34 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C025DED0 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C025E000 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C025E3CC (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C000A15C (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C000A194 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008F1D0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0114904 (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0114930 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall vSpDeleteSprite(struct SPRITE *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  SURFOBJ **v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  _BYTE v15[192]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v16; // [rsp+F0h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = *((_QWORD *)a1 + 2);
    v16 = *(HDEV *)v1;
    if ( !gbGreSessionCleanup )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v15, (struct PDEVOBJ *)&v16);
      bSpUpdatePosition(a1, 0LL, 0, 0);
      SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v15);
    }
    if ( *(struct SPRITE **)(v1 + 16) == a1 )
    {
      *(_QWORD *)(v1 + 16) = *((_QWORD *)a1 + 3);
      v3 = *((_QWORD *)a1 + 3);
      if ( v3 )
        *(_QWORD *)(v3 + 32) = 0LL;
      if ( !*(_QWORD *)(v1 + 16) )
        *(_QWORD *)(v1 + 24) = 0LL;
    }
    else
    {
      v14 = *((_QWORD *)a1 + 4);
      if ( *(struct SPRITE **)(v1 + 24) == a1 )
        *(_QWORD *)(v1 + 24) = v14;
      else
        *(_QWORD *)(*((_QWORD *)a1 + 3) + 32LL) = v14;
      *(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) = *((_QWORD *)a1 + 3);
    }
    v4 = *((_QWORD *)a1 + 5);
    v5 = *((_QWORD *)a1 + 6);
    if ( v4 )
      *(_QWORD *)(v4 + 48) = v5;
    if ( v5 )
      *(_QWORD *)(v5 + 40) = v4;
    else
      *(_QWORD *)(v1 + 32) = v4;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      vSpDeleteExMirror(*(HDEV *)v1);
    vSpFreeClipResources(a1);
    REGION::vDeleteREGION(*((REGION **)a1 + 24));
    vSpDeleteShape(a1);
    vSpDeleteSurface(*((SURFOBJ **)a1 + 20));
    v8 = *((_QWORD *)a1 + 15);
    if ( v8 )
    {
      bDeleteSurface(*(_QWORD *)(v8 + 8));
      *((_QWORD *)a1 + 15) = 0LL;
    }
    v9 = *((_QWORD *)a1 + 31);
    if ( v9 )
      Win32FreePool(v9, v6, v7);
    v10 = (SURFOBJ **)(v1 + 160);
    v11 = 64LL;
    do
    {
      vSpDeleteSurface(*v10);
      *v10++ = 0LL;
      --v11;
    }
    while ( v11 );
    RtlClearAllBits((PRTL_BITMAP)(v1 + 672));
    Win32FreePool(a1, v12, v13);
  }
}
