/*
 * XREFs of ?ComputePrefilteredSize@@YAXIMMAEAI@Z @ 0x18018F6E4
 * Callers:
 *     ?ComputePrefilteringDimensions@CMILMatrix@@QEBAXIIMAEAI0@Z @ 0x18018F870 (-ComputePrefilteringDimensions@CMILMatrix@@QEBAXIIMAEAI0@Z.c)
 * Callees:
 *     logf_0 @ 0x1800C5D7A (logf_0.c)
 */

void __fastcall ComputePrefilteredSize(int a1, float a2, float a3, unsigned int *a4)
{
  __m128 v4; // xmm3
  float v6; // xmm7_4
  __m128 v8; // xmm10
  __m128 v9; // xmm9
  float v10; // xmm11_4
  float v11; // xmm8_4
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  signed __int32 v14; // edx
  unsigned int v15; // eax
  float v16; // xmm0_4
  float v17; // xmm6_4
  __m128 v18; // xmm0
  int v19; // eax
  __m128 v20; // xmm0
  unsigned int v21; // eax
  unsigned __int32 v22; // [rsp+90h] [rbp+8h]

  v6 = a2;
  v8 = 0LL;
  v8.m128_f32[0] = (float)a1;
  v9 = v8;
  v9.m128_f32[0] = (float)a1 * a3;
  if ( v9.m128_f32[0] > 1.0 )
  {
    v10 = logf_0(a2);
    if ( v10 < 0.0 && (v11 = logf_0(a3) / v10, _finite(v11)) && v11 < v8.m128_f32[0] )
    {
      v12 = 0LL;
      v12.m128_f32[0] = v11;
      v13.m128_f32[0] = (float)(int)v11;
      v14 = (int)v11 + _mm_cmplt_ss(v12, v13).m128_u32[0];
      v15 = v14;
      if ( v14 < 0 )
        v15 = -v14;
      v16 = FLOAT_1_0;
      while ( 1 )
      {
        if ( (v15 & 1) != 0 )
          v16 = v16 * v6;
        v15 >>= 1;
        if ( !v15 )
          break;
        v6 = v6 * v6;
      }
      if ( v14 >= 0 )
        v17 = v16;
      else
        v17 = 1.0 / v16;
      v18.m128_f32[0] = v8.m128_f32[0] * v17;
      v19 = (int)v18.m128_f32[0];
      v4.m128_f32[0] = (float)(int)v18.m128_f32[0];
      v22 = _mm_cmplt_ss(v4, v18).m128_u32[0];
    }
    else
    {
      v20 = v9;
      v19 = (int)v9.m128_f32[0];
      v20.m128_f32[0] = (float)(int)v9.m128_f32[0];
      v22 = _mm_cmplt_ss(v20, v9).m128_u32[0];
    }
    v21 = v19 - v22;
    *a4 = v21;
    if ( v21 > a1 )
      *a4 = a1;
  }
  else
  {
    *a4 = 1;
  }
}
