/*
 * XREFs of ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x1800452DC
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000B598 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x1800437F8 (-TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSou.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043D40 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall MILMatrix3x2::Transform2DBounds(MILMatrix3x2 *this, const struct MilRectF *a2, struct MilRectF *a3)
{
  float *v3; // rax
  int v4; // xmm2_4
  int v5; // xmm1_4
  int v6; // xmm0_4
  int v7; // edx
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  int v11; // xmm0_4
  unsigned int v12; // ecx
  float v13; // xmm1_4
  float *v14; // rax
  float v15; // xmm2_4
  float v16; // xmm0_4
  int v17; // [rsp+0h] [rbp-30h] BYREF
  float v18; // [rsp+4h] [rbp-2Ch]
  int v19; // [rsp+8h] [rbp-28h]
  _DWORD v20[5]; // [rsp+Ch] [rbp-24h] BYREF

  v3 = (float *)&v17;
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 2);
  v18 = *((float *)a2 + 1);
  *(float *)v20 = v18;
  v6 = *((_DWORD *)a2 + 3);
  v7 = 4;
  v20[2] = v6;
  v20[4] = v6;
  v17 = v4;
  v19 = v5;
  v20[1] = v4;
  v20[3] = v5;
  do
  {
    v8 = *v3;
    v9 = *((float *)this + 1);
    v10 = *((float *)this + 3);
    *v3 = (float)((float)(*(float *)this * *v3) + (float)(*((float *)this + 2) * v3[1])) + *((float *)this + 4);
    v3[1] = (float)((float)(v9 * v8) + (float)(v10 * v3[1])) + *((float *)this + 5);
    v3 += 2;
    --v7;
  }
  while ( v7 );
  v11 = v17;
  v12 = 1;
  v13 = v18;
  v14 = (float *)v20;
  *(_DWORD *)a3 = v17;
  *((float *)a3 + 1) = v13;
  *((_DWORD *)a3 + 2) = v11;
  *((float *)a3 + 3) = v13;
  do
  {
    v15 = *(v14 - 1);
    if ( *(float *)a3 > v15 )
    {
      *(float *)a3 = v15;
    }
    else if ( v15 > *((float *)a3 + 2) )
    {
      *((float *)a3 + 2) = v15;
    }
    v16 = *v14;
    if ( v13 > *v14 )
    {
      v13 = *v14;
    }
    else if ( v16 > *((float *)a3 + 3) )
    {
      *((float *)a3 + 3) = v16;
    }
    ++v12;
    v14 += 2;
  }
  while ( v12 < 4 );
  *((float *)a3 + 1) = v13;
}
