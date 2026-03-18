/*
 * XREFs of ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJXZ @ 0x1800A9330
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromTranslation(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v8 = 6040;
LABEL_7:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v8);
    return v2;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = 9LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)(v3 + 8 * v4 + 64) != 35 )
  {
    v8 = 6053;
    goto LABEL_7;
  }
  v5 = (__m128)*(unsigned int *)(v3 + 8 * v4);
  v6 = (__m128)*(unsigned int *)(v3 + 8 * v4 + 4);
  *(_DWORD *)(v3 + 8 * v4 + 64) = 104;
  *(_OWORD *)(v3 + 8 * v4) = _xmm;
  *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
  *(_QWORD *)(v3 + 8 * v4 + 16) = _mm_unpacklo_ps(v5, v6).m128_u64[0];
  return v2;
}
