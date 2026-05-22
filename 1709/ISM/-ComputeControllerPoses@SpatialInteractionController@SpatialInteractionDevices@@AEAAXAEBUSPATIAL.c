/*
 * XREFs of ?ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@Windows@@1@Z @ 0x1800C57F0
 * Callers:
 *     ?TryUpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@2@Z @ 0x1800C5250 (-TryUpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAA_N_JPEAUISpatialGraph.c)
 *     ?UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData@2@PEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@7@3@Z @ 0x1800C5454 (-UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x180036808 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1800C27E8 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x1800C2AE8 (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 *     _lambda_447a3de97d139b2ebabe0ab1fe5c7f8c_::operator() @ 0x1800C6180 (_lambda_447a3de97d139b2ebabe0ab1fe5c7f8c_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatialPointerInteractionSourcePoseApi@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800C7244 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SpatialPointerInteractionSou.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionController::ComputeControllerPoses(
        SpatialInteractionDevices::SpatialInteractionController *this,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a3,
        __m128 *a4,
        __m128 *a5)
{
  char v5; // di
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v11; // xmm2
  __m128i v12; // xmm3
  char v14; // r15
  __m128 v15; // xmm1
  bool v16; // r12
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __m128 v20; // xmm0
  __int64 v21; // r8
  __m128 v22; // xmm8
  __m128 v23; // xmm9
  __m128 v24; // xmm7
  __m128 v25; // xmm6
  __m128 v26; // xmm7
  __m128 v27; // xmm8
  __m128 v28; // xmm9
  __m128 v29; // xmm7
  __m128 v30; // xmm6
  char v31; // r14
  __m128 v32; // xmm8
  __m128 v33; // xmm9
  double v34; // xmm15_8
  __m128 v35; // xmm3
  __m128 v36; // xmm14
  __m128 v37; // xmm1
  __m128 v38; // xmm10
  __m128 v39; // xmm13
  __m128 v40; // xmm2
  __m128 v41; // xmm0
  __m128 v42; // xmm6
  __m128 v43; // xmm3
  __m128 v44; // xmm0
  __m128 v45; // xmm11
  __m128 v46; // xmm10
  __m128 v47; // xmm4
  __m128 v48; // xmm11
  __m128 v49; // xmm6
  __m128 v50; // xmm7
  double v51; // xmm0_8
  __m128 v52; // xmm0
  __int128 v53; // xmm4
  bool v54; // zf
  __m128 v55; // xmm0
  __m128 v56; // xmm2
  __m128 v57; // xmm1
  __m128 v58; // xmm0
  __int128 v59; // xmm3
  __m128 v60; // xmm2
  __m128 v61; // xmm1
  char v62; // r8
  __m128 v63; // xmm0
  __m128 v64; // xmm13
  __m128 v65; // xmm14
  __m128 v66; // xmm15
  __m128 v67; // xmm2
  __m128 v68; // xmm3
  __m128 v69; // xmm1
  __m128 v70; // xmm5
  __m128 v71; // xmm4
  __m128 v72; // xmm1
  __m128 v73; // xmm3
  __m128 v74; // xmm2
  __m128 v75; // xmm1
  __m128 v76; // xmm0
  __m128 v77; // xmm2
  __m128 v78; // xmm0
  __m128 v79; // xmm3
  __m128 v80; // xmm1
  __m128 v81; // xmm2
  double v82; // xmm0_8
  unsigned __int64 v83; // xmm0_8
  __m128 v84; // xmm5
  double v85; // xmm15_8
  __m128 v86; // xmm0
  __m128 v87; // xmm5
  __m128 v88; // xmm3
  __m128 v89; // xmm2
  __m128 v90; // xmm1
  __m128 v91; // xmm8
  __m128 v92; // xmm1
  __m128 v93; // xmm3
  __m128 v94; // xmm2
  __m128 v95; // xmm1
  __m128 v96; // xmm0
  __m128 v97; // xmm2
  __m128 v98; // xmm0
  __m128 v99; // xmm4
  __m128 v100; // xmm1
  double v101; // xmm10_8
  __m128 v102; // xmm9
  __m128 v103; // xmm8
  __m128 v104; // xmm7
  __m128 v105; // xmm6
  double v106; // xmm0_8
  unsigned __int64 v107; // xmm0_8
  double v108; // xmm10_8
  char v109; // cl
  __m128 v110; // xmm0
  __m128 v111; // xmm6
  char v112; // cl
  char v113; // cl
  char v114; // [rsp+38h] [rbp-D0h]
  __int16 v115; // [rsp+40h] [rbp-C8h]
  int v116; // [rsp+44h] [rbp-C4h] BYREF
  __int16 v117; // [rsp+48h] [rbp-C0h]
  __m128 v118; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v119; // [rsp+68h] [rbp-A0h]
  __m128 v120; // [rsp+78h] [rbp-90h]
  __int128 v121; // [rsp+88h] [rbp-80h]
  __m128 v122; // [rsp+98h] [rbp-70h]
  __m128 v123; // [rsp+A8h] [rbp-60h]
  __m128 v124; // [rsp+B8h] [rbp-50h]
  __m128 v125; // [rsp+C8h] [rbp-40h]
  __m128 v126; // [rsp+D8h] [rbp-30h]
  __m128 v127; // [rsp+E8h] [rbp-20h]
  __m128 v128; // [rsp+F8h] [rbp-10h]
  __m128 v129; // [rsp+108h] [rbp+0h] BYREF
  __m128 v130; // [rsp+118h] [rbp+10h]
  __m128 v131; // [rsp+128h] [rbp+20h]
  __m128 v132; // [rsp+138h] [rbp+30h]
  _OWORD v133[4]; // [rsp+148h] [rbp+40h] BYREF

  v5 = 1;
  v7 = *(__m128 *)((char *)a2 + 68);
  v8 = *(__m128 *)((char *)a2 + 52);
  v9 = _mm_shuffle_ps(v8, *(__m128 *)((char *)a2 + 36), 244);
  v11 = _mm_and_ps(_mm_shuffle_ps(v8, v7, 14), DirectX::g_XMMask3);
  v12 = _mm_or_si128(_mm_srli_si128((__m128i)v7, 4), DirectX::g_XMIdentityR3);
  v14 = *((_BYTE *)a3 + 16) & 1;
  v15 = _mm_and_ps(_mm_shuffle_ps(v9, v9, 82), DirectX::g_XMMask3);
  v16 = (*((_DWORD *)a2 + 4) & 2) != 0;
  v114 = *((_BYTE *)a2 + 16) & 1;
  v17 = *((_DWORD *)a3 + 4) >> 1;
  v20 = DirectX::XMMatrixInverse(0LL, *(double *)v15.m128_u64, *(double *)v11.m128_u64, *(double *)v12.m128i_i64);
  v22 = *(__m128 *)(v21 + 36);
  v23 = *(__m128 *)(v21 + 68);
  v24 = *(__m128 *)(v21 + 52);
  v25 = _mm_shuffle_ps(v24, v22, 244);
  v26 = _mm_shuffle_ps(v24, v23, 14);
  v27 = _mm_and_ps(v22, DirectX::g_XMMask3);
  v28 = (__m128)_mm_or_si128(_mm_srli_si128((__m128i)v23, 4), DirectX::g_XMIdentityR3);
  v29 = _mm_and_ps(v26, DirectX::g_XMMask3);
  v30 = _mm_and_ps(_mm_shuffle_ps(v25, v25, 82), DirectX::g_XMMask3);
  v31 = v17 & 1;
  if ( v31 && v14 )
    goto LABEL_9;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SpatialPointerInteractionSourcePoseApi>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SpatialPointerInteractionSourcePoseApi>::GetCachedFeatureEnabledState(
      v19,
      v18,
      0LL);
  v116 = 0;
  LOBYTE(v115) = 3;
  v117 = v115;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_SpatialPointerInteractionSourcePoseApi>::GetFeaturePropertyCache'::`2'::data,
    0xAAE73Bu,
    (const struct FEATURE_LOGGED_TRAITS *)&v116,
    1,
    3);
  if ( (*((_BYTE *)this + 880) & 0x40) != 0 || !*((_BYTE *)this + 1052) || !v31 )
  {
LABEL_9:
    v54 = (*((_BYTE *)this + 880) & 0x40) == 0;
    *((_BYTE *)this + 632) = 0;
    if ( !v54 )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_SpatialPointerInteractionSourcePoseApi>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_SpatialPointerInteractionSourcePoseApi>::GetCachedFeatureEnabledState(
          v19,
          v18,
          0LL);
      v116 = 0;
      LOBYTE(v115) = 3;
      v117 = v115;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_SpatialPointerInteractionSourcePoseApi>::GetFeaturePropertyCache'::`2'::data,
        0xAAE73Bu,
        (const struct FEATURE_LOGGED_TRAITS *)&v116,
        1,
        3);
      if ( (*((_BYTE *)a3 + 156) & 1) != 0 )
        *((_BYTE *)this + 632) = 1;
    }
    v129 = v20;
    v130 = v15;
    v131 = v11;
    v132 = (__m128)v12;
    v55 = DirectX::XMMatrixMultiply(*(double *)v27.m128_u64, &v129);
    v121 = (__int128)v28;
    v53 = (__int128)v28;
    v120 = v29;
    v119 = v30;
    v118 = v55;
    if ( v31 && v14 )
    {
      *(__m128 *)((char *)this + 968) = _mm_shuffle_ps(v55, _mm_shuffle_ps(v30, v55, 160), 36);
      *(__m128 *)((char *)this + 984) = _mm_shuffle_ps(v30, v29, 73);
      *(__m128 *)((char *)this + 1000) = _mm_shuffle_ps(_mm_shuffle_ps(v29, v28, 10), v28, 152);
      *(__m128 *)((char *)this + 1016) = _mm_shuffle_ps(v27, _mm_shuffle_ps(v27, v30, 10), 132);
      *(__m128 *)((char *)this + 1032) = _mm_shuffle_ps(v30, v29, 73);
      *((_DWORD *)this + 262) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
      *((_BYTE *)this + 1052) = 1;
    }
  }
  else
  {
    v32 = *(__m128 *)((char *)this + 968);
    v33 = *(__m128 *)((char *)this + 1000);
    *(_QWORD *)&v34 = _mm_unpacklo_ps(
                        _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 9), (__m128)*((unsigned int *)a3 + 11)),
                        _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 10), (__m128)0LL)).m128_u64[0];
    v35 = _mm_unpacklo_ps(*(__m128 *)((char *)this + 1032), (__m128)0LL);
    v36 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 12), (__m128)*((unsigned int *)a3 + 14)),
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 13), (__m128)0LL));
    v37 = _mm_unpackhi_ps(*(__m128 *)((char *)this + 1016), (__m128)0LL);
    v38 = _mm_movelh_ps(*(__m128 *)((char *)this + 1016), v37);
    v39 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 15), (__m128)*((unsigned int *)a3 + 17)),
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 16), (__m128)0LL));
    v40 = (__m128)*((unsigned int *)this + 262);
    v41 = _mm_shuffle_ps(*(__m128 *)((char *)this + 1032), v40, 78);
    v42 = _mm_shuffle_ps(v41, DirectX::g_XMIdentityR3, 238);
    v43 = _mm_add_ps(_mm_movehl_ps(v35, _mm_shuffle_ps(v40, v35, 16)), _mm_movehl_ps((__m128)0LL, v37));
    v44 = _mm_shuffle_ps(v41, DirectX::g_XMIdentityR3, 68);
    v45 = _mm_shuffle_ps(v38, v43, 238);
    v46 = _mm_shuffle_ps(v38, v43, 68);
    v47 = _mm_shuffle_ps(v45, v42, 136);
    v48 = _mm_shuffle_ps(v45, v42, 221);
    v49 = *(__m128 *)((char *)this + 984);
    v50 = _mm_shuffle_ps(v49, v32, 244);
    v129 = _mm_shuffle_ps(v46, v44, 136);
    v130 = _mm_shuffle_ps(v46, v44, 221);
    v131 = v47;
    v132 = v48;
    *(_QWORD *)&v51 = DirectX::XMMatrixMultiply(v34, &v129).m128_u64[0];
    v129 = _mm_and_ps(v32, DirectX::g_XMMask3);
    v130 = _mm_and_ps(_mm_shuffle_ps(v50, v50, 82), DirectX::g_XMMask3);
    v131 = _mm_and_ps(_mm_shuffle_ps(v49, v33, 14), DirectX::g_XMMask3);
    v132 = (__m128)_mm_or_si128(_mm_srli_si128((__m128i)v33, 4), DirectX::g_XMIdentityR3);
    v52 = DirectX::XMMatrixMultiply(v51, &v129);
    v53 = _xmm;
    v121 = _xmm;
    v120 = v39;
    v119 = v36;
    v118 = v52;
    *((_BYTE *)this + 632) = 1;
    v14 = 1;
  }
  v56 = a4[1];
  v57 = a4[2];
  v58 = a4[3];
  v129 = *a4;
  v59 = v53;
  v130 = v56;
  v60 = v120;
  v131 = v57;
  v61 = v119;
  v132 = v58;
  v63 = DirectX::XMMatrixMultiply(*(double *)v118.m128_u64, &v129);
  v125 = (__m128)v59;
  v64 = (__m128)v59;
  v124 = v60;
  v65 = v60;
  v123 = v61;
  v66 = v61;
  v122 = v63;
  v133[0] = v63;
  v133[1] = v61;
  v133[2] = v60;
  v133[3] = v59;
  if ( v114 == v62 || !v16 || !v14 )
    v5 = v62;
  v67 = *(__m128 *)((char *)this + 424);
  v68 = _mm_add_ps(v67, v67);
  v69 = _mm_mul_ps(v68, v67);
  v70 = _mm_movelh_ps(
          _mm_unpacklo_ps((__m128)*((unsigned int *)this + 103), (__m128)*((unsigned int *)this + 104)),
          (__m128)*((unsigned int *)this + 105));
  v129 = (__m128)DirectX::g_XMIdentityR0;
  v130 = (__m128)DirectX::g_XMIdentityR1;
  v131 = (__m128)DirectX::g_XMIdentityR2;
  v132 = _mm_or_ps(_mm_and_ps(v70, DirectX::g_XMMask3), _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3));
  v71 = _mm_sub_ps(
          _mm_sub_ps(
            (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
            _mm_and_ps(_mm_shuffle_ps(v69, v69, 193), DirectX::g_XMMask3)),
          _mm_and_ps(_mm_shuffle_ps(v69, v69, 218), DirectX::g_XMMask3));
  v72 = _mm_mul_ps(_mm_shuffle_ps(v68, v68, 230), _mm_shuffle_ps(v67, v67, 208));
  v73 = _mm_mul_ps(_mm_shuffle_ps(v68, v68, 201), _mm_shuffle_ps(v67, v67, 255));
  v74 = _mm_add_ps(v73, v72);
  v75 = _mm_sub_ps(v72, v73);
  v76 = _mm_shuffle_ps(v74, v75, 73);
  v77 = _mm_shuffle_ps(v74, v75, 160);
  v78 = _mm_shuffle_ps(v76, v76, 120);
  v79 = _mm_shuffle_ps(v71, v78, 76);
  v80 = _mm_shuffle_ps(v71, v78, 237);
  v81 = _mm_shuffle_ps(_mm_shuffle_ps(v77, v77, 136), v71, 228);
  *(_QWORD *)&v82 = DirectX::XMMatrixMultiply(*(double *)_mm_shuffle_ps(v79, v79, 120).m128_u64, &v129).m128_u64[0];
  v129 = v122;
  v130 = v66;
  v131 = v65;
  v132 = v64;
  v83 = DirectX::XMMatrixMultiply(v82, &v129).m128_u64[0];
  v84 = (__m128)*((unsigned int *)this + 111);
  v85 = *(double *)&v83;
  v86 = (__m128)*((unsigned int *)this + 113);
  v127 = v81;
  v87 = _mm_and_ps(_mm_movelh_ps(_mm_unpacklo_ps(v84, (__m128)*((unsigned int *)this + 112)), v86), DirectX::g_XMMask3);
  v128 = (__m128)DirectX::g_XMIdentityR3;
  v88 = *(__m128 *)((char *)this + 456);
  v126 = _mm_shuffle_ps(v80, v80, 114);
  v89 = _mm_add_ps(v88, v88);
  v129 = (__m128)DirectX::g_XMIdentityR0;
  v130 = (__m128)DirectX::g_XMIdentityR1;
  v131 = (__m128)DirectX::g_XMIdentityR2;
  v132 = _mm_or_ps(v87, _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3));
  v90 = _mm_mul_ps(v89, v88);
  v91 = _mm_sub_ps(
          _mm_sub_ps(
            (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
            _mm_and_ps(_mm_shuffle_ps(v90, v90, 193), DirectX::g_XMMask3)),
          _mm_and_ps(_mm_shuffle_ps(v90, v90, 218), DirectX::g_XMMask3));
  v92 = _mm_mul_ps(_mm_shuffle_ps(v88, v88, 208), _mm_shuffle_ps(v89, v89, 230));
  v93 = _mm_mul_ps(_mm_shuffle_ps(v88, v88, 255), _mm_shuffle_ps(v89, v89, 201));
  v94 = _mm_add_ps(v93, v92);
  v95 = _mm_sub_ps(v92, v93);
  v96 = _mm_shuffle_ps(v94, v95, 73);
  v97 = _mm_shuffle_ps(v94, v95, 160);
  v98 = _mm_shuffle_ps(v96, v96, 120);
  v99 = _mm_shuffle_ps(v91, v98, 76);
  v100 = _mm_shuffle_ps(v91, v98, 237);
  v97.m128_u64[0] = _mm_shuffle_ps(_mm_shuffle_ps(v97, v97, 136), v91, 228).m128_u64[0];
  *(_QWORD *)&v101 = DirectX::XMMatrixMultiply(*(double *)_mm_shuffle_ps(v99, v99, 120).m128_u64, &v129).m128_u64[0];
  v102 = *a5;
  v103 = a5[1];
  v104 = a5[2];
  v105 = a5[3];
  v129 = v118;
  v130 = v119;
  v131 = v120;
  v132 = (__m128)v121;
  *(_QWORD *)&v106 = DirectX::XMMatrixMultiply(v101, &v129).m128_u64[0];
  v129 = v102;
  v130 = v103;
  v131 = v104;
  v132 = v105;
  v105.m128_u64[0] = DirectX::XMMatrixMultiply(v106, &v129).m128_u64[0];
  v129 = v122;
  v130 = v123;
  v131 = v124;
  v132 = v125;
  v107 = DirectX::XMMatrixMultiply(v101, &v129).m128_u64[0];
  *(_QWORD *)&v108 = _mm_shuffle_ps(v100, v100, 114).m128_u64[0];
  v102.m128_u64[0] = v107;
  *(__m128 *)((char *)this + 600) = DirectX::XMQuaternionRotationMatrix(
                                      *(double *)v105.m128_u64,
                                      v108,
                                      *(double *)v97.m128_u64);
  *((_DWORD *)this + 154) = DirectX::g_XMIdentityR3;
  *((_DWORD *)this + 155) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 85).m128_u32[0];
  *((_DWORD *)this + 156) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 170).m128_u32[0];
  *((_BYTE *)this + 629) = v109;
  *((_BYTE *)this + 628) = v5;
  v110 = DirectX::XMQuaternionRotationMatrix(*(double *)v102.m128_u64, v108, *(double *)v97.m128_u64);
  v111 = v128;
  v100.m128_u64[0] = v126.m128_u64[0];
  v97.m128_u64[0] = v127.m128_u64[0];
  *(__m128 *)((char *)this + 508) = v110;
  *((_DWORD *)this + 131) = DirectX::g_XMIdentityR3;
  *((_DWORD *)this + 132) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 85).m128_u32[0];
  *((_DWORD *)this + 133) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 170).m128_u32[0];
  *((_BYTE *)this + 537) = v112;
  *((_BYTE *)this + 536) = v5;
  *(__m128 *)((char *)this + 476) = DirectX::XMQuaternionRotationMatrix(
                                      v85,
                                      *(double *)v100.m128_u64,
                                      *(double *)v97.m128_u64);
  *((_DWORD *)this + 123) = v111.m128_i32[0];
  v118.m128_u64[1] = (unsigned __int64)v133;
  *((_DWORD *)this + 124) = _mm_shuffle_ps(v111, v111, 85).m128_u32[0];
  *((_DWORD *)this + 125) = _mm_shuffle_ps(v111, v111, 170).m128_u32[0];
  *((_BYTE *)this + 505) = v113;
  *((_BYTE *)this + 504) = v5;
  v118.m128_u64[0] = (unsigned __int64)a3;
  lambda_447a3de97d139b2ebabe0ab1fe5c7f8c_::operator()(
    (unsigned int)&v118,
    (_DWORD)this + 576,
    (_DWORD)this + 540,
    4,
    (__int64)a3 + 84);
  lambda_447a3de97d139b2ebabe0ab1fe5c7f8c_::operator()(
    (unsigned int)&v118,
    (_DWORD)this + 577,
    (_DWORD)this + 552,
    16,
    (__int64)a3 + 96);
  lambda_447a3de97d139b2ebabe0ab1fe5c7f8c_::operator()(
    (unsigned int)&v118,
    (_DWORD)this + 578,
    (_DWORD)this + 564,
    128,
    (__int64)a3 + 144);
}
