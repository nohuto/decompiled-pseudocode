/*
 * XREFs of ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x180059F6C
 * Callers:
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x180043A00 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180044B68 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CColorKey::operator==(float *a1, float *a2)
{
  float v2; // xmm1_4
  float v3; // xmm2_4

  v2 = a1[3];
  v3 = a1[7];
  return (v3 < v2 || a1[4] < *a1 || a1[5] < a1[1] || a1[6] < a1[2])
      && (a2[7] < a2[3] || a2[4] < *a2 || a2[5] < a2[1] || a2[6] < a2[2])
      || *a1 == *a2
      && a1[1] == a2[1]
      && a1[2] == a2[2]
      && v2 == a2[3]
      && a1[4] == a2[4]
      && a1[5] == a2[5]
      && a1[6] == a2[6]
      && v3 == a2[7];
}
