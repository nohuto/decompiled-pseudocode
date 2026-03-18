/*
 * XREFs of ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0281FD0
 * Callers:
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C027CAE0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D130 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C027D7C0 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C027E420 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C027EA90 (-MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027EBF0 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C027EDE0 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027F120 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C027F6E0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027FF70 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0280250 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02805B0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02808E0 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0280F68 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MSURF::bNextSurface(MSURF *this)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  __int64 *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rax
  POINTL *v9; // rax
  __int64 *i; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // cl

  if ( !*((_QWORD *)this + 4) )
  {
    for ( i = (__int64 *)*((_QWORD *)this + 8); ; i = (__int64 *)*((_QWORD *)this + 8) )
    {
      v13 = *i;
      *((_QWORD *)this + 8) = *i;
      if ( !v13 )
      {
        *(_OWORD *)(*((_QWORD *)this + 10) + 4LL) = *(_OWORD *)((char *)this + 8);
        *(_BYTE *)(*((_QWORD *)this + 10) + 20LL) = *((_BYTE *)this + 24);
        goto LABEL_26;
      }
      v12 = *((_QWORD *)this + 8);
      if ( (*(_DWORD *)(*(_QWORD *)(v12 + 56) + 32LL) & 0x400) == 0 )
      {
        if ( !*((_BYTE *)this + 24)
          && *((_DWORD *)this + 10) >= *(_DWORD *)(v12 + 28)
          && *((_DWORD *)this + 11) >= *(_DWORD *)(v12 + 32)
          && *((_DWORD *)this + 12) <= *(_DWORD *)(v12 + 36)
          && *((_DWORD *)this + 13) <= *(_DWORD *)(v12 + 40) )
        {
          *(_BYTE *)(*((_QWORD *)this + 10) + 20LL) = 0;
          *(_OWORD *)(*((_QWORD *)this + 10) + 4LL) = *(_OWORD *)((char *)this + 40);
          goto LABEL_30;
        }
        if ( bIntersect(
               (const struct _RECTL *)((char *)this + 40),
               (const struct _RECTL *)(v12 + 28),
               (struct _RECTL *)(*((_QWORD *)this + 10) + 4LL)) )
        {
          v15 = 1;
          if ( *((_BYTE *)this + 24) )
            v15 = *((_BYTE *)this + 24);
          *(_BYTE *)(*((_QWORD *)this + 10) + 20LL) = v15;
LABEL_30:
          v14 = *((_QWORD *)this + 8);
          *((_QWORD *)this + 9) = *(_QWORD *)(v14 + 64);
          v9 = (POINTL *)(v14 + 72);
LABEL_13:
          *((_QWORD *)this + 11) = v9;
          return 1LL;
        }
        *(_OWORD *)(*((_QWORD *)this + 10) + 4LL) = *(_OWORD *)((char *)this + 8);
      }
    }
  }
  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)this + 9)) + 116) & 4) != 0
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 56LL) + 2144LL) & 0x8000) == 0 )
  {
    *((_DWORD *)this + 14) |= 1u;
  }
  v2 = (__int64 *)*((_QWORD *)this + 8);
  v3 = *v2;
  *((_QWORD *)this + 8) = *v2;
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 4);
    while ( 1 )
    {
      v5 = (__int64 *)*((_QWORD *)this + 8);
      v6 = *(_QWORD *)(v4 + 8);
      v7 = *((unsigned int *)v5 + 4);
      if ( *(_QWORD *)(v6 + 8 * v7) )
      {
        if ( (*(_DWORD *)(v5[7] + 2144) & 0x8000) != 0 || (*((_DWORD *)this + 14) & 1) == 0 )
          break;
      }
      v8 = *v5;
      *((_QWORD *)this + 8) = *v5;
      if ( !v8 )
        goto LABEL_26;
    }
    v9 = &gptlZero;
    *((_QWORD *)this + 9) = *(_QWORD *)(v6 + 8 * v7);
    goto LABEL_13;
  }
LABEL_26:
  if ( *((_DWORD *)this + 24) == 1 )
    EngDeleteClip(*((CLIPOBJ **)this + 10));
  return 0LL;
}
