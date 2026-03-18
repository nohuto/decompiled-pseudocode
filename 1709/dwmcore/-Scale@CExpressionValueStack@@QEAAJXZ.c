/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180186978
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1800A8DC0 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x1801C8EB8 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // edi
  __int64 v4; // rdx
  __m128 *v5; // r10
  __m128 *v6; // r8
  __m128 *v7; // rbx
  float *v8; // rcx
  __int32 v9; // eax
  __m128 *v10; // rax
  __m128 v11; // xmm1
  __m128 v12; // xmm3
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __int64 i; // rax
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  unsigned int v24; // [rsp+28h] [rbp-29h]
  __m128 v25; // [rsp+38h] [rbp-19h]
  char v26[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (__m128 *)(v4 + 72LL * (v1 - 2));
    v6 = v5;
    v7 = v5;
    v8 = (float *)(v4 + 72LL * (v1 - 1));
    if ( *((_DWORD *)v8 + 16) != 18 )
    {
      if ( v5[4].m128_i32[0] != 18 )
      {
        v24 = 2858;
        goto LABEL_3;
      }
      v6 = (__m128 *)(v4 + 72LL * (v1 - 1));
      v8 = (float *)(v4 + 72LL * (v1 - 2));
    }
    v9 = v6[4].m128_i32[0];
    switch ( v9 )
    {
      case 18:
        v22 = *v8 * v6->m128_f32[0];
        v5[4].m128_i32[0] = 18;
        v5->m128_f32[0] = v22;
        break;
      case 35:
        v20 = *v8 * v6->m128_f32[1];
        v21 = *v8 * v6->m128_f32[0];
        v5[4].m128_i32[0] = 35;
        v5->m128_f32[1] = v20;
        v5->m128_f32[0] = v21;
        break;
      case 52:
        v17 = (__m128)*(unsigned int *)v8;
        v18 = v17;
        v19 = v17.m128_f32[0] * v6->m128_f32[2];
        v17.m128_f32[0] = v17.m128_f32[0] * v6->m128_f32[0];
        v18.m128_f32[0] = v18.m128_f32[0] * v6->m128_f32[1];
        v5[4].m128_i32[0] = 52;
        v25.m128_f32[2] = v19;
        v5->m128_u64[0] = _mm_unpacklo_ps(v17, v18).m128_u64[0];
        v5->m128_f32[2] = v19;
        break;
      case 69:
        for ( i = 0LL; i < 4; ++i )
          v25.m128_f32[i] = *v8 * v6->m128_f32[i];
        v16 = v25;
        v5[4].m128_i32[0] = 69;
        *v5 = v16;
        break;
      case 104:
        v12 = _mm_shuffle_ps((__m128)*(unsigned int *)v8, (__m128)*(unsigned int *)v8, 0);
        v13 = v12;
        v14 = _mm_mul_ps(*v6, v12);
        v13.m128_f32[0] = v12.m128_f32[0] * v6[1].m128_f32[0];
        v12.m128_f32[0] = v12.m128_f32[0] * v6[1].m128_f32[1];
        v5[4].m128_i32[0] = 104;
        *v5 = v14;
        v5[1].m128_u64[0] = _mm_unpacklo_ps(v13, v12).m128_u64[0];
        v25 = v14;
        break;
      case 265:
        v10 = (__m128 *)D2DMatrix::operator*(v6, v26);
        v7[4].m128_i32[0] = 265;
        *v7 = *v10;
        v7[1] = v10[1];
        v7[2] = v10[2];
        v11 = v10[3];
        v7[4].m128_i8[4] = 1;
        v7[3] = v11;
LABEL_24:
        --*((_DWORD *)this + 4);
        return v2;
      default:
        v24 = 2921;
        goto LABEL_3;
    }
    v5[4].m128_i8[4] = 1;
    goto LABEL_24;
  }
  v24 = 2823;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v24);
  return v2;
}
