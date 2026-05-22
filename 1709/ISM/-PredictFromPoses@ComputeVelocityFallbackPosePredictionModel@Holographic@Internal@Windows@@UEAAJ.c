/*
 * XREFs of ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800AF030
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800AE32C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x1800AE3DC (PoseClientStatics--SpatialTrackingPoseToInversePoseWithDifferentials.c)
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x1800AE99C (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x1800AEA78 (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 *     ??$SE3_mult_a_binv@M@ST@@YA?AU?$SE3@M@0@AEBU10@0@Z @ 0x1800BB2D0 (--$SE3_mult_a_binv@M@ST@@YA-AU-$SE3@M@0@AEBU10@0@Z.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x1800C900C (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x1800C9248 (--$SE3_log@M@ST@@YAXQEAMAEBU-$SE3@M@0@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel::PredictFromPoses(
        Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel *this,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a5)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char *v10; // rax
  __int64 v11; // rdx
  char *v12; // rdi
  __int64 v13; // rax
  int v14; // edx
  bool v15; // al
  bool v16; // r8
  bool v17; // cl
  bool v18; // dl
  bool v19; // r14
  bool v20; // si
  unsigned __int64 v21; // rax
  __m128 v22; // xmm1
  __int128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  __int128 *v27; // rax
  struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *v28; // rdx
  float v29; // xmm6_4
  float v30; // xmm7_4
  __m128 *v31; // rax
  __m128 v32; // xmm1
  __m128 v33; // xmm0
  __m128 v34; // xmm4
  __m128 v35; // xmm1
  __m128 v36; // xmm2
  __m128 v37; // xmm4
  const char *v38; // [rsp+30h] [rbp-D8h]
  __m128 v39; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v40; // [rsp+48h] [rbp-C0h]
  __m128 v41; // [rsp+58h] [rbp-B0h]
  __m128 v42; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v43; // [rsp+78h] [rbp-90h]
  __int128 v44; // [rsp+88h] [rbp-80h]
  __m128 v45; // [rsp+98h] [rbp-70h] BYREF
  __m128 v46; // [rsp+A8h] [rbp-60h]
  __m128 v47; // [rsp+B8h] [rbp-50h]
  __int128 v48; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v49; // [rsp+D8h] [rbp-30h]
  __int128 v50; // [rsp+E8h] [rbp-20h]
  __int128 v51; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v52[2]; // [rsp+108h] [rbp+0h]
  _DWORD v53[4]; // [rsp+128h] [rbp+20h] BYREF
  char v54; // [rsp+138h] [rbp+30h]
  __int32 v55; // [rsp+17Ch] [rbp+74h]
  unsigned __int64 v56; // [rsp+180h] [rbp+78h]
  __int32 v57; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+18Ch] [rbp+84h]
  _OWORD v59[6]; // [rsp+1C8h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  if ( !a2 )
  {
    v7 = 217LL;
LABEL_3:
    v8 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.h",
      (const char *)v8);
    return v8;
  }
  if ( !a5 )
  {
    v7 = 218LL;
    goto LABEL_3;
  }
  if ( a3 < 2 )
  {
    v10 = "Incorrect number of poses provided";
    v11 = 220LL;
LABEL_10:
    v8 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.h",
      (const char *)0x80070057LL,
      (unsigned __int16 *)v10,
      v38);
    return v8;
  }
  v12 = (char *)a2 + 160;
  v13 = *((_QWORD *)a2 + 20);
  if ( *(_QWORD *)a2 > v13 )
  {
    v10 = "Poses incorrectly ordered";
    v11 = 224LL;
    goto LABEL_10;
  }
  if ( v13 > a4 )
  {
    v10 = "timestamp predates poses";
    v11 = 225LL;
    goto LABEL_10;
  }
  v14 = *((_DWORD *)a2 + 4);
  v15 = (v14 & 4) == 0;
  v16 = (v14 & 1) != 0 && (v12[16] & 1) != 0;
  v17 = (v14 & 0x10) == 0;
  v18 = (v14 & 2) != 0 && (v12[16] & 2) != 0;
  v19 = v15 && v16;
  v20 = v17 && v18;
  v21 = 0LL;
  v22 = *(__m128 *)((char *)a2 + 52);
  v42 = *(__m128 *)((char *)a2 + 36);
  v23 = *(_OWORD *)((char *)a2 + 68);
  v43 = v22;
  v24 = *(__m128 *)(v12 + 52);
  v44 = v23;
  v25 = *(__m128 *)(v12 + 36);
  v46 = v24;
  v45 = v25;
  v26 = *(__m128 *)(v12 + 68);
  v48 = `ST::SE3_identity<float>'::`2'::id;
  v47 = v26;
  v50 = xmmword_1800E60E8;
  v49 = xmmword_1800E60D8;
  do
  {
    *((_DWORD *)&v52[-1] + v21) = 0;
    *((_DWORD *)v52 + v21++ + 2) = 0;
  }
  while ( v21 < 6 );
  if ( v19 || v20 )
  {
    v27 = PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(v59, (__int64)&v42);
    v28 = a2;
  }
  else
  {
    v27 = PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(v59, (__int64)&v45);
    v28 = (struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v12;
  }
  v48 = *v27;
  v49 = v27[1];
  v50 = v27[2];
  v51 = v27[3];
  v52[0] = v27[4];
  v52[1] = v27[5];
  SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=((__int64)v53, (__int64)v28);
  v29 = (double)((int)a4 - v53[0]) / (double)(int)qword_18010F278;
  if ( v29 <= 0.0 )
  {
    SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=((__int64)a5, (__int64)v53);
  }
  else
  {
    if ( !v19 && !v20 )
      goto LABEL_43;
    v39.m128_u64[0] = __PAIR64__(v42.m128_u32[3], v42.m128_u32[0]);
    v39.m128_u64[1] = __PAIR64__(v42.m128_u32[1], v43.m128_u32[2]);
    v40.m128_u64[0] = __PAIR64__(v43.m128_u32[3], v43.m128_u32[0]);
    v40.m128_u64[1] = __PAIR64__(v43.m128_u32[1], v42.m128_u32[2]);
    v42 = v39;
    v43 = v40;
    ST::SE3_invert<float>(v59, &v42);
    v39.m128_u64[0] = __PAIR64__(v45.m128_u32[3], v45.m128_u32[0]);
    v39.m128_u64[1] = __PAIR64__(v45.m128_u32[1], v46.m128_u32[2]);
    v40.m128_u64[0] = __PAIR64__(v46.m128_u32[3], v46.m128_u32[0]);
    v40.m128_u64[1] = __PAIR64__(v46.m128_u32[1], v45.m128_u32[2]);
    v41 = v47;
    v45 = v39;
    v46 = v40;
    ST::SE3_invert<float>(&v39, &v45);
    v30 = (double)(*(_DWORD *)v12 - *(_DWORD *)a2) / (double)(int)qword_18010F278;
    if ( v30 >= 0.000000059600001 )
    {
      v31 = (__m128 *)ST::SE3_mult_a_binv<float>(&v45, &v39, v59);
      v32 = v31[1];
      v39 = *v31;
      v33 = v31[2];
      v40 = v32;
      v41 = v33;
      ST::SE3_log<float>(&v51, &v39);
      v34 = (__m128)LODWORD(FLOAT_1_0);
      v35 = (__m128)LODWORD(v52[0]);
      v36 = (__m128)DWORD1(v52[0]);
      v34.m128_f32[0] = 1.0 / v30;
      v37 = _mm_shuffle_ps(v34, v34, 0);
      v35.m128_f32[0] = *(float *)v52 * v37.m128_f32[0];
      v36.m128_f32[0] = *((float *)v52 + 1) * v37.m128_f32[0];
      v42 = _mm_mul_ps((__m128)v51, v37);
      *(_QWORD *)&v52[0] = _mm_unpacklo_ps(v35, v36).m128_u64[0];
      v51 = (__int128)v42;
    }
    if ( !v19 )
    {
LABEL_43:
      if ( (v54 & 4) != 0 )
      {
        LODWORD(v51) = v55;
        *(_QWORD *)((char *)&v51 + 4) = v56;
      }
    }
    if ( !v20 && (v54 & 0x10) != 0 )
    {
      HIDWORD(v51) = v57;
      *(_QWORD *)&v52[0] = v58;
    }
    if ( !Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode(
            v53,
            (__int64)&v48,
            a4,
            v29,
            (__int64)a5) )
    {
      v8 = -2147418113;
      v7 = 296LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
