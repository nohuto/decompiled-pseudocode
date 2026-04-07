/*
 * XREFs of ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800951D4
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009487C (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180032E70 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x1800A9500 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x1800A9748 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800A9884 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateAnimated3DResources(CAnimatedTransitionVisual *this)
{
  int v1; // r8d
  float v3; // xmm2_4
  int v4; // edx
  int v5; // ecx
  float v6; // xmm1_4
  float v7; // xmm8_4
  unsigned int v8; // eax
  int v9; // ecx
  __m128i v10; // xmm5
  int v11; // eax
  float v12; // xmm10_4
  float v13; // xmm5_4
  float v14; // xmm9_4
  float v15; // xmm10_4
  float v16; // xmm0_4
  float v17; // xmm12_4
  float v18; // xmm5_4
  float v19; // xmm7_4
  int v20; // ecx
  float v21; // xmm6_4
  int v22; // ecx
  bool v23; // sf
  int v24; // ecx
  float v25; // xmm0_4
  int v26; // r8d
  int v27; // edx
  int v28; // eax
  float v29; // xmm7_4
  int v30; // eax
  int v31; // edx
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm3_4
  const struct D2DMatrix *v35; // rdx
  float v36; // xmm0_4
  int v37; // eax
  unsigned int v38; // edi
  int v39; // eax
  float v41; // [rsp+38h] [rbp-D0h] BYREF
  int v42; // [rsp+3Ch] [rbp-CCh]
  int v43; // [rsp+40h] [rbp-C8h]
  int v44; // [rsp+44h] [rbp-C4h]
  int v45; // [rsp+48h] [rbp-C0h]
  int v46; // [rsp+4Ch] [rbp-BCh]
  int v47; // [rsp+50h] [rbp-B8h]
  int v48; // [rsp+54h] [rbp-B4h]
  int v49; // [rsp+58h] [rbp-B0h]
  int v50; // [rsp+5Ch] [rbp-ACh]
  int v51; // [rsp+60h] [rbp-A8h]
  int v52; // [rsp+64h] [rbp-A4h]
  float v53; // [rsp+68h] [rbp-A0h]
  float v54; // [rsp+6Ch] [rbp-9Ch]
  int v55; // [rsp+70h] [rbp-98h]
  int v56; // [rsp+74h] [rbp-94h]
  int v57; // [rsp+78h] [rbp-90h] BYREF
  float v58; // [rsp+80h] [rbp-88h]
  _DWORD v59[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v60[160]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *((_DWORD *)this + 214);
  v3 = *((float *)this + 194);
  v4 = *((_DWORD *)this + 216) - v1;
  v5 = *((_DWORD *)this + 217);
  v6 = *((float *)this + 195);
  v7 = 0.0;
  v8 = 0;
  if ( v4 >= 0 )
    v8 = v4;
  v9 = v5 - *((_DWORD *)this + 215);
  v10 = _mm_cvtsi32_si128(v8);
  v11 = 0;
  if ( v9 >= 0 )
    v11 = v9;
  v55 = 0;
  v54 = 0.0;
  v53 = 0.0;
  v52 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v58 = 0.0;
  v12 = _mm_cvtepi32_ps(v10).m128_f32[0];
  v13 = v12 * *((float *)this + 191);
  v14 = (float)v11 * *((float *)this + 192);
  v15 = (float)((float)(v12 * v3) + (float)v1) + *((float *)this + 188);
  v16 = (float)*((int *)this + 215);
  v41 = v13;
  v46 = LODWORD(v14);
  v17 = (float)((float)((float)v11 * v6) + v16) + *((float *)this + 189);
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
  v51 = *((_DWORD *)this + 193);
  v56 = 1065353216;
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)&v41);
  v19 = 0.0;
  v20 = *((_DWORD *)this + 255);
  v21 = 0.0;
  if ( v20 )
  {
    v22 = v20 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        v19 = (float)(v14 * *((float *)this + 201)) + (float)((float)(1.0 - v14) * *((float *)this + 195));
        v21 = (float)((float)(1.0 - v18) * *((float *)this + 194)) + (float)(v18 * *((float *)this + 200));
      }
      goto LABEL_16;
    }
    v24 = *((_DWORD *)this + 221) - *((_DWORD *)this + 219);
    v23 = v24 < 0;
    v25 = (float)*((int *)this + 219);
    v26 = *((_DWORD *)this + 218);
    v27 = *((_DWORD *)this + 220);
  }
  else
  {
    v24 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
    v23 = v24 < 0;
    v25 = (float)*((int *)this + 215);
    v26 = *((_DWORD *)this + 214);
    v27 = *((_DWORD *)this + 216);
  }
  v28 = 0;
  if ( !v23 )
    v28 = v24;
  v29 = (float)v28;
  v30 = 0;
  v31 = v27 - v26;
  if ( v31 >= 0 )
    v30 = v31;
  v19 = (float)((float)(v29 * *((float *)this + 201)) + v25)
      - (float)(v17 - (float)((float)((float)(0.5 - *((float *)this + 195)) * v14) + *((float *)this + 195)));
  v21 = (float)((float)((float)v30 * *((float *)this + 200)) + (float)v26)
      - (float)(v15 - (float)((float)((float)(0.5 - *((float *)this + 194)) * v18) + *((float *)this + 194)));
LABEL_16:
  v32 = *((float *)this + 195);
  v33 = *((float *)this + 194) - v21;
  v52 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v55 = 0;
  v53 = v33;
  v54 = v32 - v19;
  v56 = 1065353216;
  v51 = 1065353216;
  v46 = 1065353216;
  v41 = 1.0;
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)&v41);
  v34 = *((float *)this + 235);
  if ( v34 != 0.0 )
  {
    D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)&v57, 0.0, 0.0, v34 * 0.017453292);
    D2DMatrixRotationQuaternion((struct D2DMatrix *)&v41, (const struct D2DQuaternion *)&v57);
    D2DMatrixMultiply(
      (CAnimatedTransitionVisual *)((char *)this + 516),
      (CAnimatedTransitionVisual *)((char *)this + 516),
      (const struct D2DMatrix *)&v41);
  }
  D3DXQuaternionRotationYawPitchRoll(
    (struct D2DQuaternion *)&v57,
    *((float *)this + 198) * 0.017453292,
    *((float *)this + 197) * 0.017453292,
    *((float *)this + 199) * 0.017453292);
  D2DMatrixRotationQuaternion((struct D2DMatrix *)v60, (const struct D2DQuaternion *)&v57);
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)v60);
  v52 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v55 = 0;
  v53 = v15 + v21;
  v54 = v19 + v17;
  v56 = 1065353216;
  v51 = 1065353216;
  v46 = 1065353216;
  v41 = 1.0;
  D2DMatrixMultiply((CAnimatedTransitionVisual *)((char *)this + 516), v35, (const struct D2DMatrix *)&v41);
  v59[2] = 0;
  v59[0] = 1056964608;
  v59[1] = 1056964608;
  D3DXVec3TransformCoord(
    (struct D2DVector3 *)&v57,
    (const struct D2DVector3 *)v59,
    (CAnimatedTransitionVisual *)((char *)this + 516));
  if ( *((_BYTE *)this + 1036) )
    v7 = v58;
  v36 = *((float *)this + 230) + *((float *)this + 190);
  v52 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v53 = 0.0;
  v54 = 0.0;
  v55 = COERCE_UNSIGNED_INT(v36 + v7) ^ _xmm;
  v56 = 1065353216;
  v51 = 1065353216;
  v46 = 1065353216;
  v41 = 1.0;
  D2DMatrixMultiply(
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (CAnimatedTransitionVisual *)((char *)this + 516),
    (const struct D2DMatrix *)&v41);
  v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 36) + 16LL) + 1120LL))(
          *(_QWORD *)(*((_QWORD *)this + 36) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 36) + 24LL),
          (char *)this + 516);
  v38 = v37;
  if ( v37 >= 0 )
  {
    if ( *((float *)this + 186) != *((float *)this + 187) )
    {
      v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 39)
                                                                                            + 16LL)
                                                                              + 1000LL))(
              *(_QWORD *)(*((_QWORD *)this + 39) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 39) + 24LL),
              *(unsigned int *)(*((_QWORD *)this + 38) + 24LL),
              0LL,
              *(_DWORD *)(*((_QWORD *)this + 38) + 24LL));
      v38 = v39;
      if ( v39 >= 0 )
        *((_DWORD *)this + 187) = *((_DWORD *)this + 186);
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x6FBu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0x6F2u);
  }
  return v38;
}
