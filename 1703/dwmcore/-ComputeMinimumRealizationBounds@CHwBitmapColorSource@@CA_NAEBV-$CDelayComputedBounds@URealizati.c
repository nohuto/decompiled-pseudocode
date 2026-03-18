/*
 * XREFs of ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043D40
 * Callers:
 *     ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x1800437F8 (-TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSou.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1800440AC (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180044B68 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x18007BFF0 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 * Callees:
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x1800452DC (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
 */

char __fastcall CHwBitmapColorSource::ComputeMinimumRealizationBounds(struct MilRectF *a1, _DWORD *a2, int *a3)
{
  float v4; // xmm6_4
  int v7; // r13d
  float *v8; // rax
  float v9; // xmm9_4
  float v10; // xmm11_4
  float v11; // xmm10_4
  float v12; // xmm8_4
  float v13; // xmm12_4
  float v14; // xmm13_4
  float v15; // xmm1_4
  float v16; // xmm7_4
  int v17; // r15d
  int v18; // r14d
  float v19; // xmm2_4
  float v20; // xmm8_4
  float v21; // xmm7_4
  float v22; // xmm11_4
  float v23; // xmm2_4
  int v24; // ebx
  int v25; // edi
  float v26; // xmm0_4
  int v27; // ecx
  float v28; // xmm7_4
  int v29; // edi
  float v30; // xmm6_4
  int v32; // eax
  float v33; // xmm1_4
  float v34; // xmm1_4
  char v35; // [rsp+28h] [rbp-89h]
  __int128 v36; // [rsp+30h] [rbp-81h] BYREF
  float v37; // [rsp+40h] [rbp-71h]
  float v38; // [rsp+44h] [rbp-6Dh]

  v4 = FLOAT_1_0;
  v7 = 1;
  if ( !*((_BYTE *)a1 + 24) )
  {
    v8 = (float *)*((_QWORD *)a1 + 2);
    v9 = v8[1];
    v10 = *v8;
    v11 = v8[5];
    v12 = v8[4];
    v13 = v8[13];
    v14 = v8[12];
    v15 = (float)(*v8 * v11) - (float)(v9 * v12);
    if ( v15 != 0.0 )
    {
      v16 = 1.0 / v15;
      if ( _finite((float)(1.0 / v15)) )
      {
        *(float *)&v36 = v16 * v11;
        DWORD2(v36) = COERCE_UNSIGNED_INT(v16 * v12) ^ _xmm;
        DWORD1(v36) = COERCE_UNSIGNED_INT(v16 * v9) ^ _xmm;
        *((float *)&v36 + 3) = v16 * v10;
        v37 = (float)((float)(v12 * v13) - (float)(v11 * v14)) * v16;
        v38 = (float)((float)(v9 * v14) - (float)(v10 * v13)) * v16;
        MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)&v36, a1, (struct MilRectF *)((char *)a1 + 28));
        *((_BYTE *)a1 + 24) = 1;
      }
    }
  }
  v35 = *((_BYTE *)a1 + 24);
  if ( v35 )
  {
    v17 = a3[2];
    v18 = a3[3];
    v36 = *(_OWORD *)((char *)a1 + 28);
    v19 = *(float *)&v36;
    v20 = *((float *)&v36 + 2);
    if ( v17 != a2[1] )
    {
      v33 = (float)v17 / (float)(int)a2[1];
      v19 = *(float *)&v36 * v33;
      v20 = *((float *)&v36 + 2) * v33;
    }
    v21 = *((float *)&v36 + 1);
    v22 = *((float *)&v36 + 3);
    if ( v18 != a2[2] )
    {
      v34 = (float)v18 / (float)(int)a2[2];
      v21 = *((float *)&v36 + 1) * v34;
      v22 = *((float *)&v36 + 3) * v34;
    }
    if ( *a2 )
      v4 = FLOAT_1_5;
    v23 = v19 - v4;
    v24 = 0x7FFFFFFF;
    if ( v23 < -2147483600.0 )
    {
      v25 = 0x80000000;
    }
    else if ( v23 >= 2147483600.0 )
    {
      v25 = 0x7FFFFFFF;
    }
    else
    {
      v25 = (int)ceilf_0(v23);
    }
    v26 = v4 + v20;
    if ( (float)(v4 + v20) < -2147483600.0 )
    {
      v27 = 0x80000000;
    }
    else if ( v26 >= 2147483600.0 )
    {
      v27 = 0x7FFFFFFF;
    }
    else
    {
      v27 = (int)floorf_0(v26);
    }
    if ( v25 < v27 )
    {
      if ( a2[3] )
      {
        if ( v25 >= 0 && v27 <= v17 )
        {
          *a3 = v25;
          a3[2] = v27;
        }
      }
      else
      {
        if ( v25 > 0 )
        {
          if ( v25 >= v17 )
            *a3 = v17 - 1;
          else
            *a3 = v25;
        }
        if ( v27 < v17 )
        {
          v32 = 1;
          if ( v27 > 0 )
            v32 = v27;
          a3[2] = v32;
        }
      }
    }
    v28 = v21 - v4;
    if ( v28 < -2147483600.0 )
    {
      v29 = 0x80000000;
    }
    else if ( v28 >= 2147483600.0 )
    {
      v29 = 0x7FFFFFFF;
    }
    else
    {
      v29 = (int)ceilf_0(v28);
    }
    v30 = v4 + v22;
    if ( v30 < -2147483600.0 )
    {
      v24 = 0x80000000;
    }
    else if ( v30 < 2147483600.0 )
    {
      v24 = (int)floorf_0(v30);
    }
    if ( v29 < v24 )
    {
      if ( a2[3] )
      {
        if ( v29 >= 0 && v24 <= v18 )
        {
          a3[1] = v29;
          a3[3] = v24;
        }
      }
      else
      {
        if ( v29 > 0 )
        {
          if ( v29 >= v18 )
            a3[1] = v18 - 1;
          else
            a3[1] = v29;
        }
        if ( v24 < v18 )
        {
          if ( v24 > 0 )
            v7 = v24;
          a3[3] = v7;
        }
      }
    }
  }
  return v35;
}
