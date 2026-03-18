/*
 * XREFs of ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x180185DD8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     fmodf_0 @ 0x1800C5D68 (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Modulus(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // eax
  float v8; // xmm1_4
  float v9; // xmm0_4
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = 9LL * (v1 - 2);
    v6 = 9LL * (v1 - 1);
    v7 = *(_DWORD *)(v4 + 8 * v5 + 64);
    if ( v7 == *(_DWORD *)(v4 + 8 * v6 + 64) )
    {
      if ( v7 == 18 )
      {
        v8 = *(float *)(v4 + 8 * v6);
        if ( v8 > 0.0 )
        {
          v9 = *(float *)(v4 + 8 * v5);
          *(_DWORD *)(v4 + 8 * v5 + 64) = 18;
          *(float *)(v4 + 8 * v5) = fmodf_0(v9, v8);
          *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
          --*((_DWORD *)this + 4);
          return v2;
        }
        v11 = 1549;
      }
      else
      {
        v11 = 1565;
      }
    }
    else
    {
      v11 = 1534;
    }
  }
  else
  {
    v11 = 1510;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v11);
  return v2;
}
