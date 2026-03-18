/*
 * XREFs of ?Vector2Dot@CExpressionValueStack@@QEAAJXZ @ 0x1801BC010
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector2Dot(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  float v4; // xmm3_4
  float v5; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm2_4
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v3 = *((_QWORD *)this + 3);
    if ( *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) == 35 )
    {
      if ( *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) == 35 )
      {
        v4 = *(float *)(v3 + 80LL * (v1 - 2));
        v5 = *(float *)(v3 + 80LL * (v1 - 1));
        v6 = *(float *)(v3 + 80LL * (v1 - 1) + 4);
        *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) = 18;
        v7 = v6 * *(float *)(v3 + 80LL * (v1 - 2) + 4);
        *(_BYTE *)(v3 + 80LL * (v1 - 2) + 76) = 1;
        *(float *)(v3 + 80LL * (v1 - 2)) = (float)(v4 * v5) + v7;
        --*((_DWORD *)this + 4);
        return 0;
      }
      v9 = 7304;
    }
    else
    {
      v9 = 7303;
    }
  }
  else
  {
    v9 = 7297;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v9);
  return v2;
}
