/*
 * XREFs of ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180047C30
 * Callers:
 *     ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18002C980 (-DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x1800400E8 (-DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 * Callees:
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180035380 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetTightBoundsNoBadNumber(__int64 a1, __m128 *a2, __int64 a3)
{
  __int64 (*v4)(void); // rax
  int TightBounds; // eax
  unsigned int v6; // ebx

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v4 == (char *)CRectanglesShape::GetTightBounds )
    TightBounds = CRectanglesShape::GetTightBounds(a1, (__int64)a2, a3);
  else
    TightBounds = v4();
  v6 = TightBounds;
  if ( TightBounds == -2003304438 )
  {
    v6 = 0;
    *a2 = _mm_shuffle_ps((__m128)LODWORD(CFloatFPU::sc_NaN), (__m128)LODWORD(CFloatFPU::sc_NaN), 0);
  }
  else if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x3AEu);
  }
  return v6;
}
