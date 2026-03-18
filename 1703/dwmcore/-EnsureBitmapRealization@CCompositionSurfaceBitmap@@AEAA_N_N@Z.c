/*
 * XREFs of ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180037200
 * Callers:
 *     ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000A8F8 (-InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A9D0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800372E0 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180037840 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180164300 (-GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180076D24 (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     ??$ReplaceInterface@VCBitmapRealization@@V1@@@YAXAEAPEAVCBitmapRealization@@PEAV0@@Z @ 0x1800C2EB4 (--$ReplaceInterface@VCBitmapRealization@@V1@@@YAXAEAPEAVCBitmapRealization@@PEAV0@@Z.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800C6348 (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 */

bool __fastcall CCompositionSurfaceBitmap::EnsureBitmapRealization(CCompositionSurfaceBitmap *this, char a2)
{
  char *v2; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  CCompositionSurfaceInfo *v7; // rcx

  v2 = (char *)this + 472;
  if ( !*((_QWORD *)this + 59) || a2 )
  {
    if ( *((_BYTE *)this + 520) )
    {
      --*(_DWORD *)(*((_QWORD *)this + 2) + 284LL);
      *((_BYTE *)this + 520) = 0;
    }
    if ( *((_BYTE *)this + 521) )
    {
      --*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
      *((_BYTE *)this + 521) = 0;
    }
    v5 = *((_QWORD *)this + 58);
    if ( v5 )
    {
      if ( !*(_QWORD *)(v5 + 120) && !*(_BYTE *)(v5 + 384) )
      {
        v7 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 58);
        *(_BYTE *)(v5 + 384) = 1;
        CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(v7);
        *(_BYTE *)(v5 + 384) = 0;
      }
      ReplaceInterface<CBitmapRealization,CBitmapRealization>(v2, *(_QWORD *)(v5 + 120));
    }
    else
    {
      ReleaseInterface<CBitmapRealization>(v2);
    }
    if ( *(_QWORD *)v2 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v2 + 240LL) == 3 )
      {
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 284LL);
        *((_BYTE *)this + 520) = 1;
      }
      v6 = *(_QWORD *)v2;
      if ( (*(_BYTE *)(*(_QWORD *)v2 + 236LL) & 2) != 0 || (*(_BYTE *)(v6 + 236) & 1) != 0 && *(_QWORD *)(v6 + 128) )
      {
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
        *((_BYTE *)this + 521) = 1;
      }
    }
  }
  return *(_QWORD *)v2 != 0LL;
}
