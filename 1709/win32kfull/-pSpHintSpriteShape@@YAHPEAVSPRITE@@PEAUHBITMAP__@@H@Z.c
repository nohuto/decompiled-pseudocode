/*
 * XREFs of ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C000A3E8
 * Callers:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C000A308 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C02590B8 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C025D970 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C025DB34 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C025DED0 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C025E000 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C025E3CC (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C000A15C (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00125A8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1C0263260 (-vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z.c)
 */

__int64 __fastcall pSpHintSpriteShape(struct SPRITE *a1, HSURF hsurf, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  W32PIDLOCK *v11; // rbp
  int v12; // eax
  SURFOBJ *v13; // rax
  SURFOBJ *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 *v17; // rax
  _BYTE v18[192]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+100h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return v3;
  v7 = *((_QWORD *)a1 + 16);
  if ( !v7 || (v9 = SURFOBJ_TO_SURFACE_NOT_NULL(v7), !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v9)) )
  {
LABEL_3:
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
          v13 = EngLockSurface(hsurf);
          v14 = v13;
          if ( v13 )
          {
            if ( v13->iType == 3 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 116) & 1) != 0 )
            {
              EngUnlockSurface(v14);
              v14 = 0LL;
            }
            if ( v14 )
            {
              *(_DWORD *)a1 |= 0x40u;
              *((_QWORD *)a1 + 16) = v14;
              if ( a3 )
                *(_DWORD *)a1 |= 0x80u;
              *((_QWORD *)a1 + 30) = hsurf;
              *((_QWORD *)a1 + 12) = 0LL;
              *((_DWORD *)a1 + 26) = v14->sizlBitmap.cx;
              *((_DWORD *)a1 + 27) = v14->sizlBitmap.cy;
              *((POINTL *)a1 + 17) = gptlZero;
              v15 = SURFOBJ_TO_SURFACE_NOT_NULL(v14);
              v16 = *(_QWORD *)(v15 + 128);
              if ( v16 )
                INC_SHARE_REF_CNT(*(_QWORD *)(v15 + 128));
              v17 = (__int64 *)*((_QWORD *)a1 + 2);
              *((_QWORD *)a1 + 18) = v16;
              v19 = *v17;
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v18, (struct PDEVOBJ *)&v19);
              bSpUpdatePosition(a1, (struct _POINTL *)a1 + 14, 0, 0);
              SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v18);
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
  v11 = (W32PIDLOCK *)(v10 + 280);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v10 + 280));
  if ( !*(_DWORD *)(v9 + 332) )
  {
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      vSpRemoveShapeHint(a1, 0);
      *(_DWORD *)a1 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread(v11);
    goto LABEL_3;
  }
  *(_QWORD *)(v9 + 336) = UserGetHDEV();
  *(_QWORD *)(v9 + 344) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v9 + 352) = hsurf;
  memset((void *)(v9 + 360), 0, 0x38uLL);
  v12 = *(_DWORD *)(v9 + 112);
  *(_QWORD *)(v9 + 416) = 0LL;
  if ( (v12 & 0x2000000) == 0 )
    *(_DWORD *)(v9 + 112) = v12 | 0x2000000;
  if ( (*(_DWORD *)a1 & 0x200) == 0 )
    *(_DWORD *)a1 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread(v11);
  return 1LL;
}
