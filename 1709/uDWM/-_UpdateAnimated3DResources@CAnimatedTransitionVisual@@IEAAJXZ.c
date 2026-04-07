/*
 * XREFs of ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008C110
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008B7B0 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180024C90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x1800A05B0 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x1800A07F8 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800A0934 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateAnimated3DResources(CAnimatedTransitionVisual *this)
{
  int v1; // edx
  float v3; // xmm2_4
  __m128i v4; // xmm0
  int v5; // ecx
  float v6; // xmm1_4
  float v7; // xmm8_4
  unsigned int v8; // eax
  int v9; // ecx
  float v10; // xmm0_4
  __m128i v11; // xmm6
  int v12; // eax
  float v13; // xmm10_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm10_4
  float v17; // xmm0_4
  float v18; // xmm11_4
  float v19; // xmm5_4
  int v20; // ecx
  int v21; // ecx
  float v22; // xmm7_4
  float v23; // xmm6_4
  int v24; // eax
  bool v25; // sf
  int v26; // ecx
  __m128i v27; // xmm0
  int v28; // eax
  int v29; // eax
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  const struct D2DMatrix *v34; // rdx
  float v35; // xmm0_4
  int v36; // eax
  unsigned int v37; // edi
  int v38; // eax
  int v40; // [rsp+38h] [rbp-D0h] BYREF
  int v41; // [rsp+3Ch] [rbp-CCh]
  int v42; // [rsp+40h] [rbp-C8h]
  int v43; // [rsp+44h] [rbp-C4h]
  int v44; // [rsp+48h] [rbp-C0h]
  int v45; // [rsp+4Ch] [rbp-BCh]
  int v46; // [rsp+50h] [rbp-B8h]
  int v47; // [rsp+54h] [rbp-B4h]
  int v48; // [rsp+58h] [rbp-B0h]
  int v49; // [rsp+5Ch] [rbp-ACh]
  int v50; // [rsp+60h] [rbp-A8h]
  int v51; // [rsp+64h] [rbp-A4h]
  float v52; // [rsp+68h] [rbp-A0h]
  float v53; // [rsp+6Ch] [rbp-9Ch]
  int v54; // [rsp+70h] [rbp-98h]
  int v55; // [rsp+74h] [rbp-94h]
  int v56; // [rsp+78h] [rbp-90h] BYREF
  float v57; // [rsp+80h] [rbp-88h]
  _DWORD v58[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v59[144]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
  v3 = *((float *)this + 194);
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 214));
  v5 = *((_DWORD *)this + 217);
  v6 = *((float *)this + 195);
  v7 = 0.0;
  v8 = 0;
  if ( v1 >= 0 )
    v8 = v1;
  v9 = v5 - *((_DWORD *)this + 215);
  LODWORD(v10) = _mm_cvtepi32_ps(v4).m128_u32[0];
  v11 = _mm_cvtsi32_si128(v8);
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v54 = 0;
  v53 = 0.0;
  v52 = 0.0;
  v51 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v57 = 0.0;
  v13 = _mm_cvtepi32_ps(v11).m128_f32[0];
  v14 = v13 * *((float *)this + 191);
  v15 = (float)v12 * *((float *)this + 192);
  v16 = (float)((float)(v13 * v3) + v10) + *((float *)this + 188);
  v17 = (float)*((int *)this + 215);
  v40 = LODWORD(v14);
  v45 = LODWORD(v15);
  v18 = (float)((float)((float)v12 * v6) + v17) + *((float *)this + 189);
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
  *((_DWORD *)this + 144) = 1065353216;
  *((_DWORD *)this + 139) = 1065353216;
  *((_DWORD *)this + 134) = 1065353216;
  *((_DWORD *)this + 129) = 1065353216;
  *((_DWORD *)this + 141) = LODWORD(v3) ^ _xmm;
  *((_DWORD *)this + 142) = LODWORD(v6) ^ _xmm;
  v50 = *((_DWORD *)this + 193);
  v55 = 1065353216;
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)&v40);
  v20 = *((_DWORD *)this + 255);
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        v22 = (float)(v15 * *((float *)this + 201)) + (float)((float)(v19 - v15) * *((float *)this + 195));
        v23 = (float)(v14 * *((float *)this + 200)) + (float)((float)(v19 - v14) * *((float *)this + 194));
      }
      else
      {
        v22 = 0.0;
        v23 = 0.0;
      }
      goto LABEL_19;
    }
    v24 = 0;
    if ( *((_DWORD *)this + 220) - *((_DWORD *)this + 218) >= 0 )
      v24 = *((_DWORD *)this + 220) - *((_DWORD *)this + 218);
    v26 = *((_DWORD *)this + 221) - *((_DWORD *)this + 219);
    v25 = v26 < 0;
    v23 = (float)((float)((float)v24 * *((float *)this + 200)) + (float)*((int *)this + 218))
        - (float)(v16 - (float)((float)((float)(0.5 - *((float *)this + 194)) * v14) + *((float *)this + 194)));
    v27 = _mm_cvtsi32_si128(*((_DWORD *)this + 219));
  }
  else
  {
    v28 = 0;
    if ( *((_DWORD *)this + 216) - *((_DWORD *)this + 214) >= 0 )
      v28 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
    v26 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
    v25 = v26 < 0;
    v23 = (float)((float)((float)v28 * *((float *)this + 200)) + (float)*((int *)this + 214))
        - (float)(v16 - (float)((float)((float)(0.5 - *((float *)this + 194)) * v14) + *((float *)this + 194)));
    v27 = _mm_cvtsi32_si128(*((_DWORD *)this + 215));
  }
  v29 = 0;
  LODWORD(v30) = _mm_cvtepi32_ps(v27).m128_u32[0];
  if ( !v25 )
    v29 = v26;
  v22 = (float)((float)((float)v29 * *((float *)this + 201)) + v30)
      - (float)(v18 - (float)((float)((float)(0.5 - *((float *)this + 195)) * v15) + *((float *)this + 195)));
LABEL_19:
  v31 = *((float *)this + 195);
  v32 = *((float *)this + 194) - v23;
  v51 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v54 = 0;
  v52 = v32;
  v53 = v31 - v22;
  v55 = 1065353216;
  v50 = 1065353216;
  v45 = 1065353216;
  v40 = 1065353216;
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)&v40);
  v33 = *((float *)this + 235);
  if ( v33 != 0.0 )
  {
    D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)&v56, 0.0, 0.0, v33 * 0.017453292);
    D2DMatrixRotationQuaternion((struct D2DMatrix *)&v40, (const struct D2DQuaternion *)&v56);
    D2DMatrixMultiply(
      (CAnimatedTransitionVisual *)((char *)this + 516),
      (CAnimatedTransitionVisual *)((char *)this + 516),
      (const struct D2DMatrix *)&v40);
  }
  D3DXQuaternionRotationYawPitchRoll(
    (struct D2DQuaternion *)&v56,
    *((float *)this + 198) * 0.017453292,
    *((float *)this + 197) * 0.017453292,
    *((float *)this + 199) * 0.017453292);
  D2DMatrixRotationQuaternion((struct D2DMatrix *)v59, (const struct D2DQuaternion *)&v56);
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)v59);
  v51 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v54 = 0;
  v52 = v23 + v16;
  v53 = v22 + v18;
  v55 = 1065353216;
  v50 = 1065353216;
  v45 = 1065353216;
  v40 = 1065353216;
  D2DMatrixMultiply((CAnimatedTransitionVisual *)((char *)this + 516), v34, (const struct D2DMatrix *)&v40);
  v58[2] = 0;
  v58[0] = 1056964608;
  v58[1] = 1056964608;
  D3DXVec3TransformCoord(
    (struct D2DVector3 *)&v56,
    (const struct D2DVector3 *)v58,
    (CAnimatedTransitionVisual *)((char *)this + 516));
  if ( *((_BYTE *)this + 1036) )
    v7 = v57;
  v35 = *((float *)this + 230) + *((float *)this + 190);
  v51 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v52 = 0.0;
  v53 = 0.0;
  v54 = COERCE_UNSIGNED_INT(v35 + v7) ^ _xmm;
  v55 = 1065353216;
  v50 = 1065353216;
  v45 = 1065353216;
  v40 = 1065353216;
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)&v40);
  v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 36) + 16LL) + 1104LL))(
          *(_QWORD *)(*((_QWORD *)this + 36) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 36) + 24LL),
          (char *)this + 516);
  v37 = v36;
  if ( v36 >= 0 )
  {
    if ( *((float *)this + 186) != *((float *)this + 187) )
    {
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 39)
                                                                                            + 16LL)
                                                                              + 984LL))(
              *(_QWORD *)(*((_QWORD *)this + 39) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 39) + 24LL),
              *(unsigned int *)(*((_QWORD *)this + 38) + 24LL),
              0LL,
              *(_DWORD *)(*((_QWORD *)this + 38) + 24LL));
      v37 = v38;
      if ( v38 >= 0 )
        *((_DWORD *)this + 187) = *((_DWORD *)this + 186);
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x720u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x717u);
  }
  return v37;
}
