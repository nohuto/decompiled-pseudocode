/*
 * XREFs of ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C000A308
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0044FBC (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C0045C40 (GreTransferDwmStateToSpriteState.c)
 *     GreHintSpriteShape @ 0x1C00911BC (GreHintSpriteShape.c)
 * Callees:
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C000A3E8 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C000AA10 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DE34 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C025E8B0 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 */

__int64 __fastcall GdiHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r15d
  HDEV v9; // r13
  BOOL v10; // r14d
  struct _SPRITESTATE *v11; // rcx
  struct SPRITE *Sprite; // rax
  struct SPRITE *v13; // rsi
  int v14; // ebx
  struct _METASPRITE *MetaSprite; // rsi
  int v17; // r9d
  __int64 v18; // rbx
  __int128 *v19; // rcx
  __int64 v20; // r8
  __int128 *v21; // rcx
  int v22; // [rsp+20h] [rbp-60h]
  HDEV v23; // [rsp+28h] [rbp-58h] BYREF
  __int128 v24; // [rsp+30h] [rbp-50h]
  _BYTE v25[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v26; // [rsp+50h] [rbp-30h]
  __int128 v27; // [rsp+60h] [rbp-20h] BYREF
  __int128 v28; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+40h]

  v23 = a1;
  v6 = 0;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v25, (struct PDEVOBJ *)&v23);
  v9 = v23;
  v10 = 0;
  v11 = (struct _SPRITESTATE *)(v23 + 18);
  if ( !*((_DWORD *)v23 + 35) )
  {
    Sprite = pSpGetSprite(v11, a2, 0LL);
    v13 = Sprite;
    if ( Sprite )
    {
      v14 = *(_DWORD *)Sprite;
      v29 = pSpHintSpriteShape(Sprite, a3, a4);
      if ( (v14 & 0x200) == 0 )
        v10 = (*(_DWORD *)v13 & 0x200) != 0;
      if ( a5 && !(unsigned int)ERECTL::bEmpty((struct SPRITE *)((char *)v13 + 80)) )
      {
        v24 = *v21;
        v28 = v24;
        vSpAddAndCompactDirtyRect(v13, &v28);
      }
LABEL_6:
      if ( v10 )
        _InterlockedAdd(&glDelayedHintShape, 1u);
      v7 = v29;
    }
    goto LABEL_9;
  }
  MetaSprite = pSpGetMetaSprite(v11, a2, 0LL);
  if ( !MetaSprite || (LODWORD(v18) = 0, !v17) )
  {
LABEL_9:
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v25);
    return v7;
  }
  while ( 1 )
  {
    *(_QWORD *)&v24 = *((_QWORD *)MetaSprite + (unsigned int)v18 + 4);
    v22 = *(_DWORD *)v24 & 0x200;
    v29 = pSpHintSpriteShape((struct SPRITE *)v24, a3, a4);
    if ( !v29 )
      break;
    if ( !v22 && (*(_DWORD *)v24 & 0x200) != 0 )
      v10 = 1;
    if ( a5 && !(unsigned int)ERECTL::bEmpty((ERECTL *)(v24 + 80)) )
    {
      v26 = *v19;
      v27 = v26;
      vSpAddAndCompactDirtyRect(v20, &v27);
    }
    LODWORD(v18) = v18 + 1;
    if ( (unsigned int)v18 >= *((_DWORD *)v9 + 35) )
    {
      if ( a3 )
        *(_DWORD *)MetaSprite |= 0x40u;
      else
        *(_DWORD *)MetaSprite &= ~0x40u;
      goto LABEL_6;
    }
  }
  while ( (_DWORD)v18 )
  {
    v18 = (unsigned int)(v18 - 1);
    pSpHintSpriteShape(*((struct SPRITE **)MetaSprite + v18 + 4), 0LL, a4);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v25);
  return v6;
}
