/*
 * XREFs of LongLongToLong @ 0x1C00EF538
 * Callers:
 *     rimConvertCoordinatesWithRounding @ 0x1C0106A24 (rimConvertCoordinatesWithRounding.c)
 *     ConvertCoordinates @ 0x1C012DC08 (ConvertCoordinates.c)
 *     GetAdjustedHimetricLong @ 0x1C012DE30 (GetAdjustedHimetricLong.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C012E030 (GetAdjustedPointerPixelLocation.c)
 *     _SetHimetricToPixelRatio @ 0x1C012E710 (_SetHimetricToPixelRatio.c)
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C012FEA0 (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall LongLongToLong(LONGLONG llOperand, LONG *plResult)
{
  if ( (unsigned __int64)(llOperand + 0x80000000LL) > 0xFFFFFFFF )
  {
    *plResult = -1;
    return -2147024362;
  }
  else
  {
    *plResult = llOperand;
    return 0;
  }
}
