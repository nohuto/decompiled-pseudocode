/*
 * XREFs of ?GetSingleContributorToFloatRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801E9194
 * Callers:
 *     ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x1801E875C (-TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSou.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     floorf_0 @ 0x1800DD3C5 (floorf_0.c)
 *     ?DoesIntersectValid@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E8C04 (-DoesIntersectValid@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@U.c)
 */

char __fastcall CBitmapOfDeviceBitmaps::GetSingleContributorToFloatRealizationAreaNoRef(
        __int64 a1,
        float *a2,
        _QWORD *a3)
{
  float v3; // xmm9_4
  char v4; // bl
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm1_4
  unsigned int v13; // r14d
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  unsigned int v17; // esi
  float v18; // xmm6_4
  __int64 v19; // rdi
  __int64 v20; // rbp
  float v22[4]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *a2;
  v4 = 0;
  v8 = 0.0;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*a2) & _xmm);
  if ( v9 < 8388608.0 )
  {
    v10 = floorf_0(v3 + 0.5) - v3;
    if ( v10 <= -0.5 )
      v10 = v10 + 1.0;
  }
  else
  {
    v10 = 0.0;
  }
  v11 = a2[1];
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm);
  if ( v12 < 8388608.0 )
  {
    v8 = floorf_0(v11 + 0.5) - v11;
    if ( v8 <= -0.5 )
      v8 = v8 + 1.0;
  }
  v13 = *(_DWORD *)(a1 + 336);
  v14 = v3 + v10;
  v15 = v10 + a2[2];
  v16 = v11 + v8;
  v17 = 0;
  v18 = v8 + a2[3];
  v22[0] = v14;
  v22[2] = v15;
  v22[1] = v16;
  v22[3] = v18;
  if ( !v13 )
    goto LABEL_17;
  v19 = 0LL;
  while ( 1 )
  {
    v20 = v19 + *(_QWORD *)(a1 + 312);
    if ( CBitmapOfDeviceBitmaps::DeviceBitmapInfo::DoesIntersectValid((int *)v20, v22) )
      break;
LABEL_13:
    ++v17;
    v19 += 96LL;
    if ( v17 >= v13 )
      goto LABEL_16;
  }
  if ( !v4 )
  {
    v4 = 1;
    *a3 = *(_QWORD *)(v20 + 16);
    goto LABEL_13;
  }
  v4 = 0;
LABEL_16:
  if ( !v4 )
LABEL_17:
    *a3 = 0LL;
  return v4;
}
