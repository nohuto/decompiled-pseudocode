/*
 * XREFs of ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x18020D9C0
 * Callers:
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801D8498 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18009520C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     _anonymous_namespace_::operator_ @ 0x18020D960 (_anonymous_namespace_--operator_.c)
 *     ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x18020E338 (-TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z.c)
 */

void __fastcall CInteractionContextTransformHelper::CalculatePrediction(
        CInteractionContextTransformHelper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        const struct MANIPULATION_TRANSFORM *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        float a6,
        float a7,
        float *a8,
        float *a9)
{
  float *v10; // r8
  char v12; // di
  __m128 v13; // xmm0
  const struct MANIPULATION_TRANSFORM *v14; // rax
  __m128 v15; // xmm15
  int v16; // r14d
  float *v17; // rax
  __int64 v18; // r8
  _DWORD *v19; // r9
  __int128 *v20; // r10
  float v21; // xmm4_4
  float *v22; // rsi
  __m128 v23; // xmm0
  float v24; // xmm1_4
  int v25; // r11d
  float v26; // xmm10_4
  __int64 v27; // xmm1_8
  float v28; // xmm3_4
  float v29; // xmm12_4
  float v30; // xmm11_4
  float v31; // xmm13_4
  __m128i v32; // xmm8
  int v33; // eax
  float v34; // xmm7_4
  __int128 v35; // xmm0
  float v36; // xmm6_4
  float v37; // xmm8_4
  float *v38; // rdx
  __int64 v39; // r10
  char v40; // r11
  __int128 v41; // xmm0
  __int64 v42; // r10
  __int128 v43; // xmm0
  __int64 v44; // r10
  __int128 v45; // xmm0
  double v46; // xmm9_8
  float v47; // xmm2_4
  float v48; // xmm4_4
  __int64 v49; // xmm1_8
  float v50; // xmm3_4
  float *v51; // rdx
  float v52; // xmm4_4
  __int128 v53; // xmm0
  float v54; // [rsp+38h] [rbp-C1h]
  __m128 v55; // [rsp+40h] [rbp-B9h] BYREF
  _QWORD v56[3]; // [rsp+50h] [rbp-A9h] BYREF
  __int64 v57; // [rsp+68h] [rbp-91h]
  float v58; // [rsp+138h] [rbp+3Fh] BYREF
  float v59; // [rsp+140h] [rbp+47h] BYREF
  float v60; // [rsp+148h] [rbp+4Fh]

  v10 = (float *)((char *)this + 176);
  if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
  {
    v55.m128_u64[0] = 0LL;
    LODWORD(v56[0]) = 0;
    v55.m128_u64[1] = 1065353216LL;
    v12 = a5 == 1;
    v13 = v55;
    *((_BYTE *)this + 197) = a5 == 1;
    *((_BYTE *)this + 196) = 0;
    *(__m128 *)v10 = v13;
    *((_DWORD *)this + 48) = 0;
  }
  else
  {
    *((_BYTE *)this + 197) &= a5 == 1;
    v12 = *((_BYTE *)this + 197);
  }
  v14 = (CInteractionContextTransformHelper *)((char *)this + 176);
  if ( a3 )
    v14 = a3;
  v15 = *(__m128 *)v14;
  v16 = *((_DWORD *)v14 + 4);
  LODWORD(v56[0]) = v16;
  v55 = v15;
  v17 = anonymous_namespace_::operator_((float *)&v56[1], v55.m128_f32, v10);
  v22 = a9;
  v23 = *(__m128 *)v17;
  *(float *)&v57 = v17[4];
  v24 = _mm_shuffle_ps(v23, v23, 85).m128_f32[0] + a7;
  *a8 = v23.m128_f32[0] + a6;
  *v22 = v24;
  if ( *(_DWORD *)a2 == v25 && *((_DWORD *)a2 + 2) == 2 && v19 )
  {
    v26 = *((float *)a2 + 10) - *((float *)a2 + 5);
    v27 = *((_QWORD *)v20 + 2);
    v28 = *((float *)a2 + 10) + v15.m128_f32[0];
    v29 = *(float *)v18;
    v30 = *((float *)a2 + 11) - *((float *)a2 + 6);
    v31 = *((float *)v20 + 45);
    v32 = _mm_cvtsi32_si128(v19[2] - *v19);
    v33 = v19[3] - v19[1];
    v34 = *((float *)a2 + 11) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
    v60 = v26;
    v35 = *v20;
    v36 = (float)v33 - v21;
    a6 = v26;
    v54 = v30;
    v37 = _mm_cvtepi32_ps(v32).m128_f32[0] - v21;
    a7 = v30;
    *(float *)&a8 = v29;
    *(float *)&a9 = v31;
    v58 = v28;
    v59 = v34;
    *(_OWORD *)&v56[1] = v35;
    v57 = v27;
    if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v56[1]) )
    {
      v41 = *(_OWORD *)(v39 + 48);
      v57 = *(_QWORD *)(v39 + 64);
      *(_OWORD *)&v56[1] = v41;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v56[1],
        v28,
        v34,
        &v58,
        &v59);
      v43 = *(_OWORD *)(v42 + 48);
      v57 = *(_QWORD *)(v42 + 64);
      *(_OWORD *)&v56[1] = v43;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v56[1],
        v26,
        v30,
        &a6,
        &a7);
      v45 = *(_OWORD *)(v44 + 48);
      v57 = *(_QWORD *)(v44 + 64);
      *(_OWORD *)&v56[1] = v45;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v56[1],
        v29,
        v31,
        (float *)&a8,
        (float *)&a9);
      v29 = *(float *)&a8;
      v31 = *(float *)&a9;
      v28 = v58;
      v34 = v59;
      v60 = a6;
      v54 = a7;
    }
    v46 = v37;
    if ( !v12
      || COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v28) & _xmm) <= v46
      && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v34) & _xmm) <= v36 )
    {
      v40 = 0;
    }
    if ( *(_BYTE *)(v39 + 196) )
    {
      if ( v40 )
      {
        *v38 = 0.0;
        *v22 = 0.0;
      }
    }
    else if ( v40 )
    {
      v47 = v28;
      v48 = v34;
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v28) & _xmm) > v46 )
      {
        v28 = v37;
        if ( v47 < 0.0 )
          LODWORD(v28) = LODWORD(v37) ^ _xmm;
        v48 = (float)(v34 * v28) / v47;
      }
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v48) & _xmm) > v36 )
      {
        v48 = v36;
        if ( v34 < 0.0 )
          LODWORD(v48) = LODWORD(v36) ^ _xmm;
        v28 = (float)(v47 * v48) / v34;
      }
      v49 = *(_QWORD *)(v39 + 16);
      *(_OWORD *)&v56[1] = *(_OWORD *)v39;
      v57 = v49;
      v50 = v28 - (float)(v29 + v60);
      *v38 = v50;
      *v22 = v48 - (float)(v31 + v54);
      if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v56[1]) )
      {
        v53 = *(_OWORD *)(v39 + 72);
        v57 = *(_QWORD *)(v39 + 88);
        *(_OWORD *)&v56[1] = v53;
        CInteractionContextTransformHelper::TransformDirection(
          (const struct D2D1::Matrix3x2F *)&v56[1],
          v50,
          v52,
          v51,
          v22);
      }
    }
    *(_BYTE *)(v39 + 196) = v40;
  }
  *(__m128 *)v18 = v15;
  *(_DWORD *)(v18 + 16) = v16;
}
