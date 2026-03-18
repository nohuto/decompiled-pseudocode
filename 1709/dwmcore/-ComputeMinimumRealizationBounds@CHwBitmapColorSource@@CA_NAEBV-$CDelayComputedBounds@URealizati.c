/*
 * XREFs of ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BEC10
 * Callers:
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@SA_NPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUCacheContextParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BEB78 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@SA_NPEAVIBitmapSource@@AEBV-$CDelayComput.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1801B46D8 (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x1801B4C70 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x1801B6348 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180045A04 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800BEDA8 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?GetBounds@?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV?$CRectF@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1800BEDE0 (-GetBounds@-$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV-$CRectF@URe.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char __fastcall CHwBitmapColorSource::ComputeMinimumRealizationBounds(struct MilRectF *a1, _DWORD *a2, int *a3)
{
  char Bounds; // r12
  int v6; // edi
  int v7; // esi
  float v8; // xmm2_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  int v13; // ebp
  int v14; // ecx
  int v15; // r15d
  int v16; // edi
  int v17; // ecx
  int v19; // eax
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // [rsp+20h] [rbp-88h]
  float v23; // [rsp+24h] [rbp-84h]
  float v24; // [rsp+28h] [rbp-80h]
  float v25; // [rsp+2Ch] [rbp-7Ch]

  Bounds = CDelayComputedBounds<CoordinateSpace::RealizationSampling>::GetBounds(a1);
  if ( Bounds )
  {
    v6 = a3[2];
    v7 = a3[3];
    v8 = v22;
    v9 = v24;
    if ( v6 != a2[1] )
    {
      v20 = (float)v6 / (float)(int)a2[1];
      v8 = v22 * v20;
      v9 = v24 * v20;
    }
    v10 = v23;
    v11 = v25;
    if ( v7 != a2[2] )
    {
      v21 = (float)v7 / (float)(int)a2[2];
      v10 = v23 * v21;
      v11 = v25 * v21;
    }
    if ( *a2 )
      v12 = FLOAT_1_5;
    else
      v12 = FLOAT_1_0;
    v13 = CFloatFPU::CeilingSat(v8 - v12);
    v14 = CFloatFPU::FloorSat(v12 + v9);
    v15 = 1;
    if ( v13 < v14 )
    {
      if ( a2[3] )
      {
        if ( v13 >= 0 && v14 <= v6 )
        {
          *a3 = v13;
          a3[2] = v14;
        }
      }
      else
      {
        if ( v13 > 0 )
        {
          if ( v13 >= v6 )
            *a3 = v6 - 1;
          else
            *a3 = v13;
        }
        if ( v14 < v6 )
        {
          v19 = 1;
          if ( v14 > 0 )
            v19 = v14;
          a3[2] = v19;
        }
      }
    }
    v16 = CFloatFPU::CeilingSat(v10 - v12);
    v17 = CFloatFPU::FloorSat(v12 + v11);
    if ( v16 < v17 )
    {
      if ( a2[3] )
      {
        if ( v16 >= 0 && v17 <= v7 )
        {
          a3[1] = v16;
          a3[3] = v17;
        }
      }
      else
      {
        if ( v16 > 0 )
        {
          if ( v16 >= v7 )
            a3[1] = v7 - 1;
          else
            a3[1] = v16;
        }
        if ( v17 < v7 )
        {
          if ( v17 > 0 )
            v15 = v17;
          a3[3] = v15;
        }
      }
    }
  }
  return Bounds;
}
