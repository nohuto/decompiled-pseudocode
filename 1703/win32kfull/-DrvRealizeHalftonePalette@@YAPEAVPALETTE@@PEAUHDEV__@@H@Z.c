/*
 * XREFs of ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024A738
 * Callers:
 *     DrvRealizeHalftonePaletteWrap @ 0x1C024AA60 (DrvRealizeHalftonePaletteWrap.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C027FDCC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C027FFB0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0280600 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02818A0 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0282260 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0282B60 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0283D60 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02848C0 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009FD28 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreRealizePalette @ 0x1C0108418 (GreRealizePalette.c)
 *     GreCreateCompatibleHalftonePalette @ 0x1C011392C (GreCreateCompatibleHalftonePalette.c)
 */

struct PALETTE *__fastcall DrvRealizeHalftonePalette(_QWORD *a1, int a2)
{
  int v4; // r14d
  __int64 v5; // rsi
  HDC DisplayDC; // rbp
  HPALETTE CompatibleHalftonePalette; // rax
  HPALETTE v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rbx
  struct PALETTE *v14; // rbx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v17 = ghsemHT;
  GreAcquireSemaphore(ghsemHT);
  v5 = a1[229];
  if ( a2 || !v5 )
  {
    DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL, 0LL);
    if ( !DisplayDC )
      goto LABEL_17;
    if ( !v5 )
    {
      CompatibleHalftonePalette = (HPALETTE)GreCreateCompatibleHalftonePalette();
      v8 = CompatibleHalftonePalette;
      if ( CompatibleHalftonePalette )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v16, CompatibleHalftonePalette);
        v9 = GreSetPaletteOwner(v8, 0LL);
        v11 = v16;
        if ( v9 )
        {
          if ( !v16 )
            goto LABEL_12;
          INC_SHARE_REF_CNT(v16, v10);
          a1[229] = v11;
        }
        else
        {
          bDeletePalette(v8, 1LL, 0LL);
        }
        if ( v11 )
          DEC_SHARE_REF_CNT(v11);
      }
    }
LABEL_12:
    v12 = (_QWORD *)a1[229];
    if ( v12 )
    {
      v13 = GreSelectPalette(DisplayDC, *v12, 1LL);
      if ( v13 )
      {
        v16 = a1[229];
        XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v16);
        GreRealizePalette(DisplayDC);
        GreSelectPalette(DisplayDC, v13, 0LL);
        v4 = 1;
      }
    }
    bDeleteDCInternal(DisplayDC, 1LL, 0LL);
    if ( v4 )
      goto LABEL_16;
LABEL_17:
    v14 = ppalDefault;
    goto LABEL_18;
  }
LABEL_16:
  v14 = (struct PALETTE *)a1[229];
LABEL_18:
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  return v14;
}
