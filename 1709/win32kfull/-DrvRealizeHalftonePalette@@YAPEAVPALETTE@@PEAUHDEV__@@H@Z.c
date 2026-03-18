/*
 * XREFs of ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024C078
 * Callers:
 *     DrvRealizeHalftonePaletteWrap @ 0x1C024C350 (DrvRealizeHalftonePaletteWrap.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C027C8FC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C027CAE0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D130 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C027E420 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C027EDE0 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C027F6E0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02808E0 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0281440 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003ED08 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreRealizePalette @ 0x1C010EC68 (GreRealizePalette.c)
 *     GreCreateCompatibleHalftonePalette @ 0x1C011A768 (GreCreateCompatibleHalftonePalette.c)
 */

struct PALETTE *__fastcall DrvRealizeHalftonePalette(_QWORD *a1, int a2)
{
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rcx
  HDC DisplayDC; // rbx
  HPALETTE CompatibleHalftonePalette; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rsi
  struct PALETTE *v12; // rbx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v15 = ghsemHT;
  GreAcquireSemaphore(ghsemHT);
  v5 = a1[229];
  if ( !a2 && v5 )
    goto LABEL_11;
  DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL, 0LL);
  if ( !DisplayDC )
    goto LABEL_12;
  if ( !v5 )
  {
    CompatibleHalftonePalette = (HPALETTE)GreCreateCompatibleHalftonePalette(v6, 10);
    EPALOBJ::EPALOBJ((EPALOBJ *)&v14, CompatibleHalftonePalette);
    v9 = v14;
    if ( v14 )
    {
      a1[229] = v14;
      DEC_SHARE_REF_CNT(v9);
    }
  }
  v10 = (_QWORD *)a1[229];
  if ( v10 )
  {
    v11 = GreSelectPalette(DisplayDC, *v10, 1LL);
    if ( v11 )
    {
      v14 = a1[229];
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v14);
      GreRealizePalette(DisplayDC);
      GreSelectPalette(DisplayDC, v11, 0LL);
      v4 = 1;
    }
  }
  bDeleteDCInternal(DisplayDC, 1LL, 0LL);
  if ( v4 )
LABEL_11:
    v12 = (struct PALETTE *)a1[229];
  else
LABEL_12:
    v12 = ppalDefault;
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  return v12;
}
