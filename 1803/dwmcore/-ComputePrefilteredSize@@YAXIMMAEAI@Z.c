/*
 * XREFs of ?ComputePrefilteredSize@@YAXIMMAEAI@Z @ 0x1801C6C3C
 * Callers:
 *     ?ComputePrefilteringDimensions@CMILMatrix@@QEBAXIIMAEAI0@Z @ 0x1801C6D9C (-ComputePrefilteringDimensions@CMILMatrix@@QEBAXIIMAEAI0@Z.c)
 * Callees:
 *     powf @ 0x1800DB79C (powf.c)
 *     logf_0 @ 0x1800DD3D7 (logf_0.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall ComputePrefilteredSize(int a1, float a2, double a3, unsigned int *a4)
{
  __m128 v7; // xmm8
  __m128 v8; // xmm9
  float v9; // xmm10_4
  __m128 v10; // xmm0
  __m128 v11; // xmm7
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  signed __int32 v14; // edx
  float v15; // xmm6_4
  __m128 v16; // xmm8
  int v17; // eax
  __m128 v18; // xmm0
  unsigned int v19; // eax
  unsigned __int32 v20; // [rsp+80h] [rbp+8h]

  v7 = 0LL;
  v7.m128_f32[0] = (float)a1;
  v8 = v7;
  v8.m128_f32[0] = (float)a1 * *(float *)&a3;
  if ( v8.m128_f32[0] > 1.0 )
  {
    v9 = logf_0(a2);
    if ( v9 < 0.0
      && (v10 = *(__m128 *)&a3,
          v10.m128_f32[0] = logf_0(*(float *)&a3),
          v11 = v10,
          v11.m128_f32[0] = v10.m128_f32[0] / v9,
          _finite((float)(v10.m128_f32[0] / v9)))
      && v11.m128_f32[0] < v7.m128_f32[0] )
    {
      v12 = 0LL;
      v12.m128_f32[0] = v11.m128_f32[0];
      v13.m128_f32[0] = (float)(int)v11.m128_f32[0];
      v14 = (int)v11.m128_f32[0] + _mm_cmplt_ss(v12, v13).m128_u32[0];
      if ( v14 == 2 )
        v15 = a2 * a2;
      else
        v15 = powf(a2, (float)v14);
      v16.m128_f32[0] = v7.m128_f32[0] * v15;
      v17 = (int)v16.m128_f32[0];
      v11.m128_f32[0] = (float)(int)v16.m128_f32[0];
      v20 = _mm_cmplt_ss(v11, v16).m128_u32[0];
    }
    else
    {
      v18 = v8;
      v17 = (int)v8.m128_f32[0];
      v18.m128_f32[0] = (float)(int)v8.m128_f32[0];
      v20 = _mm_cmplt_ss(v18, v8).m128_u32[0];
    }
    v19 = v17 - v20;
    if ( v19 > a1 )
      v19 = a1;
    *a4 = v19;
  }
  else
  {
    *a4 = 1;
  }
}
