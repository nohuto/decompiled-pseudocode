/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJXZ @ 0x1800A9560
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  __m128 v5; // xmm3
  float v6; // xmm2_4
  __m128 v7; // xmm1
  unsigned int v9; // [rsp+20h] [rbp-38h]
  float v10[6]; // [rsp+30h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v9 = 6149;
LABEL_7:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v9);
    return v2;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = 9LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)(v3 + 8 * v4 + 64) != 35 )
  {
    v9 = 6162;
    goto LABEL_7;
  }
  v5 = 0LL;
  v6 = *(float *)(v3 + 8 * v4 + 4);
  v7 = 0LL;
  v10[2] = 0.0;
  *(_QWORD *)v10 = *(unsigned int *)(v3 + 8 * v4);
  *(_DWORD *)(v3 + 8 * v4 + 64) = 104;
  v10[3] = v6;
  *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
  v7.m128_f32[0] = 0.0 - (float)(v10[0] * 0.0);
  v5.m128_f32[0] = 0.0 - (float)(v6 * 0.0);
  *(_OWORD *)(v3 + 8 * v4) = *(_OWORD *)v10;
  *(_QWORD *)(v3 + 8 * v4 + 16) = _mm_unpacklo_ps(v7, v5).m128_u64[0];
  return v2;
}
