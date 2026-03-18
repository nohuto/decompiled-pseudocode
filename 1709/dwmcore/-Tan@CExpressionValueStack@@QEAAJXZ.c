/*
 * XREFs of ?Tan@CExpressionValueStack@@QEAAJXZ @ 0x180187040
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     tanf_0 @ 0x1800C5DB6 (tanf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Tan(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  float v6; // xmm6_4
  unsigned int v8; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v8 = 4569;
LABEL_8:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v8);
    return v2;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = (unsigned int)(v1 - 1);
  v5 = 9 * v4;
  if ( *(_DWORD *)(v3 + 72 * v4 + 64) != 18 )
  {
    v8 = 4611;
    goto LABEL_8;
  }
  v6 = tanf_0(*(float *)(v3 + 72 * v4));
  if ( _isnan(v6) )
  {
    v8 = 4596;
    goto LABEL_8;
  }
  *(float *)(v3 + 8 * v5) = v6;
  *(_DWORD *)(v3 + 8 * v5 + 64) = 18;
  *(_BYTE *)(v3 + 8 * v5 + 68) = 1;
  return v2;
}
