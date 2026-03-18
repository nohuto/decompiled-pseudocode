/*
 * XREFs of ?GreaterThan@CExpressionValueStack@@QEAAJXZ @ 0x18001F38C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::GreaterThan(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // eax
  float v7; // xmm0_4
  bool v8; // cf
  bool v9; // zf
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v11 = 2013;
LABEL_8:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v11);
    return v2;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = 9LL * (v1 - 2);
  v5 = 9LL * (v1 - 1);
  v6 = *(_DWORD *)(v3 + 8 * v4 + 64);
  if ( v6 != *(_DWORD *)(v3 + 8 * v5 + 64) )
  {
    v11 = 2042;
    goto LABEL_8;
  }
  if ( v6 != 18 )
  {
    v11 = 2062;
    goto LABEL_8;
  }
  v7 = *(float *)(v3 + 8 * v4);
  v8 = v7 < *(float *)(v3 + 8 * v5);
  v9 = v7 == *(float *)(v3 + 8 * v5);
  *(_DWORD *)(v3 + 8 * v4 + 64) = 17;
  *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
  *(_BYTE *)(v3 + 8 * v4) = !v8 && !v9;
  --*((_DWORD *)this + 4);
  return v2;
}
