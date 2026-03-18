/*
 * XREFs of ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800729E4
 * Callers:
 *     ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18003DE10 (-DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x1800A90E4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@PEAPEAV1@@Z @ 0x1801576CC (-Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@AEBVCMILMatrix@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006F050 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetTightBoundsNoBadNumber(CRegionShape *a1, __m128 *a2, __int64 a3)
{
  __int64 (__fastcall *v4)(CRegionShape *, __m128 *, __int64); // rax
  int TightBounds; // eax
  unsigned int v6; // ebx

  v4 = *(__int64 (__fastcall **)(CRegionShape *, __m128 *, __int64))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v4 == (char *)CRectanglesShape::GetTightBounds )
  {
    TightBounds = CRectanglesShape::GetTightBounds(a1, a2, a3);
  }
  else if ( v4 == CRegionShape::GetTightBounds )
  {
    TightBounds = CRegionShape::GetTightBounds(a1, a2, a3);
  }
  else
  {
    TightBounds = ((__int64 (__fastcall *)(CRegionShape *, __m128 *))v4)(a1, a2);
  }
  v6 = TightBounds;
  if ( TightBounds == -2003304438 )
  {
    v6 = 0;
    *a2 = _mm_shuffle_ps((__m128)LODWORD(CFloatFPU::sc_NaN), (__m128)LODWORD(CFloatFPU::sc_NaN), 0);
  }
  else if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x33Eu);
  }
  return v6;
}
