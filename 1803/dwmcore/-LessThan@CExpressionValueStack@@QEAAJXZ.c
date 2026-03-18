/*
 * XREFs of ?LessThan@CExpressionValueStack@@QEAAJXZ @ 0x1801B9030
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::LessThan(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ecx
  bool v7; // cf
  bool v8; // zf
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v3 = 0;
    v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
    v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
    v6 = *(_DWORD *)(v4 + 72);
    if ( v6 == *(_DWORD *)(v5 + 72) )
    {
      if ( v6 == 18 )
      {
        v7 = *(float *)v5 < *(float *)v4;
        v8 = *(float *)v5 == *(float *)v4;
        *(_DWORD *)(v4 + 72) = 17;
        *(_BYTE *)(v4 + 76) = 1;
        *(_BYTE *)v4 = !v7 && !v8;
        --*((_DWORD *)this + 4);
        return v3;
      }
      v10 = 1850;
    }
    else
    {
      v10 = 1830;
    }
  }
  else
  {
    v10 = 1802;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v10);
  return v3;
}
