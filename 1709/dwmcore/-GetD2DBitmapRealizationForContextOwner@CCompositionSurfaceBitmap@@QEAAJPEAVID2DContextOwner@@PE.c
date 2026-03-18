/*
 * XREFs of ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180028380
 * Callers:
 *     ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x18002696C (-BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1B.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18013D450 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18015A2A0 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x1801641A0 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBU.c)
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180028408 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
        CCompositionSurfaceBitmap *this,
        struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 **a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // ebx

  v5 = (*(__int64 (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)a2 + 80LL))(a2);
  *a3 = 0LL;
  v6 = v5;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 0) )
  {
    LOBYTE(v7) = *((_BYTE *)this + 146);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, struct ID2D1Bitmap1 **))(*(_QWORD *)(*((_QWORD *)this + 12) + 144LL)
                                                                                              + 136LL))(
           *((_QWORD *)this + 12) + 144LL,
           v6,
           0LL,
           v7,
           a3);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x52u);
  }
  else
  {
    v9 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x56u);
  }
  return v9;
}
