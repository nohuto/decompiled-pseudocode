/*
 * XREFs of ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x1800D77C4
 * Callers:
 *     ?TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2@Z @ 0x1800D7234 (-TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_J.c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x1800D7430 (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x180092C5C (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1800D2D4C (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x1800D304C (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 *     _lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator() @ 0x1800D806C (_lambda_dd13b2336fcec22e7e4908217f5c08fb_--operator().c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ComputeControllerPoses(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a3,
        __m128 *a4,
        __m128 *a5)
{
  __m128 v6; // xmm3
  __m128 v8; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128i v12; // xmm3
  __m128 v13; // xmm1
  unsigned __int8 v14; // r8
  char v15; // r10
  __m128 v16; // xmm0
  __m128 v17; // xmm4
  __m128 v18; // xmm8
  __m128 v19; // xmm7
  __m128 v20; // xmm6
  __m128 v21; // xmm8
  __m128 v22; // xmm6
  __m128 v23; // xmm3
  __m128 v24; // xmm7
  __m128 v25; // xmm3
  char v26; // r9
  char v27; // r9
  __m128 v28; // xmm8
  __m128 v29; // xmm9
  __m128 v30; // xmm3
  __m128 v31; // xmm14
  __m128 v32; // xmm1
  __m128 v33; // xmm13
  __m128 v34; // xmm10
  __m128 v35; // xmm2
  __m128 v36; // xmm0
  __m128 v37; // xmm6
  __m128 v38; // xmm3
  __m128 v39; // xmm0
  __m128 v40; // xmm11
  __m128 v41; // xmm10
  __m128 v42; // xmm4
  __m128 v43; // xmm11
  __m128 v44; // xmm6
  __m128 v45; // xmm5
  __m128 v46; // xmm10
  __m128 v47; // xmm7
  double v48; // xmm0_8
  __m128 v49; // xmm0
  __int128 v50; // xmm4
  char v51; // r8
  bool v52; // zf
  unsigned __int8 v53; // al
  char v54; // r8
  char v55; // r10
  __m128 v56; // xmm0
  char v57; // r9
  __m128 v58; // xmm2
  __m128 v59; // xmm1
  __m128 v60; // xmm0
  __int128 v61; // xmm14
  __m128 v62; // xmm2
  __m128 v63; // xmm3
  __m128 v64; // xmm8
  __m128 v65; // xmm1
  __m128 v66; // xmm5
  __m128 v67; // xmm4
  __m128 v68; // xmm1
  __m128 v69; // xmm3
  __m128 v70; // xmm2
  __m128 v71; // xmm1
  __m128 v72; // xmm0
  __m128 v73; // xmm2
  __m128 v74; // xmm0
  __m128 v75; // xmm3
  __m128 v76; // xmm1
  __m128 v77; // xmm2
  double v78; // xmm0_8
  unsigned __int64 v79; // xmm0_8
  __m128 v80; // xmm5
  double v81; // xmm15_8
  __m128 v82; // xmm0
  __m128 v83; // xmm3
  __m128 v84; // xmm2
  __m128 v85; // xmm1
  __m128 v86; // xmm9
  __m128 v87; // xmm1
  __m128 v88; // xmm3
  __m128 v89; // xmm2
  __m128 v90; // xmm1
  __m128 v91; // xmm0
  __m128 v92; // xmm2
  __m128 v93; // xmm0
  __m128 v94; // xmm4
  __m128 v95; // xmm1
  double v96; // xmm10_8
  __m128 v97; // xmm9
  __m128 v98; // xmm8
  __m128 v99; // xmm7
  __m128 v100; // xmm6
  double v101; // xmm0_8
  unsigned __int64 v102; // xmm0_8
  double v103; // xmm10_8
  char v104; // cl
  char v105; // r8
  __m128 v106; // xmm0
  __m128 v107; // xmm6
  char v108; // cl
  char v109; // r8
  char v110; // cl
  char v111; // r8
  __m128 v112; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v113; // [rsp+48h] [rbp-C0h]
  __m128 v114; // [rsp+58h] [rbp-B0h]
  __int128 v115; // [rsp+68h] [rbp-A0h]
  __m128 v116; // [rsp+78h] [rbp-90h]
  __m128 v117; // [rsp+88h] [rbp-80h]
  __m128 v118; // [rsp+98h] [rbp-70h]
  __int128 v119; // [rsp+A8h] [rbp-60h]
  __m128 v120; // [rsp+B8h] [rbp-50h]
  __m128 v121; // [rsp+C8h] [rbp-40h]
  __m128 v122; // [rsp+D8h] [rbp-30h]
  __m128 v123; // [rsp+E8h] [rbp-20h] BYREF
  __m128 v124; // [rsp+F8h] [rbp-10h]
  __m128 v125; // [rsp+108h] [rbp+0h]
  __m128 v126; // [rsp+118h] [rbp+10h]
  _OWORD v127[4]; // [rsp+128h] [rbp+20h] BYREF

  v6 = *(__m128 *)((char *)a2 + 68);
  v8 = *(__m128 *)((char *)a2 + 52);
  v10 = _mm_shuffle_ps(v8, *(__m128 *)((char *)a2 + 36), 244);
  v11 = _mm_and_ps(_mm_shuffle_ps(v8, v6, 14), DirectX::g_XMMask3);
  v12 = _mm_or_si128(_mm_srli_si128((__m128i)v6, 4), DirectX::g_XMIdentityR3);
  v13 = _mm_and_ps(_mm_shuffle_ps(v10, v10, 82), DirectX::g_XMMask3);
  v16 = DirectX::XMMatrixInverse(0LL, *(double *)v13.m128_u64, *(double *)v11.m128_u64, *(double *)v12.m128i_i64);
  v17 = (__m128)v12;
  v18 = *(__m128 *)((char *)a3 + 36);
  v19 = *(__m128 *)((char *)a3 + 52);
  v20 = _mm_shuffle_ps(v19, v18, 244);
  v21 = _mm_and_ps(v18, DirectX::g_XMMask3);
  v22 = _mm_and_ps(_mm_shuffle_ps(v20, v20, 82), DirectX::g_XMMask3);
  v23 = *(__m128 *)((char *)a3 + 68);
  v24 = _mm_and_ps(_mm_shuffle_ps(v19, v23, 14), DirectX::g_XMMask3);
  v25 = (__m128)_mm_or_si128(_mm_srli_si128((__m128i)v23, 4), DirectX::g_XMIdentityR3);
  v27 = v14 & v26;
  if ( v27 && v15 || (*((_BYTE *)this + 856) & 0x40) != 0 || !*((_BYTE *)this + 1096) || !v27 )
  {
    v52 = (*((_BYTE *)this + 856) & 0x40) == 0;
    *((_BYTE *)this + 444) = 0;
    if ( !v52 )
    {
      v53 = *((_BYTE *)this + 444);
      if ( (v14 & *((_BYTE *)a3 + 156)) != 0 )
        v53 = v14;
      *((_BYTE *)this + 444) = v53;
    }
    v124 = v13;
    v125 = v11;
    v123 = v16;
    v126 = v17;
    v56 = DirectX::XMMatrixMultiply(*(double *)v21.m128_u64, &v123);
    v115 = (__int128)v25;
    v50 = (__int128)v25;
    v114 = v24;
    v113 = v22;
    v112 = v56;
    if ( v57 && v55 )
    {
      *(__m128 *)((char *)this + 1012) = _mm_shuffle_ps(v56, _mm_shuffle_ps(v22, v56, 160), 36);
      *(__m128 *)((char *)this + 1028) = _mm_shuffle_ps(v22, v24, 73);
      *(__m128 *)((char *)this + 1044) = _mm_shuffle_ps(_mm_shuffle_ps(v24, v25, 10), v25, 152);
      *(__m128 *)((char *)this + 1060) = _mm_shuffle_ps(v21, _mm_shuffle_ps(v21, v22, 10), 132);
      *(__m128 *)((char *)this + 1076) = _mm_shuffle_ps(v22, v24, 73);
      *((_DWORD *)this + 273) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
      *((_BYTE *)this + 1096) = v54;
    }
  }
  else
  {
    v28 = *(__m128 *)((char *)this + 1012);
    v29 = *(__m128 *)((char *)this + 1044);
    v30 = _mm_unpacklo_ps(*(__m128 *)((char *)this + 1076), (__m128)0LL);
    v31 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 12), (__m128)*((unsigned int *)a3 + 14)),
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 13), (__m128)0LL));
    v32 = _mm_unpackhi_ps(*(__m128 *)((char *)this + 1060), (__m128)0LL);
    v33 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 15), (__m128)*((unsigned int *)a3 + 17)),
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 16), (__m128)0LL));
    v34 = _mm_movelh_ps(*(__m128 *)((char *)this + 1060), v32);
    v35 = (__m128)*((unsigned int *)this + 273);
    v36 = _mm_shuffle_ps(*(__m128 *)((char *)this + 1076), v35, 78);
    v37 = _mm_shuffle_ps(v36, DirectX::g_XMIdentityR3, 238);
    v38 = _mm_add_ps(_mm_movehl_ps(v30, _mm_shuffle_ps(v35, v30, 16)), _mm_movehl_ps((__m128)0LL, v32));
    v39 = _mm_shuffle_ps(v36, DirectX::g_XMIdentityR3, 68);
    v40 = _mm_shuffle_ps(v34, v38, 238);
    v41 = _mm_shuffle_ps(v34, v38, 68);
    v42 = _mm_shuffle_ps(v40, v37, 136);
    v43 = _mm_shuffle_ps(v40, v37, 221);
    v44 = *(__m128 *)((char *)this + 1028);
    v45 = _mm_shuffle_ps(v41, v39, 136);
    v46 = _mm_shuffle_ps(v41, v39, 221);
    v47 = _mm_shuffle_ps(v44, v28, 244);
    v39.m128_u64[0] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 9), (__m128)*((unsigned int *)a3 + 11)),
                        _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 10), (__m128)0LL)).m128_u64[0];
    v123 = v45;
    v124 = v46;
    v125 = v42;
    v126 = v43;
    *(_QWORD *)&v48 = DirectX::XMMatrixMultiply(*(double *)v39.m128_u64, &v123).m128_u64[0];
    v123 = _mm_and_ps(v28, DirectX::g_XMMask3);
    v124 = _mm_and_ps(_mm_shuffle_ps(v47, v47, 82), DirectX::g_XMMask3);
    v125 = _mm_and_ps(_mm_shuffle_ps(v44, v29, 14), DirectX::g_XMMask3);
    v126 = (__m128)_mm_or_si128(_mm_srli_si128((__m128i)v29, 4), DirectX::g_XMIdentityR3);
    v49 = DirectX::XMMatrixMultiply(v48, &v123);
    v50 = _xmm;
    v115 = _xmm;
    v114 = v33;
    v113 = v31;
    v112 = v49;
    *((_BYTE *)this + 444) = v51;
  }
  v58 = a4[1];
  v59 = a4[2];
  v60 = a4[3];
  v123 = *a4;
  v124 = v58;
  v125 = v59;
  v126 = v60;
  v119 = v50;
  v61 = v50;
  v118 = v114;
  v117 = v113;
  v116 = DirectX::XMMatrixMultiply(*(double *)v112.m128_u64, &v123);
  v127[0] = v116;
  v127[1] = v113;
  v127[2] = v114;
  v127[3] = v119;
  v62 = *((__m128 *)this + 3);
  v63 = _mm_add_ps(v62, v62);
  v64 = _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3);
  v65 = _mm_mul_ps(v63, v62);
  v66 = _mm_and_ps(
          _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 36), (__m128)*((unsigned int *)this + 11)),
          DirectX::g_XMMask3);
  v123 = (__m128)DirectX::g_XMIdentityR0;
  v124 = (__m128)DirectX::g_XMIdentityR1;
  v125 = (__m128)DirectX::g_XMIdentityR2;
  v126 = _mm_or_ps(v66, v64);
  v67 = _mm_sub_ps(
          _mm_sub_ps(
            (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
            _mm_and_ps(_mm_shuffle_ps(v65, v65, 193), DirectX::g_XMMask3)),
          _mm_and_ps(_mm_shuffle_ps(v65, v65, 218), DirectX::g_XMMask3));
  v68 = _mm_mul_ps(_mm_shuffle_ps(v63, v63, 230), _mm_shuffle_ps(v62, v62, 208));
  v69 = _mm_mul_ps(_mm_shuffle_ps(v63, v63, 201), _mm_shuffle_ps(v62, v62, 255));
  v70 = _mm_add_ps(v69, v68);
  v71 = _mm_sub_ps(v68, v69);
  v72 = _mm_shuffle_ps(v70, v71, 73);
  v73 = _mm_shuffle_ps(v70, v71, 160);
  v74 = _mm_shuffle_ps(v72, v72, 120);
  v75 = _mm_shuffle_ps(v67, v74, 76);
  v76 = _mm_shuffle_ps(v67, v74, 237);
  v77 = _mm_shuffle_ps(_mm_shuffle_ps(v73, v73, 136), v67, 228);
  *(_QWORD *)&v78 = DirectX::XMMatrixMultiply(*(double *)_mm_shuffle_ps(v75, v75, 120).m128_u64, &v123).m128_u64[0];
  v123 = v116;
  v124 = v113;
  v125 = v114;
  v126 = (__m128)v61;
  v79 = DirectX::XMMatrixMultiply(v78, &v123).m128_u64[0];
  v80 = (__m128)*(unsigned __int64 *)((char *)this + 68);
  v81 = *(double *)&v79;
  v82 = (__m128)*((unsigned int *)this + 19);
  v121 = v77;
  v120 = _mm_shuffle_ps(v76, v76, 114);
  v122 = (__m128)DirectX::g_XMIdentityR3;
  v83 = *((__m128 *)this + 5);
  v84 = _mm_add_ps(v83, v83);
  v85 = _mm_mul_ps(v84, v83);
  v123 = (__m128)DirectX::g_XMIdentityR0;
  v124 = (__m128)DirectX::g_XMIdentityR1;
  v125 = (__m128)DirectX::g_XMIdentityR2;
  v126 = _mm_or_ps(_mm_and_ps(_mm_movelh_ps(v80, v82), DirectX::g_XMMask3), v64);
  v86 = _mm_sub_ps(
          _mm_sub_ps(
            (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
            _mm_and_ps(_mm_shuffle_ps(v85, v85, 193), DirectX::g_XMMask3)),
          _mm_and_ps(_mm_shuffle_ps(v85, v85, 218), DirectX::g_XMMask3));
  v87 = _mm_mul_ps(_mm_shuffle_ps(v83, v83, 208), _mm_shuffle_ps(v84, v84, 230));
  v88 = _mm_mul_ps(_mm_shuffle_ps(v83, v83, 255), _mm_shuffle_ps(v84, v84, 201));
  v89 = _mm_add_ps(v88, v87);
  v90 = _mm_sub_ps(v87, v88);
  v91 = _mm_shuffle_ps(v89, v90, 73);
  v92 = _mm_shuffle_ps(v89, v90, 160);
  v93 = _mm_shuffle_ps(v91, v91, 120);
  v94 = _mm_shuffle_ps(v86, v93, 76);
  v95 = _mm_shuffle_ps(v86, v93, 237);
  v92.m128_u64[0] = _mm_shuffle_ps(_mm_shuffle_ps(v92, v92, 136), v86, 228).m128_u64[0];
  *(_QWORD *)&v96 = DirectX::XMMatrixMultiply(*(double *)_mm_shuffle_ps(v94, v94, 120).m128_u64, &v123).m128_u64[0];
  v97 = *a5;
  v98 = a5[1];
  v99 = a5[2];
  v100 = a5[3];
  v123 = v112;
  v124 = v113;
  v125 = v114;
  v126 = (__m128)v115;
  *(_QWORD *)&v101 = DirectX::XMMatrixMultiply(v96, &v123).m128_u64[0];
  v123 = v97;
  v124 = v98;
  v125 = v99;
  v126 = v100;
  v100.m128_u64[0] = DirectX::XMMatrixMultiply(v101, &v123).m128_u64[0];
  v123 = v116;
  v124 = v113;
  v125 = v114;
  v126 = (__m128)v119;
  v102 = DirectX::XMMatrixMultiply(v96, &v123).m128_u64[0];
  *(_QWORD *)&v103 = _mm_shuffle_ps(v95, v95, 114).m128_u64[0];
  v97.m128_u64[0] = v102;
  *(__m128 *)((char *)this + 412) = DirectX::XMQuaternionRotationMatrix(
                                      *(double *)v100.m128_u64,
                                      v103,
                                      *(double *)v92.m128_u64);
  *((_DWORD *)this + 107) = DirectX::g_XMIdentityR3;
  *((_DWORD *)this + 108) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 85).m128_u32[0];
  *((_DWORD *)this + 109) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 170).m128_u32[0];
  *((_BYTE *)this + 441) = v104;
  *((_BYTE *)this + 440) = v105;
  v106 = DirectX::XMQuaternionRotationMatrix(*(double *)v97.m128_u64, v103, *(double *)v92.m128_u64);
  v107 = v122;
  v95.m128_u64[0] = v120.m128_u64[0];
  v92.m128_u64[0] = v121.m128_u64[0];
  *((__m128 *)this + 20) = v106;
  *((_DWORD *)this + 84) = DirectX::g_XMIdentityR3;
  *((_DWORD *)this + 85) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 85).m128_u32[0];
  *((_DWORD *)this + 86) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 170).m128_u32[0];
  *((_BYTE *)this + 349) = v108;
  *((_BYTE *)this + 348) = v109;
  *((__m128 *)this + 18) = DirectX::XMQuaternionRotationMatrix(v81, *(double *)v95.m128_u64, *(double *)v92.m128_u64);
  *((_DWORD *)this + 76) = v107.m128_i32[0];
  v112.m128_u64[1] = (unsigned __int64)v127;
  *((_DWORD *)this + 77) = _mm_shuffle_ps(v107, v107, 85).m128_u32[0];
  *((_DWORD *)this + 78) = _mm_shuffle_ps(v107, v107, 170).m128_u32[0];
  *((_BYTE *)this + 317) = v110;
  *((_BYTE *)this + 316) = v111;
  v112.m128_u64[0] = (unsigned __int64)a3;
  lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator()(
    (unsigned int)&v112,
    (_DWORD)this + 388,
    (_DWORD)this + 352,
    4,
    (__int64)a3 + 84);
  lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator()(
    (unsigned int)&v112,
    (_DWORD)this + 389,
    (_DWORD)this + 364,
    16,
    (__int64)a3 + 96);
  lambda_dd13b2336fcec22e7e4908217f5c08fb_::operator()(
    (unsigned int)&v112,
    (_DWORD)this + 390,
    (_DWORD)this + 376,
    128,
    (__int64)a3 + 144);
}
