/*
 * XREFs of ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004EB20
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004FA00 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x180036B98 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x18004D788 (-IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x180050738 (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180060998 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180060C14 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     sqrtf_0 @ 0x1800CC365 (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=26
void __fastcall MPCSixDofProcessor::UpdatePoint(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char v4; // bl
  int v5; // xmm0_4
  bool v6; // al
  char v7; // r14
  volatile signed __int32 *v8; // rbx
  bool v9; // bl
  char v10; // bl
  int v11; // xmm0_4
  int v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm7_4
  float v17; // xmm6_4
  float v18; // xmm8_4
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rax
  float v23; // xmm1_4
  double v24; // xmm0_8
  __int64 v25; // rdx
  bool v26; // al
  BOOL v27; // ecx
  float *v28; // rax
  float v29; // xmm2_4
  __m128 v30; // xmm2
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128 v33; // xmm2
  __m128 v34; // xmm1
  __m128 v35; // xmm2
  __m128 v36; // xmm2
  __m128 v37; // xmm1
  __m128 v38; // xmm1
  __m128 v39; // xmm2
  __m128 v40; // xmm1
  _DWORD v41[2]; // [rsp+38h] [rbp-49h] BYREF
  LARGE_INTEGER Frequency; // [rsp+40h] [rbp-41h] BYREF
  float v43; // [rsp+48h] [rbp-39h]
  __int64 v44; // [rsp+50h] [rbp-31h]
  __int64 v45; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v46; // [rsp+60h] [rbp-21h]
  float v47; // [rsp+F4h] [rbp+73h]
  float v48; // [rsp+F8h] [rbp+77h]
  float v49; // [rsp+FCh] [rbp+7Bh]
  float v50; // [rsp+100h] [rbp+7Fh] BYREF
  int v51; // [rsp+104h] [rbp+83h]

  v44 = -2LL;
  v4 = 0;
  *((_DWORD *)this + 992) = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 339);
  *((_DWORD *)this + 1002) = *((_DWORD *)a2 + 338);
  *((_DWORD *)this + 1003) = v5;
  *((_DWORD *)this + 993) = *((_DWORD *)a2 + 336) & *((_DWORD *)a2 + 335);
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 494),
    (*((_DWORD *)a2 + 336) & 4) != 0,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 195),
    *((float *)a2 + 196),
    *((float *)a2 + 210));
  if ( *((_BYTE *)a2 + 1379) )
    *((float *)this + 994) = (float)((float)(*((float *)a2 + 342) - *((float *)this + 994)) * *((float *)this + 171))
                           + *((float *)this + 994);
  else
    *((_DWORD *)this + 994) = 0;
  v6 = (*((_DWORD *)this + 993) & 8) != 0;
  *((_BYTE *)this + 4501) = v6;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 489), v6, *((_QWORD *)a2 + 2));
  if ( *(_BYTE *)(*((_QWORD *)this + 489) + 10LL)
    || (v4 = 1, v7 = 0, *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 494), &v45) + 10LL)) )
  {
    v7 = 1;
  }
  if ( (v4 & 1) != 0 )
  {
    v8 = v46;
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
  }
  if ( v7 )
    MPCSixDofProcessor::ResetRayLength(this);
  v9 = (*((_DWORD *)a2 + 336) & 0x40) != 0;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 492), v9, *((_QWORD *)a2 + 2));
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 491), !v9, *((_QWORD *)a2 + 2));
  v10 = 0;
  if ( *((_BYTE *)this + 720) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 491) + 9LL) )
      *((_BYTE *)this + 720) = 0;
  }
  else if ( *(_BYTE *)(*((_QWORD *)this + 492) + 9LL) )
  {
    *((_BYTE *)this + 720) = 1;
    v10 = 1;
  }
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 493), *((_BYTE *)this + 720), *((_QWORD *)a2 + 2));
  if ( v10 )
  {
    v11 = *((_DWORD *)a2 + 338);
    v12 = *((_DWORD *)a2 + 339);
    *((_DWORD *)this + 998) = v11;
    *((_DWORD *)this + 999) = v12;
    *((_DWORD *)this + 1004) = v11;
    *((_DWORD *)this + 1005) = v12;
    *((_DWORD *)this + 179) = 2;
    *((_QWORD *)this + 503) = 0LL;
    *((_QWORD *)this + 504) = 0LL;
    *(_QWORD *)((char *)this + 4084) = 0LL;
  }
  if ( *((_BYTE *)this + 720) )
  {
    v13 = *((float *)this + 167);
    *((float *)this + 998) = (float)((float)(*((float *)this + 1002) - *((float *)this + 998)) * v13)
                           + *((float *)this + 998);
    v14 = (float)((float)(*((float *)this + 1003) - *((float *)this + 999)) * v13) + *((float *)this + 999);
    *((float *)this + 999) = v14;
    v15 = v14 - *((float *)this + 1001);
    *((float *)this + 1006) = *((float *)this + 998) - *((float *)this + 1000);
    *((float *)this + 1007) = v15;
    v16 = *((float *)this + 999) - *((float *)this + 1005);
    v17 = *((float *)this + 998) - *((float *)this + 1004);
    v18 = sqrtf_0((float)(v16 * v16) + (float)(v17 * v17));
    v19 = *((_DWORD *)this + 179);
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          v21 = *((_QWORD *)this + 492);
          QueryPerformanceFrequency(&Frequency);
          v22 = *(_QWORD *)(v21 + 32) - *(_QWORD *)(v21 + 16);
          v23 = (float)(int)v22;
          if ( v22 < 0 )
            v23 = v23 + 1.8446744e19;
          if ( (float)(v23 / (float)(int)Frequency.LowPart) > *((double *)this + 74) && v18 > *((double *)this + 78) )
          {
            if ( sqrtf_0(
                   (float)(*((float *)this + 1004) * *((float *)this + 1004))
                 + (float)(*((float *)this + 1005) * *((float *)this + 1005))) <= *((double *)this + 77) )
            {
              v24 = *((double *)this + 75);
              v25 = __PAIR64__(LODWORD(v16), LODWORD(v17));
            }
            else
            {
              v24 = *((double *)this + 76);
              v25 = *((_QWORD *)this + 502);
            }
            v26 = IsPointInHorizontalQuadrant(v24 * 0.0174532925199433, v25);
            v27 = !v26;
            *((_DWORD *)this + 179) = v27;
            if ( v26 )
            {
              v50 = v18;
              v51 = 0;
              v28 = &v50;
            }
            else
            {
              v41[0] = 0;
              *(float *)&v41[1] = v18;
              v28 = (float *)v41;
            }
            *((_QWORD *)this + 503) = *(_QWORD *)v28;
            if ( v27 )
              v17 = v16;
            if ( v17 < 0.0 )
            {
              v29 = *((float *)this + 1007) * -1.0;
              *((float *)this + 1006) = *((float *)this + 1006) * -1.0;
              *((float *)this + 1007) = v29;
            }
          }
        }
      }
      else
      {
        *((_DWORD *)this + 1006) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 1007) = 0;
    }
  }
  else
  {
    *((_QWORD *)this + 503) = 0LL;
  }
  if ( sqrtf_0(
         (float)(*((float *)this + 1006) * *((float *)this + 1006))
       + (float)(*((float *)this + 1007) * *((float *)this + 1007))) > 0.0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 493) + 9LL) )
    {
      v30 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 1008), (__m128)*((unsigned int *)this + 1009));
      v31 = _mm_mul_ps(v30, v30);
      v31.m128_f32[0] = v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0];
      v32 = _mm_div_ps(v30, _mm_sqrt_ps(_mm_shuffle_ps(v31, v31, 0)));
      v48 = v32.m128_f32[0];
      v49 = _mm_shuffle_ps(v32, v32, 85).m128_f32[0];
      v33 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 1006), (__m128)*((unsigned int *)this + 1007));
      v34 = _mm_mul_ps(v33, v33);
      v34.m128_f32[0] = v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0];
      v35 = _mm_div_ps(v33, _mm_sqrt_ps(_mm_shuffle_ps(v34, v34, 0)));
      v47 = _mm_shuffle_ps(v35, v35, 85).m128_f32[0];
      v34.m128_i32[0] = *((_DWORD *)this + 168);
      v35.m128_f32[0] = (float)((float)(v35.m128_f32[0] - v48) * v34.m128_f32[0]) + *((float *)this + 1008);
      v34.m128_f32[0] = (float)(v34.m128_f32[0] * (float)(v47 - v49)) + *((float *)this + 1009);
      *((_DWORD *)this + 1008) = v35.m128_i32[0];
      *((_DWORD *)this + 1009) = v34.m128_i32[0];
    }
    else
    {
      v36 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 1006), (__m128)*((unsigned int *)this + 1007));
      v37 = _mm_mul_ps(v36, v36);
      v37.m128_f32[0] = v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0];
      v38 = _mm_div_ps(v36, _mm_sqrt_ps(_mm_shuffle_ps(v37, v37, 0)));
      *((_QWORD *)this + 504) = _mm_unpacklo_ps(v38, _mm_shuffle_ps(v38, v38, 85)).m128_u64[0];
    }
  }
  v39 = (__m128)*((unsigned int *)this + 995);
  v40 = v39;
  v39.m128_f32[0] = (float)(v39.m128_f32[0] * *((float *)this + 1015)) + *((float *)this + 1012);
  v40.m128_f32[0] = (float)(v40.m128_f32[0] * *((float *)this + 1016)) + *((float *)this + 1013);
  v43 = (float)(*((float *)this + 995) * *((float *)this + 1017)) + *((float *)this + 1014);
  *((_QWORD *)this + 509) = _mm_unpacklo_ps(v39, v40).m128_u64[0];
  *((float *)this + 1020) = v43;
  *((_DWORD *)this + 1124) = *((_DWORD *)this + 993);
  *((_QWORD *)this + 500) = *((_QWORD *)this + 499);
}
