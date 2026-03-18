/*
 * XREFs of ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C025D980
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00A78A0 (vSpDynamicModeChange.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C025BB9C (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C025DC1C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C025DEFC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0260B20 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0260D84 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpConvertSpriteToMeta(_DWORD *a1, _DWORD *a2, struct SPRITE *a3)
{
  unsigned int v3; // edi
  _QWORD *v6; // rbx
  int v7; // ecx
  unsigned int v8; // r15d
  struct SPRITE *Sprite; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct SPRITE *v13; // r13
  LONG v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int i; // r15d
  _DWORD *v19; // rax
  struct _SPRITESTATE *v21[30]; // [rsp+20h] [rbp-99h] BYREF
  HDEV v23; // [rsp+130h] [rbp+77h] BYREF
  struct _POINTL v24; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  v6 = 0LL;
  if ( *((_QWORD *)a3 + 9) )
  {
    v7 = a1[35];
    if ( v7 )
    {
      v6 = PALLOCMEM2((unsigned int)(8 * v7 + 40), 1836086087LL, 0);
      if ( v6 )
      {
        v8 = 0;
        if ( a1[35] )
        {
          while ( 1 )
          {
            v23 = *(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v8);
            SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v21, (struct PDEVOBJ *)&v23);
            Sprite = pSpCreateSprite(v23, 0LL, *((HWND *)a3 + 9), 0LL);
            v13 = Sprite;
            if ( !Sprite )
              break;
            bSpTransferShape(Sprite, a3);
            *((_QWORD *)v13 + 24) = *((_QWORD *)a3 + 24);
            *((_QWORD *)a3 + 24) = 0LL;
            v14 = *((_DWORD *)a3 + 29) + a2[651] - *((_DWORD *)v23 + 651);
            v24.x = *((_DWORD *)a3 + 28) + a2[650] - *((_DWORD *)v23 + 650);
            v24.y = v14;
            if ( !(unsigned int)bSpUpdatePosition(v13, &v24, 0, 0) )
            {
              vSpDeleteSprite(v13);
              break;
            }
            v6[v8 + 4] = v13;
            *((_QWORD *)v13 + 1) = v6;
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v21, v15, v16, v17);
            if ( ++v8 >= a1[35] )
              goto LABEL_8;
          }
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v21, v10, v11, v12);
          while ( v8 )
            vSpDeleteSprite((struct SPRITE *)v6[--v8 + 4]);
          Win32FreePool(v6);
          v6 = 0LL;
        }
        else
        {
LABEL_8:
          v6[1] = *((_QWORD *)a3 + 9);
          *((_DWORD *)v6 + 6) = a1[35];
          *(_DWORD *)v6 = 0;
          v6[2] = *((_QWORD *)a1 + 19);
          *((_QWORD *)a1 + 19) = v6;
          if ( (*(_DWORD *)a3 & 0x40) != 0 )
          {
            for ( i = 0; i < a1[35]; ++i )
              pSpHintSpriteShape((struct SPRITE *)v6[i + 4], *((HBITMAP *)a3 + 30), 0);
            *(_DWORD *)v6 |= 0x40u;
          }
          if ( (*(_DWORD *)a3 & 0x100) != 0 )
          {
            if ( a1[35] )
            {
              do
              {
                v19 = (_DWORD *)v6[v3 + 4];
                *v19 |= 0x100u;
                vSpCreateExMirror(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v3++));
              }
              while ( v3 < a1[35] );
            }
            *(_DWORD *)v6 |= 0x100u;
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
    pSpHintSpriteShape(a3, 0LL, 0);
  vSpDeleteSprite(a3);
  return (struct _METASPRITE *)v6;
}
