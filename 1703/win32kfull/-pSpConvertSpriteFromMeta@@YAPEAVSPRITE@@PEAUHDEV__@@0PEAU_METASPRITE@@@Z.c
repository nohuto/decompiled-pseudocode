/*
 * XREFs of ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C025D7C0
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00A78A0 (vSpDynamicModeChange.c)
 * Callees:
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C025BB9C (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C025DC1C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C025DEFC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0260B20 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0260D84 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

struct SPRITE *__fastcall pSpConvertSpriteFromMeta(HDEV a1, _QWORD *a2, struct _METASPRITE *a3)
{
  HWND v3; // r11
  unsigned int v4; // ebx
  struct SPRITE *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // r14
  unsigned int v11; // r8d
  char *v12; // rcx
  __int64 v13; // r9
  struct SPRITE *Sprite; // rax
  __int64 v15; // rcx
  LONG v16; // r8d
  struct SPRITE *v17; // rcx
  __int64 v18; // rcx
  __int64 i; // rax
  struct _POINTL v21; // [rsp+48h] [rbp+10h] BYREF

  v3 = (HWND)*((_QWORD *)a3 + 1);
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
  {
    v9 = *((_DWORD *)a3 + 6);
    v10 = 0LL;
    v11 = 0;
    if ( v9 )
    {
      v12 = (char *)a3 + 32;
      v13 = v9;
      do
      {
        if ( *(_QWORD *)v12 && v11 < *(_DWORD *)(**(_QWORD **)(*(_QWORD *)v12 + 16LL) + 2124LL) )
        {
          v10 = *(_QWORD *)v12;
          v11 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)v12 + 16LL) + 2124LL);
        }
        v12 += 8;
        --v13;
      }
      while ( v13 );
      if ( v10 )
      {
        Sprite = pSpCreateSprite(a1, 0LL, v3, 0LL);
        v8 = Sprite;
        if ( Sprite )
        {
          bSpTransferShape(Sprite, (struct SPRITE *)v10);
          *((_QWORD *)v8 + 24) = *(_QWORD *)(v10 + 192);
          v15 = *(_QWORD *)(v10 + 16);
          *(_QWORD *)(v10 + 192) = 0LL;
          v16 = *(_DWORD *)(*(_QWORD *)v15 + 2604LL) + *(_DWORD *)(v10 + 116);
          v21.x = *(_DWORD *)(*(_QWORD *)v15 + 2600LL) + *(_DWORD *)(v10 + 112);
          v21.y = v16;
          if ( !(unsigned int)bSpUpdatePosition(v8, &v21, 0, 0) )
          {
            vSpDeleteSprite(v8);
            v8 = 0LL;
          }
          if ( v8 )
          {
            if ( (*(_DWORD *)v10 & 0x40) != 0 )
              pSpHintSpriteShape(v8, *(HBITMAP *)(v10 + 240), 0);
            if ( (*(_DWORD *)v10 & 0x100) != 0 )
            {
              *(_DWORD *)v8 |= 0x100u;
              vSpCreateExMirror(**((HDEV **)v8 + 2));
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)a3 + 6) )
  {
    do
    {
      v17 = (struct SPRITE *)*((_QWORD *)a3 + v4 + 4);
      if ( (*(_DWORD *)v17 & 0x40) != 0 )
        pSpHintSpriteShape(v17, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + v4++ + 4));
    }
    while ( v4 < *((_DWORD *)a3 + 6) );
  }
  v18 = a2[19];
  if ( (struct _METASPRITE *)v18 == a3 )
  {
    a2[19] = *((_QWORD *)a3 + 2);
  }
  else
  {
    for ( i = *(_QWORD *)(v18 + 16); (struct _METASPRITE *)i != a3; i = *(_QWORD *)(i + 16) )
      v18 = i;
    *(_QWORD *)(v18 + 16) = *((_QWORD *)a3 + 2);
  }
  Win32FreePool(a3);
  return v8;
}
