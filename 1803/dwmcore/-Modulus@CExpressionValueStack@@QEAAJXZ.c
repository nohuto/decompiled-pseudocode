/*
 * XREFs of ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x1801BA734
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     fmodf_0 @ 0x1800DD3CB (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Modulus(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  float *v5; // rax
  int v6; // ecx
  float v7; // xmm1_4
  float v8; // xmm0_4
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v3 = 0;
    v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
    v5 = (float *)(*((_QWORD *)this + 3) + 80LL * (v1 - 1));
    v6 = *(_DWORD *)(v4 + 72);
    if ( v6 == *((_DWORD *)v5 + 18) )
    {
      if ( v6 == 18 )
      {
        v7 = *v5;
        if ( *v5 > 0.0 )
        {
          v8 = *(float *)v4;
          *(_DWORD *)(v4 + 72) = 18;
          *(float *)v4 = fmodf_0(v8, v7);
          *(_BYTE *)(v4 + 76) = 1;
          --*((_DWORD *)this + 4);
          return v3;
        }
        v10 = 1508;
      }
      else
      {
        v10 = 1524;
      }
    }
    else
    {
      v10 = 1493;
    }
  }
  else
  {
    v10 = 1470;
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
