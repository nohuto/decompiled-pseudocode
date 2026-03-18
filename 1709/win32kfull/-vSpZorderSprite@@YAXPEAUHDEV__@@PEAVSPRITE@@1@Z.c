/*
 * XREFs of ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C000AA44
 * Callers:
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C000A990 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C025921C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 * Callees:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000AB4C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C000ABE4 (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00ED1C4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00ED3B0 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpZorderSprite(HDEV a1, struct SPRITE *a2, struct SPRITE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v11[192]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v12; // [rsp+F0h] [rbp+8h] BYREF

  v12 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v11, (struct PDEVOBJ *)&v12);
  v6 = *((_QWORD *)a1 + 11);
  if ( a2 && v6 )
  {
    if ( (struct SPRITE *)v6 == a2 )
    {
      *((_QWORD *)a1 + 11) = *(_QWORD *)(v6 + 24);
      v7 = *(_QWORD *)(v6 + 24);
      if ( v7 )
        *(_QWORD *)(v7 + 32) = 0LL;
      else
        *((_QWORD *)a1 + 12) = 0LL;
      *(_QWORD *)(v6 + 24) = 0LL;
      *(_QWORD *)(v6 + 32) = 0LL;
    }
    else
    {
      v9 = *((_QWORD *)a2 + 4);
      if ( *((struct SPRITE **)a1 + 12) == a2 )
        *((_QWORD *)a1 + 12) = v9;
      else
        *(_QWORD *)(*((_QWORD *)a2 + 3) + 32LL) = v9;
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL) = *((_QWORD *)a2 + 3);
      *((_QWORD *)a2 + 3) = 0LL;
      *((_QWORD *)a2 + 4) = 0LL;
    }
    if ( !*((_QWORD *)a2 + 3) && !*((_QWORD *)a2 + 4) )
    {
      if ( a3 )
      {
        *((_QWORD *)a2 + 3) = *((_QWORD *)a3 + 3);
        v10 = *((_QWORD *)a3 + 3);
        if ( v10 )
          *(_QWORD *)(v10 + 32) = a2;
        *((_QWORD *)a3 + 3) = a2;
        *((_QWORD *)a2 + 4) = a3;
        if ( *((struct SPRITE **)a1 + 12) == a3 )
          *((_QWORD *)a1 + 12) = a2;
      }
      else
      {
        *((_QWORD *)a2 + 3) = *((_QWORD *)a1 + 11);
        v8 = *((_QWORD *)a1 + 11);
        if ( v8 )
          *(_QWORD *)(v8 + 32) = a2;
        else
          *((_QWORD *)a1 + 12) = a2;
        *((_QWORD *)a1 + 11) = a2;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)(a1 + 18));
      vSpRemoveAllSpriteOverlapPresents(a1);
      ++giSpriteUniqueness;
      *((_DWORD *)a1 + 49) = 0;
      vSpComputeSpriteRanges((struct _SPRITESTATE *)(a1 + 18));
      vSpRedrawSprite(a2);
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v11);
}
