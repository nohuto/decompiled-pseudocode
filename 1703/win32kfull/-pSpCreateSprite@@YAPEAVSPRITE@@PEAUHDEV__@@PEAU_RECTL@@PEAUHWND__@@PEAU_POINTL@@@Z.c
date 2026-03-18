/*
 * XREFs of ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C025DC1C
 * Callers:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C02572D8 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02582E0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C025D7C0 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C025D980 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C025E27C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C025E648 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C0261C84 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0263F1C (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

struct SPRITE *__fastcall pSpCreateSprite(HDEV a1, struct _RECTL *a2, HWND a3, struct _RECTL *a4)
{
  _DWORD *v4; // rbx
  HDEV v8; // rdi
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  LONG *p_top; // r8
  LONG top; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE v18[16]; // [rsp+20h] [rbp-E8h] BYREF
  struct _SPRITESTATE *v19[24]; // [rsp+30h] [rbp-D8h] BYREF
  HDEV v20; // [rsp+110h] [rbp+8h] BYREF

  v4 = 0LL;
  v20 = a1;
  if ( ((_DWORD)a1[8] & 1) != 0 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v18, (struct PDEVOBJ *)&v20);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v19, (struct PDEVOBJ *)&v20);
    v8 = v20 + 18;
    v9 = PALLOCMEM2(0x110uLL, 544240455LL, 1);
    v4 = v9;
    if ( v9 )
    {
      if ( a2 )
      {
        p_top = &a2->top;
        v9[44] = a2->right - a2->left;
        v9[45] = a2->bottom - a2->top;
        if ( a4 )
          a2 = a4;
        v9[28] = a2->left;
        if ( a4 )
          top = a4->top;
        else
          top = *p_top;
        v4[29] = top;
      }
      else
      {
        v9[44] = 0;
        v9[45] = 0;
        v9[28] = 0x80000000;
        v9[29] = 0x80000000;
      }
      *v4 = 0;
      *((_QWORD *)v4 + 2) = v8;
      v4[1] = 4;
      v4[21] = 0x80000000;
      v4[20] = 0x80000000;
      v4[23] = 0x80000000;
      v4[22] = 0x80000000;
      v15 = *((_QWORD *)v8 + 137);
      if ( *((_QWORD *)v8 + 2) == v15 )
      {
        *((_QWORD *)v4 + 3) = v15;
        if ( v15 )
          *(_QWORD *)(v15 + 32) = v4;
        else
          *((_QWORD *)v8 + 3) = v4;
        *((_QWORD *)v8 + 2) = v4;
      }
      else if ( v15 )
      {
        *(_QWORD *)(*(_QWORD *)(v15 + 32) + 24LL) = v4;
        *((_QWORD *)v4 + 4) = *(_QWORD *)(v15 + 32);
        *((_QWORD *)v4 + 3) = v15;
        *(_QWORD *)(v15 + 32) = v4;
      }
      else
      {
        *((_QWORD *)v4 + 4) = *((_QWORD *)v8 + 3);
        *(_QWORD *)(*((_QWORD *)v8 + 3) + 24LL) = v4;
        *((_QWORD *)v8 + 3) = v4;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)v8);
      v16 = *((_QWORD *)v8 + 4);
      *((_QWORD *)v8 + 4) = v4;
      *((_QWORD *)v4 + 5) = v16;
      if ( v16 )
        *(_QWORD *)(v16 + 48) = v4;
      *((_QWORD *)v4 + 9) = a3;
      vSpOrderInY((struct SPRITE *)v4);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v19, v10, v11, v12);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v18);
  }
  return (struct SPRITE *)v4;
}
