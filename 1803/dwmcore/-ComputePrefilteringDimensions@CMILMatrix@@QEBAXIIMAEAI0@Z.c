/*
 * XREFs of ?ComputePrefilteringDimensions@CMILMatrix@@QEBAXIIMAEAI0@Z @ 0x1801C6D9C
 * Callers:
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x1801EEF38 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 * Callees:
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800A3B38 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?ComputePrefilteredSize@@YAXIMMAEAI@Z @ 0x1801C6C3C (-ComputePrefilteredSize@@YAXIMMAEAI@Z.c)
 */

void __fastcall CMILMatrix::ComputePrefilteringDimensions(
        CMILMatrix *this,
        unsigned int a2,
        unsigned int a3,
        float a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  float v8; // xmm6_4
  unsigned int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  v6 = a3;
  v7 = a2;
  v9[0] = a3;
  v11 = a2;
  if ( a4 > 0.0 )
  {
    v8 = 1.0 / a4;
    CMILMatrix::Get2DScaleDimensions(this, (float *)&v10, (float *)&v12);
    if ( (float)(1.0 / a4) >= *(float *)&v10 )
    {
      ComputePrefilteredSize(v7, v8, COERCE_DOUBLE((unsigned __int64)v10), &v11);
      v7 = v11;
    }
    if ( v8 >= *(float *)&v12 )
    {
      ComputePrefilteredSize(v6, v8, COERCE_DOUBLE((unsigned __int64)v12), v9);
      v6 = v9[0];
    }
  }
  *a5 = v7;
  *a6 = v6;
}
