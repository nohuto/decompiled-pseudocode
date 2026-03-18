/*
 * XREFs of ?EnsureRealization@CImmediateBrushRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x1800C57B0
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCMILMatrix@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18004A304 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmediateBrushRealizer::EnsureRealization(
        CImmediateBrushRealizer *this,
        struct LegacyMilBrushContext *a2,
        const struct CContextState *a3,
        const struct PixelFormatInfo *a4)
{
  __int64 v5; // rcx

  if ( a4 )
  {
    *((_QWORD *)a2 + 27) = *(_QWORD *)a4;
    *((_DWORD *)a2 + 56) = *((_DWORD *)a4 + 2);
    v5 = *((_QWORD *)this + 11);
    *(_QWORD *)(v5 + 8) = *(_QWORD *)a4;
    *(_DWORD *)(v5 + 16) = *((_DWORD *)a4 + 2);
  }
  return 0LL;
}
