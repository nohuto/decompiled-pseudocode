/*
 * XREFs of ?PopulateTargetingData@MPCSixDofProcessor@@EEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x18004D488 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180051A40 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA-AW4wil_deta.c)
 */

__int64 __fastcall MPCSixDofProcessor::PopulateTargetingData(
        MPCSixDofProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  float v6; // eax
  __int128 v7; // xmm0
  float v8; // xmm8_4
  float v9; // xmm14_4
  float v10; // xmm15_4
  float *v11; // rax
  float v12; // xmm7_4
  float v13; // xmm13_4
  float v14; // xmm9_4
  float v15; // xmm12_4
  float v16; // xmm5_4
  float v17; // xmm11_4
  float v18; // xmm6_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm10_4
  float v23; // xmm4_4
  float v24; // xmm8_4
  float v25; // xmm6_4
  float v26; // xmm13_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  __int64 v29; // xmm0_8
  int v30; // eax
  __int64 v31; // xmm0_8
  __m128 v32; // xmm13
  __m128 v33; // xmm10
  __m128 v34; // xmm11
  __m128 v35; // xmm8
  __m128 v36; // xmm9
  __m128 v37; // xmm12
  __m128 v38; // xmm2
  float v39; // xmm5_4
  float v40; // xmm7_4
  float v41; // xmm6_4
  float v42; // xmm4_4
  float v43; // xmm3_4
  float v44; // xmm1_4
  unsigned __int64 v45; // xmm0_8
  float v46; // xmm5_4
  float v47; // xmm1_4
  __m128 v48; // xmm3
  __m128 v49; // xmm2
  __m128 v50; // xmm1
  __m128 v51; // xmm0
  __int64 v53; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C8h]
  __int64 v55; // [rsp+48h] [rbp-C0h]
  float v56; // [rsp+50h] [rbp-B8h]
  float v57; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v58; // [rsp+64h] [rbp-A4h] BYREF
  float v59; // [rsp+138h] [rbp+30h]
  __int16 v60; // [rsp+13Ch] [rbp+34h]
  int v61; // [rsp+140h] [rbp+38h] BYREF
  __int16 v62; // [rsp+144h] [rbp+3Ch]

  *((_BYTE *)a3 + 676) = 1;
  *((_DWORD *)a3 + 178) = *((_DWORD *)a3 + 333);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetCachedFeatureEnabledState();
  LOBYTE(v60) = 3;
  v61 = 0;
  v62 = v60;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data,
    0xAC02ABu,
    (const struct FEATURE_LOGGED_TRAITS *)&v61,
    1,
    3);
  if ( *((_BYTE *)a3 + 1548) && *((_BYTE *)a3 + 1549) )
  {
    v53 = 0LL;
    *((_BYTE *)this + 4476) = 1;
    v6 = *((float *)a3 + 386);
    v55 = *((_QWORD *)a3 + 192);
    v7 = *((_OWORD *)a3 + 95);
    v56 = v6;
    v8 = v6;
    v9 = *(float *)&v55;
    v10 = *((float *)&v55 + 1);
    v58 = v7;
    v59 = v6;
    *(float *)&v54 = FLOAT_N1_0;
    v11 = Windows::Foundation::Numerics::transform(&v57, (float *)&v53, (float *)&v58);
    v12 = *((float *)a2 + 4);
    v13 = *(float *)a2;
    v14 = *((float *)a2 + 8);
    v15 = *(float *)a2;
    *(_QWORD *)&v7 = *(_QWORD *)v11;
    v16 = *((float *)a2 + 1);
    v17 = *((float *)a2 + 5);
    v18 = *((float *)a2 + 9);
    v19 = *((float *)a2 + 2);
    v20 = *((float *)a2 + 10);
    v21 = v14 * v8;
    *(float *)&v54 = v11[2];
    v53 = v7;
    v22 = (float)((float)((float)(v17 * v10) + (float)(v16 * v9)) + (float)(v18 * v8)) + *((float *)a2 + 13);
    v23 = (float)((float)((float)(*((float *)a2 + 6) * v10) + (float)(v19 * v9)) + (float)(v20 * v56))
        + *((float *)a2 + 14);
    v24 = (float)(*((float *)a2 + 6) * *((float *)&v7 + 1)) + (float)(v19 * *(float *)&v7);
    v25 = v18 * *(float *)&v54;
    v26 = (float)((float)(v13 * *(float *)&v7) + (float)(v12 * *((float *)&v7 + 1))) + (float)(v14 * *(float *)&v54);
    v27 = v20 * *(float *)&v54;
    *((float *)a3 + 179) = (float)((float)((float)(v15 * v9) + (float)(v12 * v10)) + v21) + *((float *)a2 + 12);
    *((float *)a3 + 180) = v22;
    *((float *)a3 + 181) = v23;
    *((float *)a3 + 182) = v26;
    v28 = v56;
    *((float *)a3 + 183) = (float)((float)(v17 * *((float *)&v7 + 1)) + (float)(v16 * *(float *)&v7)) + v25;
    *((float *)a3 + 184) = v24 + v27;
  }
  else
  {
    *((_BYTE *)this + 4476) = 0;
    *((_BYTE *)a3 + 676) = 1;
    v29 = *((_QWORD *)a2 + 16);
    v56 = *((float *)a2 + 34);
    v28 = v56;
    LODWORD(v54) = *((_DWORD *)a2 + 37);
    v30 = *((_DWORD *)a2 + 38);
    v55 = v29;
    v31 = *(_QWORD *)((char *)a2 + 140);
    v10 = *((float *)&v55 + 1);
    v9 = *(float *)&v55;
    *((_DWORD *)a3 + 179) = v30;
    *((_DWORD *)a3 + 180) = *((_DWORD *)a2 + 39);
    *((_DWORD *)a3 + 181) = *((_DWORD *)a2 + 40);
    *((_DWORD *)a3 + 182) = *((_DWORD *)a2 + 41);
    *((_DWORD *)a3 + 183) = *((_DWORD *)a2 + 42);
    *((_DWORD *)a3 + 184) = *((_DWORD *)a2 + 43);
    v59 = v28;
    v53 = v31;
  }
  v32 = *((__m128 *)a2 + 95);
  v33 = *((__m128 *)a2 + 96);
  v34 = *((__m128 *)a2 + 97);
  v35 = *((__m128 *)a2 + 98);
  v36 = v32;
  v37 = _mm_shuffle_ps(v32, v32, 85);
  v38 = v37;
  v39 = _mm_shuffle_ps(v32, v32, 170).m128_f32[0];
  v40 = _mm_shuffle_ps(v33, v33, 85).m128_f32[0];
  v41 = _mm_shuffle_ps(v34, v34, 85).m128_f32[0];
  v42 = _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
  v43 = _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
  v36.m128_f32[0] = (float)((float)((float)(v32.m128_f32[0] * v9) + (float)(v33.m128_f32[0] * v10))
                          + (float)(v34.m128_f32[0] * v28))
                  + v35.m128_f32[0];
  v38.m128_f32[0] = (float)((float)((float)(v37.m128_f32[0] * v9) + (float)(v40 * v10)) + (float)(v41 * v28))
                  + _mm_shuffle_ps(v35, v35, 85).m128_f32[0];
  v44 = (float)((float)(v39 * v9) + (float)(v42 * v10)) + (float)(v43 * v59);
  v45 = _mm_unpacklo_ps(v36, v38).m128_u64[0];
  v38.m128_i32[0] = v54;
  *((_QWORD *)this + 503) = v45;
  v32.m128_f32[0] = v32.m128_f32[0] * *(float *)&v53;
  v37.m128_f32[0] = v37.m128_f32[0] * *(float *)&v53;
  v46 = v39 * *(float *)&v53;
  v56 = v44 + _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
  v47 = *((float *)&v53 + 1);
  *((float *)this + 1008) = v56;
  v32.m128_f32[0] = (float)(v32.m128_f32[0] + (float)(v33.m128_f32[0] * v47))
                  + (float)(v34.m128_f32[0] * v38.m128_f32[0]);
  v37.m128_f32[0] = (float)(v37.m128_f32[0] + (float)(v40 * v47)) + (float)(v41 * v38.m128_f32[0]);
  *(_QWORD *)((char *)this + 4036) = _mm_unpacklo_ps(v32, v37).m128_u64[0];
  v56 = (float)(v46 + (float)(v42 * v47)) + (float)(v43 * v38.m128_f32[0]);
  *((float *)this + 1011) = v56;
  v48 = _mm_movelh_ps(
          _mm_unpacklo_ps((__m128)*((unsigned int *)this + 1009), (__m128)*((unsigned int *)this + 1010)),
          (__m128)*((unsigned int *)this + 1011));
  v49 = _mm_mul_ps(v48, v48);
  v50 = _mm_shuffle_ps(v49, v49, 102);
  v49.m128_f32[0] = (float)(v49.m128_f32[0] + v50.m128_f32[0]) + _mm_shuffle_ps(v50, v50, 85).m128_f32[0];
  v51 = _mm_div_ps(v48, _mm_sqrt_ps(_mm_shuffle_ps(v49, v49, 0)));
  *(_QWORD *)((char *)this + 4036) = _mm_unpacklo_ps(v51, _mm_shuffle_ps(v51, v51, 85)).m128_u64[0];
  LODWORD(v56) = _mm_shuffle_ps(v51, v51, 170).m128_u32[0];
  *((float *)this + 1011) = v56;
  return 0LL;
}
