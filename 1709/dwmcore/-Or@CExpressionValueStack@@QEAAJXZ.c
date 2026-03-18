/*
 * XREFs of ?Or@CExpressionValueStack@@QEAAJXZ @ 0x1801861F4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Or(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // eax
  char v7; // al
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v9 = 2302;
LABEL_3:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v9);
    return v2;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = 9LL * (v1 - 2);
  v5 = 9LL * (v1 - 1);
  v6 = *(_DWORD *)(v3 + 8 * v4 + 64);
  if ( v6 != *(_DWORD *)(v3 + 8 * v5 + 64) )
  {
    v9 = 2331;
    goto LABEL_3;
  }
  if ( v6 != 17 )
  {
    v9 = 2350;
    goto LABEL_3;
  }
  if ( *(_BYTE *)(v3 + 8 * v4) || (v7 = 0, *(_BYTE *)(v3 + 8 * v5)) )
    v7 = 1;
  *(_DWORD *)(v3 + 8 * v4 + 64) = 17;
  *(_BYTE *)(v3 + 8 * v4) = v7;
  *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
  --*((_DWORD *)this + 4);
  return v2;
}
