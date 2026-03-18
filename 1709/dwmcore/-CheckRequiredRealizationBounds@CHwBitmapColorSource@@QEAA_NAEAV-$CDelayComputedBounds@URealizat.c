/*
 * XREFs of ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1801B46D8
 * Callers:
 *     ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x18007EA84 (-TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSou.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x1801AF410 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180088768 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BEC10 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 */

char __fastcall CHwBitmapColorSource::CheckRequiredRealizationBounds(
        _DWORD *a1,
        struct MilRectF *a2,
        int a3,
        int a4,
        int a5)
{
  char v5; // bl
  int v7; // eax
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v11[8]; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  if ( !a5 && a1[38] == a1[51] - a1[49] && a1[39] == a1[52] - a1[50] )
    return 1;
  *((_QWORD *)&v10 + 1) = *((_QWORD *)a1 + 19);
  v11[1] = a1[36];
  v7 = a1[37];
  v11[0] = a3;
  *(_QWORD *)&v10 = 0LL;
  v11[2] = v7;
  v11[3] = a4;
  if ( CHwBitmapColorSource::ComputeMinimumRealizationBounds(a2, v11, (int *)&v10) )
  {
    if ( a5 )
    {
      v8 = 45LL;
      if ( a5 != 1 )
        v8 = 32LL;
    }
    else
    {
      v8 = 49LL;
    }
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)&a1[v8], (__int64)&v10) )
    {
      v5 = 1;
      if ( a5 == 2 )
        *(_OWORD *)(a1 + 49) = v10;
    }
  }
  return v5;
}
