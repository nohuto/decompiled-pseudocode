/*
 * XREFs of ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x180187448
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187730 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800296B0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1802057C4 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CConditionalExpression::AddStackValueToSum(
        CConditionalExpression *this,
        struct CExpressionValue *a2,
        struct CExpressionValueStack *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  float *v7; // rcx
  int v8; // eax
  _OWORD *v9; // rax
  float v10; // xmm0_4
  __m128 v11; // xmm2
  float v12; // xmm1_4
  float v13; // xmm0_4
  __m128 v14; // xmm1
  __int128 v15; // xmm0
  signed __int64 v16; // rcx
  float *v17; // rax
  __int64 v18; // r8
  __int128 v19; // xmm0
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  float v22; // eax
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  unsigned int v27; // [rsp+20h] [rbp-39h]
  float v28[8]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v29[64]; // [rsp+50h] [rbp-9h] BYREF

  v3 = 0;
  v4 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
  v7 = (float *)(*((_QWORD *)a3 + 3) + 80 * v4);
  if ( !*((_BYTE *)a2 + 76) )
  {
    CExpressionValue::CopyFrom(a2, (const struct CExpressionValue *)(*((_QWORD *)a3 + 3) + 80 * v4));
LABEL_24:
    --*((_DWORD *)a3 + 4);
    return v3;
  }
  v8 = *((_DWORD *)v7 + 18);
  switch ( v8 )
  {
    case 18:
      v25 = *v7 + *(float *)a2;
      *((_DWORD *)a2 + 18) = 18;
      *(float *)a2 = v25;
      goto LABEL_23;
    case 35:
      v23 = *(float *)a2 + *v7;
      v24 = v7[1] + *((float *)a2 + 1);
      *((_DWORD *)a2 + 18) = 35;
      *(float *)a2 = v23;
      *((float *)a2 + 1) = v24;
      goto LABEL_23;
    case 52:
      v20 = (__m128)*(unsigned int *)v7;
      v20.m128_f32[0] = v20.m128_f32[0] + *(float *)a2;
      v21 = (__m128)*((unsigned int *)a2 + 1);
      v21.m128_f32[0] = v21.m128_f32[0] + v7[1];
      v28[2] = *((float *)a2 + 2) + v7[2];
      v22 = v28[2];
      *((_DWORD *)a2 + 18) = 52;
      *(_QWORD *)a2 = _mm_unpacklo_ps(v20, v21).m128_u64[0];
      *((float *)a2 + 2) = v22;
      goto LABEL_23;
    case 69:
      v16 = (char *)v7 - (char *)a2;
      v17 = (float *)a2;
      v18 = 4LL;
      do
      {
        *(float *)((char *)v17 + (char *)v28 - (char *)a2) = *(float *)((char *)v17 + v16) + *v17;
        ++v17;
        --v18;
      }
      while ( v18 );
      v19 = *(_OWORD *)v28;
      *((_DWORD *)a2 + 18) = 69;
      *(_OWORD *)a2 = v19;
      goto LABEL_19;
  }
  if ( v8 <= 69 )
    goto LABEL_15;
  if ( v8 > 71 )
  {
    if ( v8 != 104 )
    {
      if ( v8 == 265 )
      {
        v9 = (_OWORD *)D2DMatrix::operator+(a2, v29, v7);
        *((_DWORD *)a2 + 18) = 265;
        *(_OWORD *)a2 = *v9;
        *((_OWORD *)a2 + 1) = v9[1];
        *((_OWORD *)a2 + 2) = v9[2];
        *((_OWORD *)a2 + 3) = v9[3];
LABEL_19:
        *((_BYTE *)a2 + 76) = 1;
        goto LABEL_24;
      }
LABEL_15:
      v27 = 439;
      goto LABEL_14;
    }
    v10 = *v7 + *(float *)a2;
    v11 = (__m128)*((unsigned int *)a2 + 5);
    v11.m128_f32[0] = v11.m128_f32[0] + v7[5];
    v28[1] = *((float *)a2 + 1) + v7[1];
    v12 = *((float *)a2 + 3) + v7[3];
    v28[0] = v10;
    v13 = *((float *)a2 + 2) + v7[2];
    v28[3] = v12;
    v14 = (__m128)*((unsigned int *)a2 + 4);
    v14.m128_f32[0] = v14.m128_f32[0] + v7[4];
    v28[2] = v13;
    v15 = *(_OWORD *)v28;
    *((_DWORD *)a2 + 18) = 104;
    *(_OWORD *)a2 = v15;
    *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v14, v11).m128_u64[0];
LABEL_23:
    *((_BYTE *)a2 + 76) = 1;
    goto LABEL_24;
  }
  v27 = 420;
LABEL_14:
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, v27);
  return v3;
}
