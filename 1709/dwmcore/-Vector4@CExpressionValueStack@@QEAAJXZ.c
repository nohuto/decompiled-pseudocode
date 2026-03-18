/*
 * XREFs of ?Vector4@CExpressionValueStack@@QEAAJXZ @ 0x180187388
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int v5; // [rsp+20h] [rbp-28h]
  __int128 v6; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 4 )
  {
    v5 = 5543;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v5);
    return v2;
  }
  v3 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v3 + 72LL * (v1 - 4) + 64) != 18
    || *(_DWORD *)(v3 + 72LL * (v1 - 3) + 64) != 18
    || *(_DWORD *)(v3 + 72LL * (v1 - 2) + 64) != 18
    || *(_DWORD *)(v3 + 72LL * (v1 - 1) + 64) != 18 )
  {
    v5 = 5562;
    goto LABEL_9;
  }
  LODWORD(v6) = *(_DWORD *)(v3 + 72LL * (v1 - 4));
  DWORD1(v6) = *(_DWORD *)(v3 + 72LL * (v1 - 3));
  DWORD2(v6) = *(_DWORD *)(v3 + 72LL * (v1 - 2));
  HIDWORD(v6) = *(_DWORD *)(v3 + 72LL * (v1 - 1));
  *(_DWORD *)(v3 + 72LL * (v1 - 4) + 64) = 69;
  *(_BYTE *)(v3 + 72LL * (v1 - 4) + 68) = 1;
  *(_OWORD *)(v3 + 72LL * (v1 - 4)) = v6;
  *((_DWORD *)this + 4) -= 3;
  return v2;
}
