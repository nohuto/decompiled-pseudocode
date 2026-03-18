/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x1801BB630
 * Callers:
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180052120 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x1802052F8 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  unsigned int v3; // edi
  __int64 v4; // r10
  __m128 *v5; // r8
  __m128 *v6; // r9
  __int64 v7; // rbx
  __int32 v8; // eax
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __m128 v11; // xmm3
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __int64 i; // rax
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  unsigned int v23; // [rsp+28h] [rbp-29h]
  __m128 v24; // [rsp+38h] [rbp-19h]
  _BYTE v25[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
    v5 = (__m128 *)v4;
    v6 = (__m128 *)(*((_QWORD *)this + 3) + 80LL * (v1 - 1));
    v7 = v4;
    if ( v6[4].m128_i32[2] != 18 )
    {
      if ( *(_DWORD *)(v4 + 72) != 18 )
      {
        v23 = 2739;
        goto LABEL_3;
      }
      v5 = v6;
      v6 = (__m128 *)v4;
    }
    v8 = v5[4].m128_i32[2];
    v3 = 0;
    switch ( v8 )
    {
      case 18:
        v21 = v6->m128_f32[0] * v5->m128_f32[0];
        *(_DWORD *)(v4 + 72) = 18;
        *(float *)v4 = v21;
        break;
      case 35:
        v19 = v6->m128_f32[0] * v5->m128_f32[1];
        v20 = v6->m128_f32[0] * v5->m128_f32[0];
        *(_DWORD *)(v4 + 72) = 35;
        *(float *)(v4 + 4) = v19;
        *(float *)v4 = v20;
        break;
      case 52:
        v16 = (__m128)v6->m128_u32[0];
        v17 = v16;
        v18 = v16.m128_f32[0] * v5->m128_f32[2];
        v16.m128_f32[0] = v16.m128_f32[0] * v5->m128_f32[0];
        v17.m128_f32[0] = v17.m128_f32[0] * v5->m128_f32[1];
        *(_DWORD *)(v4 + 72) = 52;
        v24.m128_f32[2] = v18;
        *(_QWORD *)v4 = _mm_unpacklo_ps(v16, v17).m128_u64[0];
        *(float *)(v4 + 8) = v18;
        break;
      case 69:
        for ( i = 0LL; i < 4; ++i )
          v24.m128_f32[i] = v6->m128_f32[0] * v5->m128_f32[i];
        v15 = v24;
        *(_DWORD *)(v4 + 72) = 69;
        *(__m128 *)v4 = v15;
        break;
      case 104:
        v11 = _mm_shuffle_ps((__m128)v6->m128_u32[0], (__m128)v6->m128_u32[0], 0);
        v12 = v11;
        v13 = _mm_mul_ps(*v5, v11);
        v12.m128_f32[0] = v11.m128_f32[0] * v5[1].m128_f32[0];
        v11.m128_f32[0] = v11.m128_f32[0] * v5[1].m128_f32[1];
        *(_DWORD *)(v4 + 72) = 104;
        *(__m128 *)v4 = v13;
        *(_QWORD *)(v4 + 16) = _mm_unpacklo_ps(v12, v11).m128_u64[0];
        v24 = v13;
        break;
      case 265:
        v9 = (_OWORD *)D2DMatrix::operator*(v5, v25);
        *(_DWORD *)(v7 + 72) = 265;
        *(_OWORD *)v7 = *v9;
        *(_OWORD *)(v7 + 16) = v9[1];
        *(_OWORD *)(v7 + 32) = v9[2];
        v10 = v9[3];
        *(_BYTE *)(v7 + 76) = 1;
        *(_OWORD *)(v7 + 48) = v10;
LABEL_24:
        --*((_DWORD *)this + 4);
        return v3;
      default:
        v23 = 2802;
        goto LABEL_3;
    }
    *(_BYTE *)(v4 + 76) = 1;
    goto LABEL_24;
  }
  v23 = 2705;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v23);
  return v3;
}
