/*
 * XREFs of ?UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData@2@PEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@7@3@Z @ 0x1800C5454
 * Callers:
 *     ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@_JAEBUMatrix4x4@Numerics@Foundation@6@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800C4A3C (-Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeRe.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x180036808 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x1800B4794 (-XMMatrixRTInverse@DirectX@@YQ-AUXMMATRIX@1@U21@@Z.c)
 *     ?ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@Windows@@1@Z @ 0x1800C57F0 (-ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionController::UpdateSimulatedPose(
        SpatialInteractionDevices::SpatialInteractionController *this,
        __int64 a2,
        const struct SpatialInteractionDevices::PoseData *a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6)
{
  int v9; // eax
  int v10; // eax
  __m128 v11; // xmm11
  __m128 v12; // xmm10
  double v13; // xmm12_8
  __m128 v14; // xmm13
  __m128 v15; // xmm10
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm1
  __m128 v19; // xmm4
  __m128 v20; // xmm1
  __m128 v21; // xmm3
  __m128 v22; // xmm11
  __m128 v23; // xmm1
  __m128 v24; // xmm0
  __m128 v25; // xmm11
  __m128 v26; // xmm0
  __m128 v27; // xmm0
  __m128 v28; // xmm12
  __m128 v29; // xmm13
  __m128 v30; // xmm1
  __m128 v31; // xmm2
  __m128i v32; // xmm3
  double v33; // xmm0_8
  __m128 v34; // xmm6
  __m128 v35; // xmm6
  double v36; // xmm0_8
  __m128 v37; // xmm0
  __m128 v38; // [rsp+38h] [rbp-D0h]
  __m128 v39; // [rsp+48h] [rbp-C0h]
  __m128 v40; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v41; // [rsp+68h] [rbp-A0h]
  __m128 v42; // [rsp+78h] [rbp-90h]
  __m128i v43; // [rsp+88h] [rbp-80h]
  _QWORD v44[20]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v45[20]; // [rsp+138h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B0h] [rbp+1A8h]

  if ( a4 )
  {
    v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, _QWORD, _QWORD *))(*(_QWORD *)a4 + 32LL))(
           a4,
           a2,
           0LL,
           v44);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E4,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    memset(v44, 0, sizeof(v44));
    v44[0] = a2;
    LODWORD(v44[2]) = 3;
    *(_OWORD *)((char *)&v44[4] + 4) = xmmword_18010E570;
    *(_OWORD *)((char *)&v44[6] + 4) = xmmword_18010E580;
    *(_OWORD *)((char *)&v44[8] + 4) = xmmword_18010E590;
  }
  memset(v45, 0, sizeof(v45));
  v10 = 0;
  v11 = (__m128)DirectX::g_XMIdentityR2;
  v12 = (__m128)DirectX::g_XMIdentityR3;
  v13 = DirectX::g_XMIdentityR0;
  v14 = (__m128)DirectX::g_XMIdentityR1;
  v45[0] = a2;
  LODWORD(v45[2]) = 0;
  v38 = (__m128)DirectX::g_XMIdentityR2;
  v39 = (__m128)DirectX::g_XMIdentityR3;
  if ( *((_BYTE *)a3 + 28) )
  {
    v10 = 1;
    v38 = (__m128)DirectX::g_XMIdentityR2;
    v15 = _mm_and_ps(
            _mm_movelh_ps(
              _mm_unpacklo_ps((__m128)*(unsigned int *)a3, (__m128)*((unsigned int *)a3 + 1)),
              (__m128)*((unsigned int *)a3 + 2)),
            DirectX::g_XMMask3);
    LODWORD(v45[2]) = 1;
    v12 = _mm_or_ps(v15, _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3));
  }
  if ( *((_BYTE *)a3 + 29) )
  {
    v16 = *(__m128 *)((char *)a3 + 12);
    v39 = (__m128)DirectX::g_XMIdentityR3;
    v17 = _mm_add_ps(v16, v16);
    LODWORD(v45[2]) = v10 | 2;
    v18 = _mm_mul_ps(v17, v16);
    v19 = _mm_sub_ps(
            _mm_sub_ps(
              (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
              _mm_and_ps(_mm_shuffle_ps(v18, v18, 193), DirectX::g_XMMask3)),
            _mm_and_ps(_mm_shuffle_ps(v18, v18, 218), DirectX::g_XMMask3));
    v20 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 230), _mm_shuffle_ps(v16, v16, 208));
    v21 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 201), _mm_shuffle_ps(v16, v16, 255));
    v22 = _mm_add_ps(v21, v20);
    v23 = _mm_sub_ps(v20, v21);
    v24 = v22;
    v25 = _mm_shuffle_ps(v22, v23, 160);
    v26 = _mm_shuffle_ps(v24, v23, 73);
    v27 = _mm_shuffle_ps(v26, v26, 120);
    v28 = _mm_shuffle_ps(v19, v27, 76);
    v29 = _mm_shuffle_ps(v19, v27, 237);
    *(_QWORD *)&v13 = _mm_shuffle_ps(v28, v28, 120).m128_u64[0];
    v14 = _mm_shuffle_ps(v29, v29, 114);
    v11 = _mm_shuffle_ps(_mm_shuffle_ps(v25, v25, 136), v19, 228);
  }
  v30 = *((__m128 *)a6 + 1);
  v31 = *((__m128 *)a6 + 2);
  v32 = *((__m128i *)a6 + 3);
  *(_QWORD *)&v33 = DirectX::XMMatrixRTInverse(*(double *)a6, *(double *)v30.m128_u64, *(double *)v31.m128_u64).m128_u64[0];
  v34 = _mm_shuffle_ps(*(__m128 *)((char *)&v44[6] + 4), *(__m128 *)((char *)&v44[4] + 4), 244);
  v43 = _mm_or_si128(_mm_srli_si128(*(__m128i *)((char *)&v44[8] + 4), 4), DirectX::g_XMIdentityR3);
  v41 = _mm_and_ps(_mm_shuffle_ps(v34, v34, 82), DirectX::g_XMMask3);
  v40 = _mm_and_ps(*(__m128 *)((char *)&v44[4] + 4), DirectX::g_XMMask3);
  v42 = _mm_and_ps(
          _mm_shuffle_ps(*(__m128 *)((char *)&v44[6] + 4), *(__m128 *)((char *)&v44[8] + 4), 14),
          DirectX::g_XMMask3);
  v35 = DirectX::XMMatrixMultiply(v33, &v40);
  v40 = (__m128)DirectX::g_XMIdentityR0;
  v42 = v38;
  v41 = (__m128)DirectX::g_XMIdentityR1;
  v43 = (__m128i)v12;
  *(_QWORD *)&v36 = DirectX::XMMatrixMultiply(v13, &v40).m128_u64[0];
  v40 = v35;
  v41 = v30;
  v42 = v31;
  v43 = v32;
  v37 = DirectX::XMMatrixMultiply(v36, &v40);
  *(__m128 *)((char *)&v45[4] + 4) = _mm_shuffle_ps(v37, _mm_shuffle_ps(v14, v37, 160), 36);
  *(__m128 *)((char *)&v45[8] + 4) = _mm_shuffle_ps(_mm_shuffle_ps(v11, v39, 10), v39, 152);
  *(__m128 *)((char *)&v45[6] + 4) = _mm_shuffle_ps(v14, v11, 73);
  SpatialInteractionDevices::SpatialInteractionController::ComputeControllerPoses(
    this,
    (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v44,
    (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v45,
    a5,
    a6);
}
