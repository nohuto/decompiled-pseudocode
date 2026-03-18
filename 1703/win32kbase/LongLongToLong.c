/*
 * XREFs of LongLongToLong @ 0x1C00EAE68
 * Callers:
 *     rimConvertCoordinatesWithRounding @ 0x1C01089FC (rimConvertCoordinatesWithRounding.c)
 *     ConvertCoordinates @ 0x1C012E700 (ConvertCoordinates.c)
 *     GetAdjustedHimetricLong @ 0x1C012E930 (GetAdjustedHimetricLong.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C012EB30 (GetAdjustedPointerPixelLocation.c)
 *     _SetHimetricToPixelRatio @ 0x1C012F060 (_SetHimetricToPixelRatio.c)
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
