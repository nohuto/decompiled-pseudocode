/*
 * XREFs of ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800716F8
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180071090 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetImageSource@CGradientSource@@QEAAJPEAVCDrawingContext@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIImageSource@@@Z @ 0x180071BC0 (-GetImageSource@CGradientSource@@QEAAJPEAVCDrawingContext@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Generate@CGradientSource@@QEAAJPEAVCDrawingContext@@V?$span@$$CBUD2D1_GRADIENT_STOP@@@gsl@@_NW4D2D1_EXTEND_MODE@@2@Z @ 0x180071CD8 (-Generate@CGradientSource@@QEAAJPEAVCDrawingContext@@V-$span@$$CBUD2D1_GRADIENT_STOP@@@gsl@@_NW4.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentSurface(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // r10
  bool v6; // zf
  bool v7; // r14
  int ImageSource; // eax
  int v9; // r9d
  unsigned int v10; // ebx
  int v13; // eax
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 144) - *(_QWORD *)(a1 + 136);
  v14[0] = *(_QWORD *)(a1 + 136);
  v6 = *(_DWORD *)(a1 + 108) == 4;
  v14[1] = v5 / 20;
  v7 = v6;
  ImageSource = CGradientSource::GetImageSource((struct IAtlasEntryOwner *)(a1 + 80), a3);
  v10 = ImageSource;
  if ( ImageSource < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ImageSource, 0x14Fu);
  }
  else if ( !*(_BYTE *)(a1 + 104) )
  {
    LOBYTE(v9) = v7;
    v13 = CGradientSource::Generate((int)a1 + 80, a2, (unsigned int)v14, v9, *(unsigned __int8 *)(a1 + 105), 1);
    v10 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x153u);
    else
      *(_BYTE *)(a1 + 104) = 1;
  }
  return v10;
}
