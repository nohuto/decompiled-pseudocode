/*
 * XREFs of ?TimeSpanFrom@CExpressionValueStack@@QEAAJI@Z @ 0x1801870EC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::TimeSpanFrom(CExpressionValueStack *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (unsigned int)(v2 - 1);
    if ( *(_DWORD *)(v4 + 72 * v5 + 64) == 18 )
    {
      *(_DWORD *)(v4 + 72 * v5 + 64) = 42;
      *(_BYTE *)(v4 + 72 * v5 + 68) = 1;
      v3 = 0;
      *(float *)(v4 + 72 * v5) = (float)a2 * *(float *)(v4 + 72 * v5);
      return v3;
    }
    v7 = 6592;
  }
  else
  {
    v7 = 6579;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v7);
  return v3;
}
