/*
 * XREFs of ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x18016B08C
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B370 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18002B0D0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1801AEA78 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CConditionalExpression::AddStackValueToSum(
        CConditionalExpression *this,
        struct CExpressionValue *a2,
        struct CExpressionValueStack *a3)
{
  unsigned int v4; // edi
  const struct CExpressionValue *v6; // rdx
  int v7; // eax
  _OWORD *v8; // rax
  float v9; // xmm0_4
  __m128 v10; // xmm2
  float v11; // xmm1_4
  float v12; // xmm0_4
  __m128 v13; // xmm1
  __int128 v14; // xmm0
  signed __int64 v15; // rdx
  float *v16; // rax
  __int64 v17; // r8
  __int128 v18; // xmm0
  __m128 v19; // xmm2
  __m128 v20; // xmm1
  float v21; // eax
  __m128 v22; // xmm0
  __m128 v23; // xmm1
  float v24; // xmm0_4
  unsigned int v26; // [rsp+20h] [rbp-39h]
  float v27[8]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v28[64]; // [rsp+50h] [rbp-9h] BYREF

  v4 = 0;
  v6 = (const struct CExpressionValue *)(*((_QWORD *)a3 + 3) + 72LL * (unsigned int)(*((_DWORD *)a3 + 4) - 1));
  if ( !*((_BYTE *)a2 + 68) )
  {
    CExpressionValue::CopyFrom(a2, v6);
LABEL_23:
    --*((_DWORD *)a3 + 4);
    return v4;
  }
  v7 = *((_DWORD *)v6 + 16);
  switch ( v7 )
  {
    case 18:
      v24 = *(float *)v6 + *(float *)a2;
      *((_DWORD *)a2 + 16) = 18;
      *(float *)a2 = v24;
      goto LABEL_22;
    case 35:
      v22 = (__m128)*(unsigned int *)a2;
      v23 = (__m128)*((unsigned int *)a2 + 1);
      v22.m128_f32[0] = v22.m128_f32[0] + *(float *)v6;
      v23.m128_f32[0] = v23.m128_f32[0] + *((float *)v6 + 1);
      *((_DWORD *)a2 + 16) = 35;
      *(_QWORD *)a2 = _mm_unpacklo_ps(v22, v23).m128_u64[0];
      goto LABEL_22;
    case 52:
      v19 = (__m128)*(unsigned int *)v6;
      v19.m128_f32[0] = v19.m128_f32[0] + *(float *)a2;
      v20 = (__m128)*((unsigned int *)a2 + 1);
      v20.m128_f32[0] = v20.m128_f32[0] + *((float *)v6 + 1);
      v27[2] = *((float *)a2 + 2) + *((float *)v6 + 2);
      v21 = v27[2];
      *((_DWORD *)a2 + 16) = 52;
      *(_QWORD *)a2 = _mm_unpacklo_ps(v19, v20).m128_u64[0];
      *((float *)a2 + 2) = v21;
      goto LABEL_22;
    case 69:
      v15 = v6 - a2;
      v16 = (float *)a2;
      v17 = 4LL;
      do
      {
        *(float *)((char *)v16 + (char *)v27 - (char *)a2) = *(float *)((char *)v16 + v15) + *v16;
        ++v16;
        --v17;
      }
      while ( v17 );
      v18 = *(_OWORD *)v27;
      *((_DWORD *)a2 + 16) = 69;
      *(_OWORD *)a2 = v18;
      goto LABEL_22;
  }
  if ( v7 <= 69 )
  {
LABEL_15:
    v26 = 437;
    goto LABEL_14;
  }
  if ( v7 > 71 )
  {
    if ( v7 == 104 )
    {
      v9 = *(float *)v6 + *(float *)a2;
      v10 = (__m128)*((unsigned int *)a2 + 5);
      v10.m128_f32[0] = v10.m128_f32[0] + *((float *)v6 + 5);
      v27[1] = *((float *)a2 + 1) + *((float *)v6 + 1);
      v11 = *((float *)a2 + 3) + *((float *)v6 + 3);
      v27[0] = v9;
      v12 = *((float *)a2 + 2) + *((float *)v6 + 2);
      v27[3] = v11;
      v13 = (__m128)*((unsigned int *)a2 + 4);
      v13.m128_f32[0] = v13.m128_f32[0] + *((float *)v6 + 4);
      v27[2] = v12;
      v14 = *(_OWORD *)v27;
      *((_DWORD *)a2 + 16) = 104;
      *(_OWORD *)a2 = v14;
      *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v13, v10).m128_u64[0];
      goto LABEL_22;
    }
    if ( v7 == 265 )
    {
      v8 = (_OWORD *)D2DMatrix::operator+(a2, v28, v6);
      *((_DWORD *)a2 + 16) = 265;
      *(_OWORD *)a2 = *v8;
      *((_OWORD *)a2 + 1) = v8[1];
      *((_OWORD *)a2 + 2) = v8[2];
      *((_OWORD *)a2 + 3) = v8[3];
LABEL_22:
      *((_BYTE *)a2 + 68) = 1;
      goto LABEL_23;
    }
    goto LABEL_15;
  }
  v26 = 418;
LABEL_14:
  v4 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v26);
  return v4;
}
