/*
 * XREFs of ?QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z @ 0x18009BA00
 * Callers:
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x18005EF48 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     asinf_0 @ 0x1800E31E7 (asinf_0.c)
 *     atan2f_0 @ 0x1800E31ED (atan2f_0.c)
 */

__int64 __fastcall SpatialInteractionDevices::QuaternionToEulerAngles(
        __m128 *this,
        const struct DirectX::XMFLOAT4 *a2,
        float *a3,
        float *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 result; // rax
  float v10; // xmm7_4
  float v11; // xmm8_4
  __m128 v12; // xmm3
  __m128 v13; // xmm0
  __m128 v14; // xmm3
  __m128 v15; // xmm3
  __m128 v16; // xmm3
  __m128 v17; // xmm3
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm4
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  __m128 v24; // xmm5
  __m128 v25; // xmm3
  __m128 v26; // xmm4
  __m128 v27; // xmm1
  __m128 v28; // xmm0
  __m128 v29; // xmm0
  __m128 v30; // xmm4
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128 v34; // xmm1
  __m128 v35; // xmm4
  float v36; // xmm0_4
  float v37; // xmm6_4
  __m128 Y; // [rsp+20h] [rbp-60h]
  __m128 v39; // [rsp+30h] [rbp-50h]
  float X; // [rsp+40h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( !a2 )
  {
    v7 = 546LL;
LABEL_3:
    v8 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !a3 )
  {
    v7 = 547LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v7 = 548LL;
    goto LABEL_3;
  }
  *(_DWORD *)a2 = 0;
  v10 = 0.0;
  *a3 = 0.0;
  v11 = 0.0;
  *a4 = 0.0;
  v12 = _mm_mul_ps(*this, *this);
  v13 = _mm_shuffle_ps(v12, v12, 238);
  v14 = _mm_add_ps(v12, v13);
  v15 = _mm_shuffle_ps(v14, v14, 64);
  v16 = _mm_add_ps(v15, _mm_shuffle_ps(v13, v15, 240));
  v17 = _mm_shuffle_ps(v16, v16, 170);
  v18 = _mm_cmpneq_ps(DirectX::g_XMInfinity, v17);
  v19 = _mm_sqrt_ps(v17);
  v20 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(*this, v19), _mm_cmpneq_ps(v19, (__m128)0LL)), v18),
          _mm_andnot_ps(v18, DirectX::g_XMQNaN));
  v21 = _mm_add_ps(v20, v20);
  v22 = _mm_mul_ps(v21, v20);
  v23 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 230), _mm_shuffle_ps(v20, v20, 208));
  v24 = _mm_sub_ps(
          _mm_sub_ps(
            (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
            _mm_and_ps(_mm_shuffle_ps(v22, v22, 193), DirectX::g_XMMask3)),
          _mm_and_ps(_mm_shuffle_ps(v22, v22, 218), DirectX::g_XMMask3));
  v25 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 201), _mm_shuffle_ps(v20, v20, 255));
  v26 = _mm_add_ps(v25, v23);
  v27 = _mm_sub_ps(v23, v25);
  v28 = _mm_shuffle_ps(v26, v27, 73);
  v29 = _mm_shuffle_ps(v28, v28, 120);
  v30 = _mm_shuffle_ps(v26, v27, 160);
  v31 = _mm_shuffle_ps(v24, v29, 76);
  v32 = _mm_shuffle_ps(v24, v29, 237);
  v33 = _mm_shuffle_ps(v31, v31, 120);
  v34 = _mm_shuffle_ps(v32, v32, 114);
  v35 = _mm_shuffle_ps(_mm_shuffle_ps(v30, v30, 136), v24, 228);
  Y = _mm_shuffle_ps(v33, _mm_shuffle_ps(v33, v34, 10), 132);
  v39 = _mm_shuffle_ps(v34, v35, 73);
  LODWORD(X) = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
  v36 = asinf_0(_mm_shuffle_ps(v39, v39, 85).m128_f32[0] * -1.0);
  v37 = v36;
  if ( v36 >= 1.5707964 )
  {
    v11 = atan2f_0(Y.m128_f32[1] * -1.0, Y.m128_f32[0]);
  }
  else if ( v36 <= -1.5707964 )
  {
    v37 = atan2f_0(Y.m128_f32[1] * -1.0, Y.m128_f32[0]) * -1.0;
  }
  else
  {
    v11 = atan2f_0(Y.m128_f32[2], X);
    v10 = atan2f_0(Y.m128_f32[3], v39.m128_f32[0]);
  }
  if ( (_fpclass(v37) & 0x207) != 0 )
  {
    v8 = -2147024809;
    v7 = 582LL;
    goto LABEL_4;
  }
  if ( (_fpclass(v11) & 0x207) != 0 )
  {
    v8 = -2147024809;
    v7 = 583LL;
    goto LABEL_4;
  }
  if ( (_fpclass(v10) & 0x207) != 0 )
  {
    v8 = -2147024809;
    v7 = 584LL;
    goto LABEL_4;
  }
  *(float *)a2 = v37;
  result = 0LL;
  *a3 = v11;
  *a4 = v10;
  return result;
}
