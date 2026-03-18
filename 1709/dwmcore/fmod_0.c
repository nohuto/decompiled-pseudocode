/*
 * XREFs of fmod_0 @ 0x1800C5D62
 * Callers:
 *     ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B4220 (-GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B42B0 (-GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800BAE30 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl fmod_0(double X, double Y)
{
  return fmod(X, Y);
}
