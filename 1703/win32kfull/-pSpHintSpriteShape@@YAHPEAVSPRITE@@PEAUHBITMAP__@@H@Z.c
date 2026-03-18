/*
 * XREFs of ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C025DEFC
 * Callers:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C0257980 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C0257B88 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C025D7C0 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C025D980 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C025E14C (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C025E27C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C025E648 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0084350 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0260D10 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1C0263E98 (-vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z.c)
 */

__int64 __fastcall pSpHintSpriteShape(struct SPRITE *a1, HSURF hsurf, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  W32PIDLOCK *v10; // rbp
  __int64 v11; // rcx
  int v12; // eax
  SURFOBJ *v14; // rax
  SURFOBJ *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _SPRITESTATE *v23[24]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+100h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return v3;
  v7 = *((_QWORD *)a1 + 16);
  if ( !v7 || (v8 = SURFOBJ_TO_SURFACE_NOT_NULL(v7), !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v8)) )
  {
LABEL_13:
    if ( hsurf )
    {
      if ( !*((_QWORD *)a1 + 16) )
        goto LABEL_35;
      if ( (*(_DWORD *)a1 & 0x40) == 0 )
        vSpDeleteShape(a1);
      if ( !*((_QWORD *)a1 + 16) )
      {
LABEL_35:
        if ( (*(_DWORD *)a1 & 0x40) == 0 )
        {
          v14 = EngLockSurface(hsurf);
          v15 = v14;
          if ( v14 )
          {
            if ( v14->iType == 3 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 116) & 1) != 0 )
            {
              EngUnlockSurface(v15);
              v15 = 0LL;
            }
            if ( v15 )
            {
              *(_DWORD *)a1 |= 0x40u;
              *((_QWORD *)a1 + 16) = v15;
              if ( a3 )
                *(_DWORD *)a1 |= 0x80u;
              *((_QWORD *)a1 + 30) = hsurf;
              *((_QWORD *)a1 + 12) = 0LL;
              *((_DWORD *)a1 + 26) = v15->sizlBitmap.cx;
              *((_DWORD *)a1 + 27) = v15->sizlBitmap.cy;
              *((POINTL *)a1 + 17) = gptlZero;
              v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v15);
              v18 = *(_QWORD *)(v16 + 128);
              if ( v18 )
                INC_SHARE_REF_CNT(*(_QWORD *)(v16 + 128), v17);
              v19 = (__int64 *)*((_QWORD *)a1 + 2);
              *((_QWORD *)a1 + 18) = v18;
              v24 = *v19;
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v23, (struct PDEVOBJ *)&v24);
              bSpUpdatePosition(a1, (struct _POINTL *)a1 + 14, 0, 0);
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v23, v20, v21, v22);
            }
          }
        }
      }
    }
    else if ( *((_QWORD *)a1 + 16) )
    {
      vSpRemoveShapeHint(a1, a3);
    }
    return 1;
  }
  v10 = (W32PIDLOCK *)(v9 + 280);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v9 + 280));
  if ( !*(_DWORD *)(v8 + 332) )
  {
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      vSpRemoveShapeHint(a1, 0);
      *(_DWORD *)a1 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread(v10);
    goto LABEL_13;
  }
  *(_QWORD *)(v8 + 336) = UserGetHDEV(v11);
  *(_QWORD *)(v8 + 344) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v8 + 352) = hsurf;
  memset((void *)(v8 + 360), 0, 0x38uLL);
  v12 = *(_DWORD *)(v8 + 112);
  *(_QWORD *)(v8 + 416) = 0LL;
  if ( (v12 & 0x2000000) == 0 )
    *(_DWORD *)(v8 + 112) = v12 | 0x2000000;
  if ( (*(_DWORD *)a1 & 0x200) == 0 )
    *(_DWORD *)a1 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread(v10);
  return 1LL;
}
