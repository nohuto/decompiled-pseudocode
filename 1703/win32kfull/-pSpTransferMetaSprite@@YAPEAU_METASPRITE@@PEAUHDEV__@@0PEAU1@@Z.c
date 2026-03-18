/*
 * XREFs of ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C025E27C
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

struct HDEV__ *__fastcall pSpTransferMetaSprite(_DWORD *a1, HDEV a2, struct _METASPRITE *a3)
{
  int v3; // r12d
  HDEV v4; // r14
  struct HDEV__ *v5; // rbx
  HDEV v7; // r15
  size_t v8; // rcx
  HBITMAP v9; // rsi
  unsigned int v10; // r11d
  int v11; // r12d
  __int64 v12; // r9
  char v13; // r13
  int v14; // r12d
  int v15; // r13d
  __int64 v16; // r8
  struct SPRITE *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // r15
  __int64 v22; // rdx
  struct SPRITE *Sprite; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  LONG v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  HBITMAP v32; // r15
  struct SPRITE *v33; // rcx
  __int64 j; // rsi
  __int64 k; // rsi
  struct SPRITE *v36; // rcx
  __int64 v37; // rcx
  __int64 m; // rax
  __int64 n; // rsi
  struct SPRITE *v40; // rcx
  HDEV v42; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v43; // [rsp+28h] [rbp-D8h]
  __int64 v44; // [rsp+30h] [rbp-D0h] BYREF
  struct _POINTL v45; // [rsp+38h] [rbp-C8h] BYREF
  HBITMAP hsurf; // [rsp+40h] [rbp-C0h]
  struct _SPRITESTATE *v47[24]; // [rsp+50h] [rbp-B0h] BYREF
  struct _SPRITESTATE *v48[32]; // [rsp+110h] [rbp+10h] BYREF
  int v49; // [rsp+220h] [rbp+120h]
  int i; // [rsp+230h] [rbp+130h]
  struct SPRITE *v52; // [rsp+238h] [rbp+138h]

  v3 = 0;
  v4 = (HDEV)(a1 + 18);
  v5 = 0LL;
  v49 = 0;
  v7 = a2;
  if ( *((_QWORD *)a3 + 1) )
  {
    v8 = (unsigned int)(8 * a1[35] + 40);
    if ( (*(_DWORD *)a3 & 4) == 0 )
    {
      v5 = (struct HDEV__ *)PALLOCMEM2(v8, 1836086087LL, 1);
      if ( v5 )
      {
        v52 = 0LL;
        v9 = 0LL;
        v43 = 0LL;
        v10 = 0;
        v11 = *(_DWORD *)a3;
        v12 = 0LL;
        v13 = *(_DWORD *)a3;
        hsurf = 0LL;
        v14 = v11 & 0x100;
        v15 = v13 & 0x40;
        for ( i = v14; (unsigned int)v12 < *((_DWORD *)v4 + 17); v12 = (unsigned int)(v12 + 1) )
        {
          v16 = 0LL;
          if ( *((_DWORD *)a3 + 6) )
          {
            do
            {
              v17 = (struct SPRITE *)*((_QWORD *)a3 + v16 + 4);
              if ( v17 )
              {
                if ( v15 && !v9 )
                  v9 = (HBITMAP)*((_QWORD *)v17 + 30);
                v18 = (_QWORD *)*((_QWORD *)v17 + 2);
                v19 = *v18;
                if ( v4 == (HDEV)v18 )
                {
                  *((_QWORD *)v5 + v12 + 4) = v17;
                  *((_QWORD *)a3 + v16 + 4) = 0LL;
                  *((_QWORD *)v17 + 1) = v5;
                }
                if ( v10 < *(_DWORD *)(v19 + 2124) )
                {
                  v52 = v17;
                  v10 = *(_DWORD *)(v19 + 2124);
                  v43 = v19;
                }
              }
              v16 = (unsigned int)(v16 + 1);
            }
            while ( (unsigned int)v16 < *((_DWORD *)a3 + 6) );
            hsurf = v9;
          }
        }
        *((_QWORD *)v5 + 1) = *((_QWORD *)a3 + 1);
        v5[6] = v4[17];
        v20 = v15 != 0 ? 0x40 : 0;
        *(_DWORD *)v5 = v20;
        if ( v14 )
          *(_DWORD *)v5 = v20 | 0x100;
        v21 = 0LL;
        if ( *((_DWORD *)v5 + 6) )
        {
          while ( 1 )
          {
            if ( !*((_QWORD *)v5 + v21 + 4) )
            {
              v42 = *(HDEV *)(*((_QWORD *)v4 + 9) + 8 * v21);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v48, (struct PDEVOBJ *)&v42);
              Sprite = pSpCreateSprite(v42, 0LL, *((HWND *)a3 + 1), 0LL);
              if ( Sprite )
              {
                v44 = v43;
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v47, (struct PDEVOBJ *)&v44);
                bSpTransferShape(Sprite, v52);
                v26 = v44;
                *((_QWORD *)Sprite + 24) = *((_QWORD *)v52 + 24);
                *((_QWORD *)v52 + 24) = 0LL;
                v27 = *((_DWORD *)v52 + 29) + *(_DWORD *)(v26 + 2604) - *((_DWORD *)v42 + 651);
                v45.x = *((_DWORD *)v52 + 28) + *(_DWORD *)(v26 + 2600) - *((_DWORD *)v42 + 650);
                v45.y = v27;
                if ( (unsigned int)bSpUpdatePosition(Sprite, &v45, 0, 0) )
                {
                  v3 = v49;
                  *((_QWORD *)v5 + v21 + 4) = Sprite;
                  *((_QWORD *)Sprite + 1) = v5;
                }
                else
                {
                  vSpDeleteSprite(Sprite);
                  v3 = 1;
                  v49 = 1;
                }
                SPRITEDDIACCESS::~SPRITEDDIACCESS(v47, v28, v29, v30);
              }
              else
              {
                v3 = 1;
                v49 = 1;
              }
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v48, v22, v24, v25);
              if ( v3 )
                break;
            }
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= *((_DWORD *)v5 + 6) )
            {
              v14 = i;
              goto LABEL_30;
            }
          }
        }
        else
        {
LABEL_30:
          *((_QWORD *)v5 + 2) = *((_QWORD *)v4 + 10);
          *((_QWORD *)v4 + 10) = v5;
          if ( v15 )
          {
            v31 = 0LL;
            if ( *((_DWORD *)v5 + 6) )
            {
              v32 = hsurf;
              do
              {
                v33 = (struct SPRITE *)*((_QWORD *)v5 + v31 + 4);
                if ( (*(_DWORD *)v33 & 0x40) == 0 )
                  pSpHintSpriteShape(v33, (HSURF)v32, 0);
                v31 = (unsigned int)(v31 + 1);
              }
              while ( (unsigned int)v31 < *((_DWORD *)v5 + 6) );
            }
          }
          if ( v14 )
          {
            for ( j = 0LL; (unsigned int)j < *((_DWORD *)v5 + 6); j = (unsigned int)(j + 1) )
            {
              if ( (**((_DWORD **)v5 + j + 4) & 0x100) == 0 )
              {
                vSpCreateExMirror(*(HDEV *)v4);
                **((_DWORD **)v5 + j + 4) |= 0x100u;
              }
            }
          }
          v3 = v49;
        }
        v7 = a2;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a3 + 6); k = (unsigned int)(k + 1) )
  {
    v36 = (struct SPRITE *)*((_QWORD *)a3 + k + 4);
    if ( v36 )
    {
      if ( (*(_DWORD *)v36 & 0x40) != 0 )
        pSpHintSpriteShape(v36, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + k + 4));
    }
  }
  v37 = *((_QWORD *)v7 + 19);
  if ( (struct _METASPRITE *)v37 == a3 )
  {
    *((_QWORD *)v7 + 19) = *((_QWORD *)a3 + 2);
  }
  else
  {
    for ( m = *(_QWORD *)(v37 + 16); (struct _METASPRITE *)m != a3; m = *(_QWORD *)(m + 16) )
      v37 = m;
    *(_QWORD *)(v37 + 16) = *((_QWORD *)a3 + 2);
  }
  if ( v3 )
  {
    for ( n = 0LL; (unsigned int)n < *((_DWORD *)v5 + 6); n = (unsigned int)(n + 1) )
    {
      v40 = (struct SPRITE *)*((_QWORD *)v5 + n + 4);
      if ( v40 )
      {
        if ( (*(_DWORD *)v40 & 0x40) != 0 )
          pSpHintSpriteShape(v40, 0LL, 0);
        vSpDeleteSprite(*((struct SPRITE **)v5 + n + 4));
      }
    }
    Win32FreePool(v5);
    v5 = 0LL;
  }
  Win32FreePool(a3);
  return v5;
}
