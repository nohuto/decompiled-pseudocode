/*
 * XREFs of ?Vector3Dot@CExpressionValueStack@@QEAAJXZ @ 0x1801BC4B0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Dot(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  float v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  float v10; // [rsp+48h] [rbp-8h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = v1 - 1;
    if ( *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) == 52 )
    {
      if ( *(_DWORD *)(v3 + 80 * v4 + 72) == 52 )
      {
        v9 = *(_QWORD *)(v3 + 80LL * (v1 - 2));
        v8 = *(_QWORD *)(v3 + 80 * v4);
        v10 = *(float *)(v3 + 80LL * (v1 - 2) + 8);
        v5 = *(float *)(v3 + 80 * v4 + 8);
        *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) = 18;
        *(_BYTE *)(v3 + 80LL * (v1 - 2) + 76) = 1;
        *(float *)(v3 + 80LL * (v1 - 2)) = (float)((float)(*((float *)&v9 + 1) * *((float *)&v8 + 1))
                                                 + (float)(*(float *)&v8 * *(float *)&v9))
                                         + (float)(v5 * v10);
        --*((_DWORD *)this + 4);
        return 0;
      }
      v7 = 7551;
    }
    else
    {
      v7 = 7550;
    }
  }
  else
  {
    v7 = 7544;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v7);
  return v2;
}
