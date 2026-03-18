/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18017F5CC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180033D30 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x1801AE5AC (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // edi
  __int64 v4; // rdx
  __m128 *v5; // r8
  __m128 *v6; // rbx
  float *v7; // rcx
  __int32 v8; // eax
  __m128 *v9; // rax
  __m128 v10; // xmm3
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __int64 v13; // rdx
  signed __int64 v14; // r8
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  float v18; // xmm0_4
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  float v21; // xmm1_4
  unsigned int v23; // [rsp+28h] [rbp-29h]
  __m128 v24; // [rsp+38h] [rbp-19h] BYREF
  char v25[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (__m128 *)(v4 + 72LL * (v1 - 2));
    v6 = v5;
    v7 = (float *)(v4 + 72LL * (v1 - 1));
    if ( *((_DWORD *)v7 + 16) != 18 )
    {
      if ( v5[4].m128_i32[0] != 18 )
      {
        v23 = 2832;
        goto LABEL_3;
      }
      v5 = (__m128 *)(v4 + 72LL * (v1 - 1));
      v7 = (float *)(v4 + 72LL * (v1 - 2));
    }
    v8 = v5[4].m128_i32[0];
    switch ( v8 )
    {
      case 18:
        v21 = *v7 * v5->m128_f32[0];
        v6[4].m128_i32[0] = 18;
        v6->m128_f32[0] = v21;
        break;
      case 35:
        v19 = (__m128)*(unsigned int *)v7;
        v20 = v19;
        v19.m128_f32[0] = v19.m128_f32[0] * v5->m128_f32[1];
        v20.m128_f32[0] = v20.m128_f32[0] * v5->m128_f32[0];
        v6[4].m128_i32[0] = 35;
        v6->m128_u64[0] = _mm_unpacklo_ps(v20, v19).m128_u64[0];
        break;
      case 52:
        v16 = (__m128)*(unsigned int *)v7;
        v17 = v16;
        v18 = v16.m128_f32[0] * v5->m128_f32[2];
        v16.m128_f32[0] = v16.m128_f32[0] * v5->m128_f32[0];
        v17.m128_f32[0] = v17.m128_f32[0] * v5->m128_f32[1];
        v6[4].m128_i32[0] = 52;
        v24.m128_f32[2] = v18;
        v6->m128_u64[0] = _mm_unpacklo_ps(v16, v17).m128_u64[0];
        v6->m128_f32[2] = v18;
        break;
      case 69:
        v13 = 0LL;
        v14 = (char *)v5 - (char *)&v24;
        do
        {
          v24.m128_f32[v13] = *v7 * *(float *)((char *)&v24.m128_f32[v13] + v14);
          ++v13;
        }
        while ( v13 < 4 );
        v15 = v24;
        v6[4].m128_i32[0] = 69;
        *v6 = v15;
        break;
      case 104:
        v10 = _mm_shuffle_ps((__m128)*(unsigned int *)v7, (__m128)*(unsigned int *)v7, 0);
        v11 = v10;
        v12 = _mm_mul_ps(*v5, v10);
        v11.m128_f32[0] = v10.m128_f32[0] * v5[1].m128_f32[0];
        v10.m128_f32[0] = v10.m128_f32[0] * v5[1].m128_f32[1];
        v6[4].m128_i32[0] = 104;
        *v6 = v12;
        v6[1].m128_u64[0] = _mm_unpacklo_ps(v11, v10).m128_u64[0];
        v24 = v12;
        break;
      case 265:
        v9 = (__m128 *)D2DMatrix::operator*(v5, v25);
        v6[4].m128_i32[0] = 265;
        *v6 = *v9;
        v6[1] = v9[1];
        v6[2] = v9[2];
        v6[3] = v9[3];
        break;
      default:
        v23 = 2895;
        goto LABEL_3;
    }
    v6[4].m128_i8[4] = 1;
    --*((_DWORD *)this + 4);
    return v2;
  }
  v23 = 2797;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v23);
  return v2;
}
