/*
 * XREFs of ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18005790C
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x1800576CC (-StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x18005AA68 (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 */

void __fastcall RayStabilizer::PerformLowPassFilterStabilization(
        RayStabilizer *this,
        struct RayStabilizationResult *a2)
{
  __int64 v2; // r15
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
  float v6; // xmm6_4
  unsigned int v7; // eax
  __int64 v8; // r12
  __int64 *v9; // r13
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm12_4
  float v14; // xmm7_4
  float i; // xmm11_4
  int v16; // ebx
  __int64 v17; // rdi
  bool v18; // al
  __int64 v19; // rcx
  float v20; // xmm2_4
  __int64 v21; // rcx
  __m128 v22; // xmm3
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  __m128 v25; // xmm3
  _BYTE v26[12]; // [rsp+28h] [rbp-79h] BYREF
  float v27; // [rsp+34h] [rbp-6Dh]
  float v28; // [rsp+38h] [rbp-69h]
  float v29; // [rsp+3Ch] [rbp-65h]
  __int128 v30; // [rsp+40h] [rbp-61h]
  unsigned int v31; // [rsp+108h] [rbp+67h]

  v2 = *(unsigned int *)a2;
  v4 = 0;
  RayStabilizationResult::GetAtStep(a2, v26, v2 - 1);
  v5 = *((_QWORD *)this + 4);
  if ( v5 > 3 )
    v5 = 3LL;
  v6 = (float)((int)v5 + 1);
  if ( (__int64)(v5 + 1) < 0 )
    v6 = v6 + 1.8446744e19;
  v7 = 0;
  v8 = *((_QWORD *)this + 3);
  v9 = *(__int64 **)this;
  v10 = *(float *)v26 * v6;
  v11 = *(float *)&v26[4] * v6;
  v12 = *(float *)&v26[8] * v6;
  v13 = v27 * v6;
  v14 = v28 * v6;
  for ( i = v29 * v6; ; i = i + (float)(v29 * v20) )
  {
    v31 = v7;
    v16 = v4 | 1;
    v17 = v7;
    v18 = v8 != *((_QWORD *)this + 4) + *((_QWORD *)this + 3) && v7 < v5;
    v4 = v16 & 0xFFFFFFFE;
    if ( !v18 )
      break;
    if ( v9 )
      v19 = *v9;
    else
      v19 = 0LL;
    RayStabilizationResult::GetAtStep(
      *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8 * (v8 & (*(_QWORD *)(v19 + 16) - 1LL))),
      v26,
      v2 - 1);
    v20 = (float)((int)v5 - v17);
    if ( (__int64)(v5 - v17) < 0 )
      v20 = v20 + 1.8446744e19;
    v6 = v6 + v20;
    ++v8;
    v7 = v31 + 1;
    v10 = (float)(*(float *)v26 * v20) + v10;
    v11 = (float)(*(float *)&v26[4] * v20) + v11;
    v12 = (float)(*(float *)&v26[8] * v20) + v12;
    v13 = (float)(v27 * v20) + v13;
    v14 = (float)(v28 * v20) + v14;
  }
  v21 = 3LL * *(unsigned int *)a2;
  *(float *)v26 = (float)(1.0 / v6) * v13;
  *(float *)&v26[4] = v14 * (float)(1.0 / v6);
  v22 = _mm_movelh_ps((__m128)*(unsigned __int64 *)v26, (__m128)COERCE_UNSIGNED_INT((float)(1.0 / v6) * i));
  *(float *)&v30 = v10 * (float)(1.0 / v6);
  v23 = _mm_mul_ps(v22, v22);
  *((float *)&v30 + 1) = v11 * (float)(1.0 / v6);
  *((float *)&v30 + 2) = v12 * (float)(1.0 / v6);
  v24 = _mm_shuffle_ps(v23, v23, 102);
  v23.m128_f32[0] = (float)(v23.m128_f32[0] + v24.m128_f32[0]) + _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
  v25 = _mm_div_ps(v22, _mm_sqrt_ps(_mm_shuffle_ps(v23, v23, 0)));
  *(_DWORD *)v26 = v25.m128_i32[0];
  *(_DWORD *)&v26[4] = _mm_shuffle_ps(v25, v25, 85).m128_u32[0];
  HIDWORD(v30) = v25.m128_i32[0];
  *(_OWORD *)((char *)a2 + 8 * v21 + 4) = v30;
  *(_DWORD *)&v26[8] = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
  *(_QWORD *)((char *)a2 + 8 * v21 + 20) = *(_QWORD *)&v26[4];
  ++*(_DWORD *)a2;
}
