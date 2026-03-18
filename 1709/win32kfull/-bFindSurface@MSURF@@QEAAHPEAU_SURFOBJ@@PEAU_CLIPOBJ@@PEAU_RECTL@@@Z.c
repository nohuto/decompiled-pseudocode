/*
 * XREFs of ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0281BB0
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

__int64 __fastcall MSURF::bFindSurface(MSURF *this, struct _SURFOBJ *a2, struct _CLIPOBJ *a3, struct _RECTL *a4)
{
  USHORT iType; // ax
  DHPDEV dhpdev; // rax
  DHSURF dhsurf; // r8
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  POINTL *v14; // rax
  _OWORD *v16; // rbp
  struct _RECTL *v17; // rsi
  CLIPOBJ *Clip; // rax
  CLIPOBJ *v19; // rcx
  __int64 v20; // rax
  struct _CLIPOBJ *v21; // rax
  bool v22; // zf
  __int64 *i; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v27; // cl

  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 24) = 0;
  iType = a2->iType;
  if ( iType == 3 )
  {
    dhpdev = a2->dhpdev;
    *(_QWORD *)this = dhpdev;
    *((_QWORD *)this + 10) = a3;
    dhsurf = a2->dhsurf;
    *((_QWORD *)this + 4) = a2->dhsurf;
    v10 = *(_QWORD *)dhpdev;
    *((_QWORD *)this + 8) = v10;
    while ( v10 )
    {
      v11 = (__int64 *)*((_QWORD *)this + 8);
      v12 = *((_QWORD *)dhsurf + 1);
      v13 = *((unsigned int *)v11 + 4);
      if ( *(_QWORD *)(v12 + 8 * v13) )
      {
        *((_QWORD *)this + 9) = *(_QWORD *)(v12 + 8 * v13);
        v14 = &gptlZero;
        goto LABEL_8;
      }
      v10 = *v11;
      *((_QWORD *)this + 8) = *v11;
    }
    goto LABEL_34;
  }
  if ( iType == 1 && ((_DWORD)a2->hdev[8] & 0x20000) == 0 )
    return 0LL;
  *(_QWORD *)this = a2->dhpdev;
  if ( a3 && a3->iDComplexity )
  {
    *((_QWORD *)this + 10) = a3;
    v16 = (_OWORD *)((char *)this + 8);
    v17 = (struct _RECTL *)((char *)this + 40);
    *((_BYTE *)this + 24) = a3->iDComplexity;
    *(RECTL *)((char *)this + 8) = a3->rclBounds;
    if ( !bIntersect(a4, (const struct _RECTL *)((char *)this + 8), (struct _RECTL *)((char *)this + 40)) )
      return 0LL;
  }
  else
  {
    Clip = EngCreateClip();
    *((_QWORD *)this + 10) = Clip;
    v19 = Clip;
    if ( !Clip )
      return 0LL;
    v20 = *(_QWORD *)this;
    *((_DWORD *)this + 24) = 1;
    v19->rclBounds = *(RECTL *)(v20 + 72);
    RGNOBJ::vSet((RGNOBJ *)(*((_QWORD *)this + 10) + 56LL), (struct _RECTL *)(*((_QWORD *)this + 10) + 4LL));
    *((_BYTE *)this + 24) = 0;
    v21 = a3;
    if ( !a3 )
      v21 = (struct _CLIPOBJ *)*((_QWORD *)this + 10);
    v16 = (_OWORD *)((char *)this + 8);
    v22 = a3 == 0LL;
    v17 = (struct _RECTL *)((char *)this + 40);
    *(RECTL *)((char *)this + 8) = v21->rclBounds;
    if ( v22 )
    {
      *v17 = *a4;
    }
    else if ( !bIntersect(a4, (const struct _RECTL *)((char *)this + 8), (struct _RECTL *)((char *)this + 40)) )
    {
LABEL_34:
      if ( *((_DWORD *)this + 24) == 1 )
        EngDeleteClip(*((CLIPOBJ **)this + 10));
      return 0LL;
    }
  }
  for ( i = *(__int64 **)this; ; i = (__int64 *)*((_QWORD *)this + 8) )
  {
    v25 = *i;
    *((_QWORD *)this + 8) = *i;
    if ( !v25 )
    {
      *(_OWORD *)(*((_QWORD *)this + 10) + 4LL) = *v16;
      *(_BYTE *)(*((_QWORD *)this + 10) + 20LL) = *((_BYTE *)this + 24);
      goto LABEL_34;
    }
    v24 = *((_QWORD *)this + 8);
    if ( (*(_DWORD *)(*(_QWORD *)(v24 + 56) + 32LL) & 0x400) == 0 )
      break;
LABEL_31:
    ;
  }
  if ( !*((_BYTE *)this + 24)
    && v17->left >= *(_DWORD *)(v24 + 28)
    && *((_DWORD *)this + 11) >= *(_DWORD *)(v24 + 32)
    && *((_DWORD *)this + 12) <= *(_DWORD *)(v24 + 36)
    && *((_DWORD *)this + 13) <= *(_DWORD *)(v24 + 40) )
  {
    *(_BYTE *)(*((_QWORD *)this + 10) + 20LL) = 0;
    *(struct _RECTL *)(*((_QWORD *)this + 10) + 4LL) = *v17;
    goto LABEL_38;
  }
  if ( !bIntersect(v17, (const struct _RECTL *)(v24 + 28), (struct _RECTL *)(*((_QWORD *)this + 10) + 4LL)) )
  {
    *(_OWORD *)(*((_QWORD *)this + 10) + 4LL) = *v16;
    goto LABEL_31;
  }
  v27 = 1;
  if ( *((_BYTE *)this + 24) )
    v27 = *((_BYTE *)this + 24);
  *(_BYTE *)(*((_QWORD *)this + 10) + 20LL) = v27;
LABEL_38:
  v26 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 9) = *(_QWORD *)(v26 + 64);
  v14 = (POINTL *)(v26 + 72);
LABEL_8:
  *((_QWORD *)this + 11) = v14;
  return 1LL;
}
