/*
 * XREFs of ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C0257980
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     GreHintSpriteShape @ 0x1C0023878 (GreHintSpriteShape.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00A1A50 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DE2C (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DE94 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C025DEFC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C025EB70 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 */

__int64 __fastcall GdiHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r15d
  HDEV v9; // r13
  BOOL v10; // r14d
  struct _SPRITESTATE *v11; // rcx
  struct _METASPRITE *MetaSprite; // rsi
  int v13; // r9d
  __int64 v14; // rbx
  __int128 *v15; // rcx
  __int64 v16; // r8
  struct SPRITE *Sprite; // rax
  struct SPRITE *v18; // rsi
  int v19; // ebx
  __int128 *v20; // rcx
  int v22; // [rsp+28h] [rbp-51h]
  HDEV v23; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v24[16]; // [rsp+38h] [rbp-41h] BYREF
  __int128 v25; // [rsp+48h] [rbp-31h] BYREF
  __int128 v26; // [rsp+58h] [rbp-21h]
  __int128 v27; // [rsp+68h] [rbp-11h]
  _OWORD v28[4]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned int v29; // [rsp+D8h] [rbp+5Fh]

  v23 = a1;
  v6 = 0;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v24, (struct PDEVOBJ *)&v23);
  v9 = v23;
  v10 = 0;
  v11 = (struct _SPRITESTATE *)(v23 + 18);
  if ( !*((_DWORD *)v23 + 35) )
  {
    Sprite = pSpGetSprite(v11, a2, 0LL);
    v18 = Sprite;
    if ( Sprite )
    {
      v19 = *(_DWORD *)Sprite;
      v29 = pSpHintSpriteShape(Sprite, a3, a4);
      if ( (v19 & 0x200) == 0 )
        v10 = (*(_DWORD *)v18 & 0x200) != 0;
      if ( a5 && !ERECTL::bEmpty((struct SPRITE *)((char *)v18 + 80)) )
      {
        v27 = *v20;
        v25 = v27;
        vSpAddAndCompactDirtyRect(v18, &v25);
      }
LABEL_24:
      if ( v10 )
        _InterlockedAdd(&glDelayedHintShape, 1u);
      v7 = v29;
    }
    goto LABEL_27;
  }
  MetaSprite = pSpGetMetaSprite(v11, a2, 0LL);
  if ( !MetaSprite || (LODWORD(v14) = 0, !v13) )
  {
LABEL_27:
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v24);
    return v7;
  }
  while ( 1 )
  {
    *(_QWORD *)&v25 = *((_QWORD *)MetaSprite + (unsigned int)v14 + 4);
    v22 = *(_DWORD *)v25 & 0x200;
    v29 = pSpHintSpriteShape((struct SPRITE *)v25, a3, a4);
    if ( !v29 )
      break;
    if ( !v22 && (*(_DWORD *)v25 & 0x200) != 0 )
      v10 = 1;
    if ( a5 && !ERECTL::bEmpty((ERECTL *)(v25 + 80)) )
    {
      v26 = *v15;
      v28[0] = v26;
      vSpAddAndCompactDirtyRect(v16, v28);
    }
    LODWORD(v14) = v14 + 1;
    if ( (unsigned int)v14 >= *((_DWORD *)v9 + 35) )
    {
      if ( a3 )
        *(_DWORD *)MetaSprite |= 0x40u;
      else
        *(_DWORD *)MetaSprite &= ~0x40u;
      goto LABEL_24;
    }
  }
  while ( (_DWORD)v14 )
  {
    v14 = (unsigned int)(v14 - 1);
    pSpHintSpriteShape(*((struct SPRITE **)MetaSprite + v14 + 4), 0LL, a4);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v24);
  return v6;
}
