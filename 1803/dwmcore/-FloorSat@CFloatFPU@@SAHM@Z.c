/*
 * XREFs of ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1801C44EC
 * Callers:
 *     ?CalculateSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXW4Enum@TileMode1D@@MMMMPEAHPEAIPEAM33@Z @ 0x1801C400C (-CalculateSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXW4Enum@TileMode1D@@.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EE804 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 * Callees:
 *     floorf_0 @ 0x1800DD3C5 (floorf_0.c)
 */

__int64 __fastcall CFloatFPU::FloorSat(float a1)
{
  if ( a1 < -2147483600.0 )
    return 0x80000000LL;
  if ( a1 >= 2147483600.0 )
    return 0x7FFFFFFFLL;
  return (unsigned int)(int)floorf_0(a1);
}
