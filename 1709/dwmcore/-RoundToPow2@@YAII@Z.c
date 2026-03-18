/*
 * XREFs of ?RoundToPow2@@YAII@Z @ 0x180190FA8
 * Callers:
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x1800BC530 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1801B4904 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x1801B4C70 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 *     ?CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMode@@PEAVCGradientSpanInfo@@@Z @ 0x1801D9834 (-CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoundToPow2(unsigned int a1)
{
  __int64 result; // rax

  result = 0x80000000LL;
  if ( a1 <= 0x400 )
    result = 1024LL;
  while ( ((unsigned int)result & a1) == 0 )
    result = (unsigned int)result >> 1;
  if ( a1 != (_DWORD)result )
    return (unsigned int)(2 * result);
  return result;
}
