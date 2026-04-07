/*
 * XREFs of ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180090658
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008FF7C (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180014460 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x1800A1E38 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x1800A2088 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800A21C4 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateAnimated3DResources(CAnimatedTransitionVisual *this)
{
  float v1; // xmm2_4
  int v3; // edx
  __m128i v4; // xmm0
  int v5; // ecx
  float v6; // xmm1_4
  float v7; // xmm8_4
  unsigned int v8; // eax
  int v9; // ecx
  float v10; // xmm0_4
  __m128i v11; // xmm10
  unsigned int v12; // eax
  float v13; // xmm10_4
  __m128i v14; // xmm11
  unsigned int v15; // eax
  int v16; // ecx
  float v17; // xmm10_4
  int v18; // xmm2_4
  __m128i v19; // xmm6
  float v20; // xmm10_4
  __m128i v21; // xmm0
  int v22; // eax
  float v23; // xmm10_4
  float v24; // xmm11_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  int v27; // xmm0_4
  float v28; // xmm5_4
  int v29; // ecx
  int v30; // ecx
  float v31; // xmm7_4
  float v32; // xmm6_4
  int v33; // eax
  bool v34; // sf
  int v35; // ecx
  __m128i v36; // xmm0
  int v37; // eax
  int v38; // eax
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm3_4
  const struct D2DMatrix *v43; // rdx
  float v44; // xmm0_4
  int v45; // eax
  unsigned int v46; // edi
  int v47; // eax
  int v49; // [rsp+38h] [rbp-D0h] BYREF
  int v50; // [rsp+3Ch] [rbp-CCh]
  int v51; // [rsp+40h] [rbp-C8h]
  int v52; // [rsp+44h] [rbp-C4h]
  int v53; // [rsp+48h] [rbp-C0h]
  float v54; // [rsp+4Ch] [rbp-BCh]
  int v55; // [rsp+50h] [rbp-B8h]
  int v56; // [rsp+54h] [rbp-B4h]
  int v57; // [rsp+58h] [rbp-B0h]
  int v58; // [rsp+5Ch] [rbp-ACh]
  int v59; // [rsp+60h] [rbp-A8h]
  int v60; // [rsp+64h] [rbp-A4h]
  float v61; // [rsp+68h] [rbp-A0h]
  float v62; // [rsp+6Ch] [rbp-9Ch]
  int v63; // [rsp+70h] [rbp-98h]
  int v64; // [rsp+74h] [rbp-94h]
  int v65; // [rsp+78h] [rbp-90h] BYREF
  float v66; // [rsp+80h] [rbp-88h]
  _DWORD v67[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v68[144]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *((float *)this + 194);
  v3 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 214));
  v5 = *((_DWORD *)this + 217);
  v6 = *((float *)this + 195);
  v7 = 0.0;
  v8 = 0;
  if ( v3 >= 0 )
    v8 = v3;
  v9 = v5 - *((_DWORD *)this + 215);
  LODWORD(v10) = _mm_cvtepi32_ps(v4).m128_u32[0];
  v11 = _mm_cvtsi32_si128(v8);
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  LODWORD(v13) = _mm_cvtepi32_ps(v11).m128_u32[0];
  v14 = _mm_cvtsi32_si128(v12);
  v15 = 0;
  v16 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
  v66 = 0.0;
  if ( v16 >= 0 )
    v15 = v16;
  v17 = v13 * v1;
  v18 = LODWORD(v1) ^ _xmm;
  v19 = _mm_cvtsi32_si128(v15);
  v20 = v17 + v10;
  v21 = _mm_cvtsi32_si128(*((_DWORD *)this + 215));
  v22 = 0;
  if ( *((_DWORD *)this + 217) - *((_DWORD *)this + 215) >= 0 )
    v22 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
  v63 = 0;
  v62 = 0.0;
  v61 = 0.0;
  v23 = v20 + *((float *)this + 188);
  v60 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  v24 = (float)((float)(_mm_cvtepi32_ps(v14).m128_f32[0] * v6) + _mm_cvtepi32_ps(v21).m128_f32[0])
      + *((float *)this + 189);
  v25 = (float)v22 * *((float *)this + 192);
  v54 = v25;
  v26 = _mm_cvtepi32_ps(v19).m128_f32[0] * *((float *)this + 191);
  *((_DWORD *)this + 140) = 0;
  *((_DWORD *)this + 138) = 0;
  *((_DWORD *)this + 137) = 0;
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 135) = 0;
  *((_DWORD *)this + 133) = 0;
  *((_DWORD *)this + 132) = 0;
  *((_DWORD *)this + 131) = 0;
  *((_DWORD *)this + 130) = 0;
  *((_DWORD *)this + 143) = 0;
  v50 = 0;
  *((_DWORD *)this + 141) = v18;
  *((_DWORD *)this + 142) = LODWORD(v6) ^ _xmm;
  *((_DWORD *)this + 144) = 1065353216;
  *((_DWORD *)this + 139) = 1065353216;
  *((_DWORD *)this + 134) = 1065353216;
  *((_DWORD *)this + 129) = 1065353216;
  v27 = *((_DWORD *)this + 193);
  v49 = LODWORD(v26);
  v59 = v27;
  v64 = 1065353216;
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)&v49);
  v29 = *((_DWORD *)this + 255);
  if ( v29 )
  {
    v30 = v29 - 1;
    if ( v30 )
    {
      if ( v30 == 1 )
      {
        v31 = (float)(v25 * *((float *)this + 201)) + (float)((float)(v28 - v25) * *((float *)this + 195));
        v32 = (float)(v26 * *((float *)this + 200)) + (float)((float)(v28 - v26) * *((float *)this + 194));
      }
      else
      {
        v31 = 0.0;
        v32 = 0.0;
      }
      goto LABEL_23;
    }
    v33 = 0;
    if ( *((_DWORD *)this + 220) - *((_DWORD *)this + 218) >= 0 )
      v33 = *((_DWORD *)this + 220) - *((_DWORD *)this + 218);
    v35 = *((_DWORD *)this + 221) - *((_DWORD *)this + 219);
    v34 = v35 < 0;
    v32 = (float)((float)((float)v33 * *((float *)this + 200)) + (float)*((int *)this + 218))
        - (float)(v23 - (float)((float)((float)(0.5 - *((float *)this + 194)) * v26) + *((float *)this + 194)));
    v36 = _mm_cvtsi32_si128(*((_DWORD *)this + 219));
  }
  else
  {
    v37 = 0;
    if ( *((_DWORD *)this + 216) - *((_DWORD *)this + 214) >= 0 )
      v37 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
    v35 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
    v34 = v35 < 0;
    v32 = (float)((float)((float)v37 * *((float *)this + 200)) + (float)*((int *)this + 214))
        - (float)(v23 - (float)((float)((float)(0.5 - *((float *)this + 194)) * v26) + *((float *)this + 194)));
    v36 = _mm_cvtsi32_si128(*((_DWORD *)this + 215));
  }
  v38 = 0;
  LODWORD(v39) = _mm_cvtepi32_ps(v36).m128_u32[0];
  if ( !v34 )
    v38 = v35;
  v31 = (float)((float)((float)v38 * *((float *)this + 201)) + v39)
      - (float)(v24 - (float)((float)((float)(0.5 - *((float *)this + 195)) * v25) + *((float *)this + 195)));
LABEL_23:
  v40 = *((float *)this + 195);
  v41 = *((float *)this + 194) - v32;
  v60 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  v50 = 0;
  v63 = 0;
  v61 = v41;
  v62 = v40 - v31;
  v64 = 1065353216;
  v59 = 1065353216;
  v54 = 1.0;
  v49 = 1065353216;
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)&v49);
  v42 = *((float *)this + 235);
  if ( v42 != 0.0 )
  {
    D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)&v65, 0.0, 0.0, v42 * 0.017453292);
    D2DMatrixRotationQuaternion((struct D2DMatrix *)&v49, (const struct D2DQuaternion *)&v65);
    D2DMatrixMultiply(
      (CAnimatedTransitionVisual *)((char *)this + 516),
      (CAnimatedTransitionVisual *)((char *)this + 516),
      (const struct D2DMatrix *)&v49);
  }
  D3DXQuaternionRotationYawPitchRoll(
    (struct D2DQuaternion *)&v65,
    *((float *)this + 198) * 0.017453292,
    *((float *)this + 197) * 0.017453292,
    *((float *)this + 199) * 0.017453292);
  D2DMatrixRotationQuaternion((struct D2DMatrix *)v68, (const struct D2DQuaternion *)&v65);
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)v68);
  v60 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  v50 = 0;
  v63 = 0;
  v61 = v32 + v23;
  v62 = v31 + v24;
  v64 = 1065353216;
  v59 = 1065353216;
  v54 = 1.0;
  v49 = 1065353216;
  D2DMatrixMultiply((CAnimatedTransitionVisual *)((char *)this + 516), v43, (const struct D2DMatrix *)&v49);
  v67[2] = 0;
  v67[0] = 1056964608;
  v67[1] = 1056964608;
  D3DXVec3TransformCoord(
    (struct D2DVector3 *)&v65,
    (const struct D2DVector3 *)v67,
    (CAnimatedTransitionVisual *)((char *)this + 516));
  if ( *((_BYTE *)this + 1036) )
    v7 = v66;
  v44 = *((float *)this + 230) + *((float *)this + 190);
  v60 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  v50 = 0;
  v61 = 0.0;
  v62 = 0.0;
  v63 = COERCE_UNSIGNED_INT(v44 + v7) ^ _xmm;
  v64 = 1065353216;
  v59 = 1065353216;
  v54 = 1.0;
  v49 = 1065353216;
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)&v49);
  v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 36) + 16LL) + 1104LL))(
          *(_QWORD *)(*((_QWORD *)this + 36) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 36) + 24LL),
          (char *)this + 516);
  v46 = v45;
  if ( v45 >= 0 )
  {
    if ( *((float *)this + 186) != *((float *)this + 187) )
    {
      v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 39)
                                                                                            + 16LL)
                                                                              + 984LL))(
              *(_QWORD *)(*((_QWORD *)this + 39) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 39) + 24LL),
              *(unsigned int *)(*((_QWORD *)this + 38) + 24LL),
              0LL,
              *(_DWORD *)(*((_QWORD *)this + 38) + 24LL));
      v46 = v47;
      if ( v47 >= 0 )
        *((_DWORD *)this + 187) = *((_DWORD *)this + 186);
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v47, 0x720u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v45, 0x717u);
  }
  return v46;
}
