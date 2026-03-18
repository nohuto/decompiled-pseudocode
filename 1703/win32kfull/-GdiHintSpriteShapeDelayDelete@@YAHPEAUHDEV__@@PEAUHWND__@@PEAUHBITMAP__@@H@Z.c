/*
 * XREFs of ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C0257B88
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007B200 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     ?pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DE60 (-pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DEC8 (-pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C025DEFC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 */

__int64 __fastcall GdiHintSpriteShapeDelayDelete(HDEV a1, HWND a2, HBITMAP a3, int a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // r12d
  HDEV v8; // r13
  int v9; // r14d
  struct _SPRITESTATE *v10; // rcx
  struct _METASPRITE *v11; // rsi
  int v12; // r9d
  __int64 v13; // rdi
  struct SPRITE *v14; // rcx
  struct SPRITE *v15; // rdi
  int v16; // ebx
  _BYTE v18[72]; // [rsp+20h] [rbp-48h] BYREF
  HDEV v19; // [rsp+70h] [rbp+8h] BYREF
  HBITMAP hsurf; // [rsp+80h] [rbp+18h]
  int v21; // [rsp+88h] [rbp+20h]

  v21 = a4;
  hsurf = a3;
  v19 = a1;
  v5 = 0;
  v6 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v18, (struct PDEVOBJ *)&v19);
  v8 = v19;
  v9 = 0;
  v10 = (struct _SPRITESTATE *)(v19 + 18);
  if ( !*((_DWORD *)v19 + 35) )
  {
    v15 = pSpGetSpriteDelayDelete(v10, a2, 0LL);
    v16 = *(_DWORD *)v15;
    v6 = pSpHintSpriteShape(v15, a3, 0);
    if ( (v16 & 0x200) == 0 && (*(_DWORD *)v15 & 0x200) != 0 )
    {
      v9 = 1;
LABEL_18:
      if ( v9 == 1 )
        _InterlockedAdd(&glDelayedHintShape, 1u);
    }
    goto LABEL_20;
  }
  v11 = pSpGetMetaSpriteDelayDelete(v10, a2, 0LL);
  if ( !v11 || (LODWORD(v13) = 0, !v12) )
  {
LABEL_20:
    v5 = v6;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v14 = (struct SPRITE *)*((_QWORD *)v11 + (unsigned int)v13 + 4);
    v21 = *(_DWORD *)v14 & 0x200;
    v6 = pSpHintSpriteShape(v14, hsurf, 0);
    if ( !v6 )
      break;
    if ( !v21 && (**((_DWORD **)v11 + (unsigned int)v13 + 4) & 0x200) != 0 )
      v9 = 1;
    LODWORD(v13) = v13 + 1;
    if ( (unsigned int)v13 >= *((_DWORD *)v8 + 35) )
    {
      if ( hsurf )
        *(_DWORD *)v11 |= 0x40u;
      else
        *(_DWORD *)v11 &= ~0x40u;
      goto LABEL_18;
    }
  }
  while ( (_DWORD)v13 )
  {
    v13 = (unsigned int)(v13 - 1);
    pSpHintSpriteShape(*((struct SPRITE **)v11 + v13 + 4), 0LL, 0);
  }
LABEL_21:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v18);
  return v5;
}
