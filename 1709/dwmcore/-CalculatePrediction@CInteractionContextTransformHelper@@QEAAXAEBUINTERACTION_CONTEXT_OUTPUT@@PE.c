/*
 * XREFs of ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x1801CD088
 * Callers:
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x18019F3E4 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180095758 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     _anonymous_namespace_::operator_ @ 0x1801CD020 (_anonymous_namespace_--operator_.c)
 *     ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x1801CD97C (-TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z.c)
 */

void __fastcall CInteractionContextTransformHelper::CalculatePrediction(
        __m128 *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        __m128 *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        float a6,
        float a7,
        float *a8,
        float *a9)
{
  bool v10; // zf
  __m128 v11; // xmm0
  __m128 v12; // xmm10
  __int32 v13; // esi
  __m128 *v14; // rdi
  float *v15; // rax
  _DWORD *v16; // r9
  __int128 *v17; // r10
  float *v18; // r8
  __m128 v19; // xmm0
  float v20; // xmm1_4
  int v21; // r11d
  float v22; // xmm14_4
  __int64 v23; // xmm1_8
  float v24; // xmm3_4
  float v25; // xmm14_4
  float v26; // xmm11_4
  float v27; // xmm15_4
  float v28; // xmm12_4
  __m128i v29; // xmm7
  int v30; // eax
  float v31; // xmm6_4
  __int128 v32; // xmm0
  float v33; // xmm8_4
  float v34; // xmm7_4
  float *v35; // rdx
  float *v36; // r8
  __int128 *v37; // r10
  char v38; // r11
  __int128 v39; // xmm0
  __int64 v40; // r10
  __int128 v41; // xmm0
  __int64 v42; // r10
  __int128 v43; // xmm0
  float v44; // xmm5_4
  float v45; // xmm4_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  __int128 v48; // xmm0
  float *v49; // rdx
  float *v50; // r8
  float v51; // xmm4_4
  float v52; // xmm5_4
  __int128 v53; // xmm0
  __m128 v54; // [rsp+38h] [rbp-91h] BYREF
  __int32 v55; // [rsp+48h] [rbp-81h]
  __int128 v56; // [rsp+50h] [rbp-79h] BYREF
  __int128 v57; // [rsp+60h] [rbp-69h]
  float v58; // [rsp+108h] [rbp+3Fh] BYREF
  float v59; // [rsp+110h] [rbp+47h] BYREF

  if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
  {
    v54.m128_u64[0] = 0LL;
    v55 = 0;
    v10 = a5 == 1;
    v54.m128_u64[1] = 1065353216LL;
    v11 = v54;
    this[12].m128_i8[4] = 0;
    this[11] = v11;
    this[12].m128_i32[0] = 0;
    this[12].m128_i8[5] = v10;
  }
  else
  {
    this[12].m128_i8[5] &= a5 == 1;
  }
  if ( !a3 )
    a3 = this + 11;
  v12 = *a3;
  v13 = a3[1].m128_i32[0];
  v14 = this + 11;
  v55 = v13;
  v54 = v12;
  v15 = anonymous_namespace_::operator_((float *)&v56, v54.m128_f32, this[11].m128_f32);
  v18 = a9;
  v19 = *(__m128 *)v15;
  *(float *)&v57 = v15[4];
  v20 = _mm_shuffle_ps(v19, v19, 85).m128_f32[0] + a7;
  *a8 = v19.m128_f32[0] + a6;
  *v18 = v20;
  if ( *(_DWORD *)a2 == v21 && *((_DWORD *)a2 + 2) == 2 && v16 )
  {
    v22 = *((float *)a2 + 10);
    v23 = *((_QWORD *)v17 + 2);
    v24 = v22 + v12.m128_f32[0];
    v25 = v22 - *((float *)a2 + 5);
    v26 = v14->m128_f32[0];
    v27 = *((float *)a2 + 11) - *((float *)a2 + 6);
    v28 = *((float *)v17 + 45);
    v29 = _mm_cvtsi32_si128(v16[2] - *v16);
    v30 = v16[3] - v16[1];
    v31 = *((float *)a2 + 11) + _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
    a6 = v25;
    v32 = *v17;
    v33 = (float)v30 - 1.0;
    a7 = v27;
    *(float *)&a8 = v26;
    v34 = _mm_cvtepi32_ps(v29).m128_f32[0] - 1.0;
    *(float *)&a9 = v28;
    v58 = v24;
    v59 = v31;
    v56 = v32;
    *(_QWORD *)&v57 = v23;
    if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v56) )
    {
      v39 = v37[3];
      *(_QWORD *)&v57 = *((_QWORD *)v37 + 8);
      v56 = v39;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v56,
        v24,
        v31,
        &v58,
        &v59);
      v41 = *(_OWORD *)(v40 + 48);
      *(_QWORD *)&v57 = *(_QWORD *)(v40 + 64);
      v56 = v41;
      CInteractionContextTransformHelper::TransformDirection((const struct D2D1::Matrix3x2F *)&v56, v25, v27, &a6, &a7);
      v43 = *(_OWORD *)(v42 + 48);
      *(_QWORD *)&v57 = *(_QWORD *)(v42 + 64);
      v56 = v43;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v56,
        v26,
        v28,
        (float *)&a8,
        (float *)&a9);
      v24 = v58;
      v25 = a6;
      v27 = a7;
      v26 = *(float *)&a8;
      v28 = *(float *)&a9;
      v31 = v59;
    }
    if ( !*((_BYTE *)v37 + 197)
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v24) & _xmm) <= v34
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31) & _xmm) <= v33 )
    {
      v38 = 0;
    }
    if ( *((_BYTE *)v37 + 196) )
    {
      if ( v38 )
      {
        *v35 = 0.0;
        *v36 = 0.0;
      }
    }
    else if ( v38 )
    {
      v44 = v24;
      v45 = v31;
      v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v24) & _xmm);
      if ( v46 > v34 )
      {
        v44 = v34;
        if ( v24 < 0.0 )
          LODWORD(v44) = LODWORD(v34) ^ _xmm;
        v45 = (float)(v44 * v31) / v24;
      }
      v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v45) & _xmm);
      if ( v47 > v33 )
      {
        v45 = v33;
        if ( v31 < 0.0 )
          LODWORD(v45) = LODWORD(v33) ^ _xmm;
        v44 = (float)(v45 * v24) / v31;
      }
      v48 = *v37;
      *(_QWORD *)&v57 = *((_QWORD *)v37 + 2);
      v56 = v48;
      *v35 = v44 - (float)(v26 + v25);
      *v36 = v45 - (float)(v28 + v27);
      if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v56) )
      {
        v53 = *(__int128 *)((char *)v37 + 72);
        *(_QWORD *)&v57 = *((_QWORD *)v37 + 11);
        v56 = v53;
        CInteractionContextTransformHelper::TransformDirection(
          (const struct D2D1::Matrix3x2F *)&v56,
          v52,
          v51,
          v49,
          v50);
      }
    }
    *((_BYTE *)v37 + 196) = v38;
  }
  *v14 = v12;
  v14[1].m128_i32[0] = v13;
}
