/*
 * XREFs of ?Cos@CExpressionValueStack@@QEAAJXZ @ 0x18018416C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     cosf_0 @ 0x1800C5D4A (cosf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Cos(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  float v6; // xmm0_4
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = (unsigned int)(v1 - 1);
    v5 = 9 * v4;
    if ( *(_DWORD *)(v3 + 72 * v4 + 64) == 18 )
    {
      v6 = *(float *)(v3 + 72 * v4);
      *(_DWORD *)(v3 + 72 * v4 + 64) = 18;
      *(float *)(v3 + 72 * v4) = cosf_0(v6);
      *(_BYTE *)(v3 + 8 * v5 + 68) = 1;
      return v2;
    }
    v8 = 4459;
  }
  else
  {
    v8 = 4431;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v8);
  return v2;
}
