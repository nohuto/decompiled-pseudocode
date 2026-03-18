/*
 * XREFs of ?GetBounds@?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV?$CRectF@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1800BEDE0
 * Callers:
 *     ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x18007EA84 (-TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSou.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BEC10 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 * Callees:
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18006AE68 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z @ 0x18006B238 (-SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z.c)
 */

char __fastcall CDelayComputedBounds<CoordinateSpace::RealizationSampling>::GetBounds(struct MilRectF *a1, _OWORD *a2)
{
  float *v4; // rax
  _BYTE v6[40]; // [rsp+40h] [rbp-28h] BYREF

  if ( !*((_BYTE *)a1 + 24) )
  {
    v4 = (float *)*((_QWORD *)a1 + 2);
    if ( MILMatrix3x2::SetInverse((MILMatrix3x2 *)v6, *v4, v4[1], v4[4], v4[5], v4[12], v4[13]) )
    {
      MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v6, a1, (struct MilRectF *)((char *)a1 + 28));
      *((_BYTE *)a1 + 24) = 1;
    }
  }
  if ( *((_BYTE *)a1 + 24) )
    *a2 = *(_OWORD *)((char *)a1 + 28);
  return *((_BYTE *)a1 + 24);
}
