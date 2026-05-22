/*
 * XREFs of ?PopulateTargetingData@MPCSixDofProcessor@@EEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18003D9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180041298 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA-AW4wil_deta.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x180044928 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 */

__int64 __fastcall MPCSixDofProcessor::PopulateTargetingData(
        MPCSixDofProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  float v6; // eax
  float v7; // xmm13_4
  float v8; // xmm14_4
  float v9; // xmm15_4
  __int64 v10; // rax
  float v11; // xmm8_4
  float v12; // xmm12_4
  float v13; // xmm9_4
  float v14; // xmm11_4
  __int64 v15; // xmm0_8
  float v16; // xmm10_4
  float v17; // xmm3_4
  float v18; // xmm6_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm11_4
  float v22; // xmm1_4
  float v23; // xmm13_4
  float v24; // xmm11_4
  float v25; // xmm7_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm13_4
  __int64 v29; // xmm0_8
  int v30; // eax
  __int64 v31; // xmm0_8
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __m128 v35; // xmm13
  __m128 v36; // xmm10
  __m128 v37; // xmm11
  __m128 v38; // xmm8
  __m128 v39; // xmm9
  __m128 v40; // xmm12
  __m128 v41; // xmm2
  float v42; // xmm5_4
  float v43; // xmm7_4
  float v44; // xmm6_4
  float v45; // xmm3_4
  float v46; // xmm4_4
  float v47; // xmm1_4
  unsigned __int64 v48; // xmm0_8
  float v49; // xmm5_4
  float v50; // xmm1_4
  __m128 v51; // xmm3
  __m128 v52; // xmm2
  __m128 v53; // xmm1
  __m128 v54; // xmm0
  __int128 v56; // [rsp+38h] [rbp-99h] BYREF
  __int64 v57; // [rsp+48h] [rbp-89h] BYREF
  float v58; // [rsp+50h] [rbp-81h]
  _BYTE v59[8]; // [rsp+58h] [rbp-79h] BYREF
  float v60; // [rsp+138h] [rbp+67h]
  __int16 v61; // [rsp+13Ch] [rbp+6Bh]
  float v62; // [rsp+140h] [rbp+6Fh] BYREF
  __int16 v63; // [rsp+144h] [rbp+73h]
  float v64; // [rsp+148h] [rbp+77h]
  __int32 v65; // [rsp+150h] [rbp+7Fh]

  *((_BYTE *)a3 + 500) = 1;
  *((_DWORD *)a3 + 134) = *((_DWORD *)a3 + 289);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetCachedFeatureEnabledState();
  LOBYTE(v61) = 3;
  v62 = 0.0;
  v63 = v61;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data,
    0xAC02ABu,
    (const struct FEATURE_LOGGED_TRAITS *)&v62,
    1,
    3u);
  if ( *((_BYTE *)a3 + 1380) && *((_BYTE *)a3 + 1381) )
  {
    v57 = 0LL;
    *((_BYTE *)this + 3208) = 1;
    v6 = *((float *)a3 + 344);
    *(_QWORD *)&v56 = *((_QWORD *)a3 + 171);
    v7 = v6;
    v8 = *(float *)&v56;
    v9 = *((float *)&v56 + 1);
    v56 = *(_OWORD *)((char *)a3 + 1352);
    v60 = v6;
    v58 = FLOAT_N1_0;
    v10 = Windows::Foundation::Numerics::transform(v59, &v57, &v56);
    v11 = *((float *)a2 + 4);
    v12 = *(float *)a2;
    v13 = *((float *)a2 + 8);
    v14 = *(float *)a2;
    v15 = *(_QWORD *)v10;
    v16 = *((float *)a2 + 1);
    v17 = *((float *)a2 + 5);
    v18 = *((float *)a2 + 9);
    v19 = *((float *)a2 + 6);
    v20 = *((float *)a2 + 10);
    LODWORD(v10) = *(_DWORD *)(v10 + 8);
    *(_QWORD *)&v56 = v15;
    DWORD2(v56) = v10;
    v21 = (float)((float)(v14 * v8) + (float)(v11 * v9)) + (float)(v13 * v7);
    v22 = v18 * v7;
    v23 = *((float *)a2 + 2);
    v24 = v21 + *((float *)a2 + 12);
    v25 = (float)((float)((float)(v17 * v9) + (float)(v16 * v8)) + v22) + *((float *)a2 + 13);
    v62 = *(float *)&v15;
    v26 = (float)((float)((float)(v19 * v9) + (float)(v23 * v8)) + (float)(v60 * v20)) + *((float *)a2 + 14);
    v64 = *((float *)&v15 + 1);
    v65 = v10;
    *((float *)a3 + 135) = v24;
    *((float *)a3 + 136) = v25;
    *((float *)a3 + 137) = v26;
    *((float *)a3 + 138) = (float)((float)(v12 * *(float *)&v15) + (float)(v11 * *((float *)&v15 + 1)))
                         + (float)(v13 * *(float *)&v10);
    *((float *)a3 + 139) = (float)((float)(v16 * *(float *)&v15) + (float)(v17 * *((float *)&v15 + 1)))
                         + (float)(v18 * *(float *)&v10);
    v27 = v60;
    v28 = (float)((float)(v23 * *(float *)&v15) + (float)(v19 * *((float *)&v15 + 1))) + (float)(*(float *)&v10 * v20);
  }
  else
  {
    *((_BYTE *)this + 3208) = 0;
    *((_BYTE *)a3 + 500) = 1;
    v29 = *((_QWORD *)a2 + 16);
    v58 = *((float *)a2 + 34);
    v30 = *((_DWORD *)a2 + 37);
    v27 = v58;
    v57 = v29;
    v31 = *(_QWORD *)((char *)a2 + 140);
    v9 = *((float *)&v57 + 1);
    v8 = *(float *)&v57;
    DWORD2(v56) = v30;
    *((_DWORD *)a3 + 135) = *((_DWORD *)a2 + 38);
    *((_DWORD *)a3 + 136) = *((_DWORD *)a2 + 39);
    v32 = *((_DWORD *)a2 + 40);
    *(_QWORD *)&v56 = v31;
    LODWORD(v31) = DWORD2(v56);
    *((_DWORD *)a3 + 137) = v32;
    v33 = *((_DWORD *)a2 + 41);
    v65 = v31;
    LODWORD(v31) = DWORD1(v56);
    *((_DWORD *)a3 + 138) = v33;
    v34 = *((_DWORD *)a2 + 42);
    v64 = *(float *)&v31;
    LODWORD(v31) = v56;
    *((_DWORD *)a3 + 139) = v34;
    v28 = *((float *)a2 + 43);
    v62 = *(float *)&v31;
    v60 = v27;
  }
  *((float *)a3 + 140) = v28;
  v35 = *((__m128 *)a2 + 84);
  v36 = *((__m128 *)a2 + 85);
  v37 = *((__m128 *)a2 + 86);
  v38 = *((__m128 *)a2 + 87);
  v39 = v35;
  v40 = _mm_shuffle_ps(v35, v35, 85);
  v41 = v40;
  v42 = _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
  v43 = _mm_shuffle_ps(v36, v36, 85).m128_f32[0];
  v44 = _mm_shuffle_ps(v37, v37, 85).m128_f32[0];
  v45 = _mm_shuffle_ps(v37, v37, 170).m128_f32[0];
  v46 = _mm_shuffle_ps(v36, v36, 170).m128_f32[0];
  v39.m128_f32[0] = (float)((float)((float)(v35.m128_f32[0] * v8) + (float)(v36.m128_f32[0] * v9))
                          + (float)(v37.m128_f32[0] * v27))
                  + v38.m128_f32[0];
  v41.m128_f32[0] = (float)((float)((float)(v40.m128_f32[0] * v8) + (float)(v43 * v9)) + (float)(v44 * v27))
                  + _mm_shuffle_ps(v38, v38, 85).m128_f32[0];
  v47 = (float)((float)(v42 * v8) + (float)(v46 * v9)) + (float)(v45 * v60);
  v48 = _mm_unpacklo_ps(v39, v41).m128_u64[0];
  v41.m128_i32[0] = v65;
  *((_QWORD *)this + 344) = v48;
  v35.m128_f32[0] = v35.m128_f32[0] * v62;
  v40.m128_f32[0] = v40.m128_f32[0] * v62;
  v49 = v42 * v62;
  v58 = v47 + _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
  v50 = v64;
  *((float *)this + 690) = v58;
  v35.m128_f32[0] = (float)(v35.m128_f32[0] + (float)(v36.m128_f32[0] * v50))
                  + (float)(v37.m128_f32[0] * v41.m128_f32[0]);
  v40.m128_f32[0] = (float)(v40.m128_f32[0] + (float)(v43 * v50)) + (float)(v44 * v41.m128_f32[0]);
  *(_QWORD *)((char *)this + 2764) = _mm_unpacklo_ps(v35, v40).m128_u64[0];
  v58 = (float)(v49 + (float)(v46 * v50)) + (float)(v45 * v41.m128_f32[0]);
  *((float *)this + 693) = v58;
  v51 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 2764), (__m128)*((unsigned int *)this + 693));
  v52 = _mm_mul_ps(v51, v51);
  v53 = _mm_shuffle_ps(v52, v52, 102);
  v52.m128_f32[0] = (float)(v52.m128_f32[0] + v53.m128_f32[0]) + _mm_shuffle_ps(v53, v53, 85).m128_f32[0];
  v54 = _mm_div_ps(v51, _mm_sqrt_ps(_mm_shuffle_ps(v52, v52, 0)));
  *(_QWORD *)((char *)this + 2764) = _mm_unpacklo_ps(v54, _mm_shuffle_ps(v54, v54, 85)).m128_u64[0];
  *((_DWORD *)this + 693) = _mm_shuffle_ps(v54, v54, 170).m128_u32[0];
  return 0LL;
}
