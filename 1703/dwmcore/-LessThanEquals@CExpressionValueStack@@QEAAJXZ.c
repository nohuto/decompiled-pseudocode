/*
 * XREFs of ?LessThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x18017E64C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::LessThanEquals(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // eax
  bool v7; // cf
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = 9LL * (v1 - 2);
    v5 = 9LL * (v1 - 1);
    v6 = *(_DWORD *)(v3 + 8 * v4 + 64);
    if ( v6 == *(_DWORD *)(v3 + 8 * v5 + 64) )
    {
      if ( v6 == 18 )
      {
        v7 = *(float *)(v3 + 8 * v5) < *(float *)(v3 + 8 * v4);
        *(_DWORD *)(v3 + 8 * v4 + 64) = 17;
        *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
        *(_BYTE *)(v3 + 8 * v4) = !v7;
        --*((_DWORD *)this + 4);
        return v2;
      }
      v9 = 1974;
    }
    else
    {
      v9 = 1954;
    }
  }
  else
  {
    v9 = 1925;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
  return v2;
}
