/*
 * XREFs of ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18005CE5C
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x18005CC64 (-StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x18006341C (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 */

void __fastcall RayStabilizer::PerformLowPassFilterStabilization(
        RayStabilizer *this,
        struct RayStabilizationResult *a2)
{
  __int64 v2; // r14
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  float v6; // xmm6_4
  unsigned int v7; // r15d
  __int64 v8; // r12
  __int64 *v9; // r13
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm12_4
  float v14; // xmm7_4
  float v15; // xmm11_4
  int v16; // ebx
  bool v17; // al
  __int64 v18; // rcx
  float v19; // xmm3_4
  __int64 v20; // rcx
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  __m128 v24; // xmm3
  __int32 v25; // xmm0_4
  __m128 v26; // xmm1
  float v27; // [rsp+28h] [rbp-79h] BYREF
  float v28; // [rsp+2Ch] [rbp-75h]
  float v29; // [rsp+30h] [rbp-71h]
  float v30; // [rsp+34h] [rbp-6Dh]
  float v31; // [rsp+38h] [rbp-69h]
  float v32; // [rsp+3Ch] [rbp-65h]
  __int128 v33; // [rsp+40h] [rbp-61h]

  v2 = *(unsigned int *)a2;
  v4 = 0;
  RayStabilizationResult::GetAtStep(a2, &v27, v2 - 1);
  v5 = *((_QWORD *)this + 4);
  if ( v5 > 3 )
    v5 = 3LL;
  v6 = (float)((int)v5 + 1);
  if ( (__int64)(v5 + 1) < 0 )
    v6 = v6 + 1.8446744e19;
  v7 = 0;
  v8 = *((_QWORD *)this + 3);
  v9 = *(__int64 **)this;
  v10 = v27 * v6;
  v11 = v28 * v6;
  v12 = v29 * v6;
  v13 = v30 * v6;
  v14 = v31 * v6;
  v15 = v32 * v6;
  while ( 1 )
  {
    v16 = v4 | 1;
    v17 = v8 != *((_QWORD *)this + 3) + *((_QWORD *)this + 4) && v7 < v5;
    v4 = v16 & 0xFFFFFFFE;
    if ( !v17 )
      break;
    if ( v9 )
      v18 = *v9;
    else
      v18 = 0LL;
    RayStabilizationResult::GetAtStep(
      *(_QWORD *)(*(_QWORD *)(v18 + 8) + 8 * (v8 & (*(_QWORD *)(v18 + 16) - 1LL))),
      &v27,
      v2 - 1);
    v19 = (float)(int)(v5 - v7);
    if ( (__int64)(v5 - v7) < 0 )
      v19 = v19 + 1.8446744e19;
    v6 = v6 + v19;
    ++v8;
    ++v7;
    v12 = v12 + (float)(v29 * v19);
    v10 = v10 + (float)(v27 * v19);
    v11 = v11 + (float)(v28 * v19);
    v14 = v14 + (float)(v31 * v19);
    v15 = v15 + (float)(v32 * v19);
    v13 = (float)(v30 * v19) + v13;
  }
  v20 = 3LL * *(unsigned int *)a2;
  v28 = v14 * (float)(1.0 / v6);
  v21 = _mm_movelh_ps(
          _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)(1.0 / v6) * v13), (__m128)LODWORD(v28)),
          (__m128)COERCE_UNSIGNED_INT((float)(1.0 / v6) * v15));
  *(float *)&v33 = v10 * (float)(1.0 / v6);
  v22 = _mm_mul_ps(v21, v21);
  *((float *)&v33 + 1) = v11 * (float)(1.0 / v6);
  *((float *)&v33 + 2) = v12 * (float)(1.0 / v6);
  v23 = _mm_shuffle_ps(v22, v22, 102);
  v22.m128_f32[0] = (float)(v22.m128_f32[0] + v23.m128_f32[0]) + _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
  v24 = _mm_div_ps(v21, _mm_sqrt_ps(_mm_shuffle_ps(v22, v22, 0)));
  v27 = v24.m128_f32[0];
  LODWORD(v28) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
  v25 = v24.m128_i32[0];
  v26 = (__m128)LODWORD(v28);
  v24.m128_i32[0] = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
  HIDWORD(v33) = v25;
  v29 = v24.m128_f32[0];
  *(_OWORD *)((char *)a2 + 8 * v20 + 4) = v33;
  *(_QWORD *)((char *)a2 + 8 * v20 + 20) = _mm_unpacklo_ps(v26, (__m128)v24.m128_u32[0]).m128_u64[0];
  ++*(_DWORD *)a2;
}
