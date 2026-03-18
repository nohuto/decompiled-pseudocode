/*
 * XREFs of ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C025D970
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00ECC20 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000A004 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C000A3E8 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C000A464 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C025CC74 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0260838 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct SPRITE *__fastcall pSpConvertSpriteFromMeta(HDEV a1, struct _METASPRITE *a2, struct _METASPRITE *a3)
{
  HWND v3; // r11
  unsigned int v4; // ebx
  struct _METASPRITE *v6; // r15
  struct SPRITE *v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // r14
  unsigned int v10; // r8d
  __int64 v11; // r10
  struct SPRITE *Sprite; // rax
  __int64 v13; // rcx
  LONG v14; // r8d
  struct SPRITE *v15; // rcx
  __int64 v16; // rcx
  __int64 i; // rax
  struct _POINTL v19; // [rsp+48h] [rbp+10h] BYREF

  v3 = (HWND)*((_QWORD *)a3 + 1);
  v4 = 0;
  v6 = a2;
  v7 = 0LL;
  if ( v3 )
  {
    v8 = *((_DWORD *)a3 + 6);
    v9 = 0LL;
    v10 = 0;
    if ( v8 )
    {
      a2 = (struct _METASPRITE *)((char *)a3 + 32);
      v11 = v8;
      do
      {
        if ( *(_QWORD *)a2 && v10 < *(_DWORD *)(**(_QWORD **)(*(_QWORD *)a2 + 16LL) + 2124LL) )
        {
          v9 = *(_QWORD *)a2;
          v10 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)a2 + 16LL) + 2124LL);
        }
        a2 = (struct _METASPRITE *)((char *)a2 + 8);
        --v11;
      }
      while ( v11 );
      if ( v9 )
      {
        Sprite = pSpCreateSprite(a1, 0LL, v3, 0LL);
        v7 = Sprite;
        if ( Sprite )
        {
          bSpTransferShape(Sprite, (struct SPRITE *)v9);
          *((_QWORD *)v7 + 24) = *(_QWORD *)(v9 + 192);
          v13 = *(_QWORD *)(v9 + 16);
          *(_QWORD *)(v9 + 192) = 0LL;
          v14 = *(_DWORD *)(*(_QWORD *)v13 + 2604LL) + *(_DWORD *)(v9 + 116);
          v19.x = *(_DWORD *)(*(_QWORD *)v13 + 2600LL) + *(_DWORD *)(v9 + 112);
          v19.y = v14;
          if ( !(unsigned int)bSpUpdatePosition(v7, &v19, 0, 0) )
          {
            vSpDeleteSprite(v7);
            v7 = 0LL;
          }
          if ( v7 )
          {
            if ( (*(_DWORD *)v9 & 0x40) != 0 )
              pSpHintSpriteShape(v7, *(HSURF *)(v9 + 240), 0);
            if ( (*(_DWORD *)v9 & 0x100) != 0 )
            {
              *(_DWORD *)v7 |= 0x100u;
              vSpCreateExMirror(**((HDEV **)v7 + 2));
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
      v15 = (struct SPRITE *)*((_QWORD *)a3 + v4 + 4);
      if ( (*(_DWORD *)v15 & 0x40) != 0 )
        pSpHintSpriteShape(v15, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + v4++ + 4));
    }
    while ( v4 < *((_DWORD *)a3 + 6) );
  }
  v16 = *((_QWORD *)v6 + 19);
  if ( (struct _METASPRITE *)v16 == a3 )
  {
    *((_QWORD *)v6 + 19) = *((_QWORD *)a3 + 2);
  }
  else
  {
    for ( i = *(_QWORD *)(v16 + 16); (struct _METASPRITE *)i != a3; i = *(_QWORD *)(i + 16) )
      v16 = i;
    *(_QWORD *)(v16 + 16) = *((_QWORD *)a3 + 2);
  }
  Win32FreePool(a3, a2);
  return v7;
}
