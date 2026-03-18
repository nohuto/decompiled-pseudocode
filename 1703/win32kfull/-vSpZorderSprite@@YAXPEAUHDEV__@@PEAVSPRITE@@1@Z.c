/*
 * XREFs of ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0265F1C
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C0257CEC (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C0258A10 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00A7D70 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A843C (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02631B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0263F1C (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpZorderSprite(_QWORD *a1, struct SPRITE *a2, struct SPRITE *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  struct _POINTL *v13; // rdx
  struct _SPRITESTATE *v14[24]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD *v15; // [rsp+F0h] [rbp+8h] BYREF

  v15 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v14, (struct PDEVOBJ *)&v15);
  v8 = a1[11];
  if ( a2 && v8 )
  {
    if ( (struct SPRITE *)v8 == a2 )
    {
      a1[11] = *(_QWORD *)(v8 + 24);
      v9 = *(_QWORD *)(v8 + 24);
      if ( v9 )
        *(_QWORD *)(v9 + 32) = 0LL;
      else
        a1[12] = 0LL;
      *(_QWORD *)(v8 + 24) = 0LL;
      *(_QWORD *)(v8 + 32) = 0LL;
    }
    else
    {
      v10 = *((_QWORD *)a2 + 4);
      if ( (struct SPRITE *)a1[12] == a2 )
        a1[12] = v10;
      else
        *(_QWORD *)(*((_QWORD *)a2 + 3) + 32LL) = v10;
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL) = *((_QWORD *)a2 + 3);
      *((_QWORD *)a2 + 3) = 0LL;
      *((_QWORD *)a2 + 4) = 0LL;
    }
    if ( !*((_QWORD *)a2 + 3) && !*((_QWORD *)a2 + 4) )
    {
      if ( a3 )
      {
        *((_QWORD *)a2 + 3) = *((_QWORD *)a3 + 3);
        v12 = *((_QWORD *)a3 + 3);
        if ( v12 )
          *(_QWORD *)(v12 + 32) = a2;
        *((_QWORD *)a3 + 3) = a2;
        *((_QWORD *)a2 + 4) = a3;
        if ( (struct SPRITE *)a1[12] == a3 )
          a1[12] = a2;
      }
      else
      {
        *((_QWORD *)a2 + 3) = a1[11];
        v11 = a1[11];
        if ( v11 )
          *(_QWORD *)(v11 + 32) = a2;
        else
          a1[12] = a2;
        a1[11] = a2;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)(a1 + 9));
      vSpRemoveAllSpriteOverlapPresents(a1, v13);
      ++giSpriteUniqueness;
      *((_DWORD *)a1 + 49) = 0;
      vSpComputeSpriteRanges((struct _SPRITESTATE *)(a1 + 9));
      vSpRedrawSprite(a2);
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v14, v8, v6, v7);
}
