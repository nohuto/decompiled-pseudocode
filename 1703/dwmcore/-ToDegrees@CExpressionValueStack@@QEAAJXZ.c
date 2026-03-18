/*
 * XREFs of ?ToDegrees@CExpressionValueStack@@QEAAJXZ @ 0x18017FA6C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ToDegrees(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  float v5; // xmm0_4
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = 9LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)(v3 + 8 * v4 + 64) == 18 )
    {
      v5 = *(float *)(v3 + 8 * v4) * 57.295776;
      *(_DWORD *)(v3 + 8 * v4 + 64) = 18;
      *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
      *(float *)(v3 + 8 * v4) = v5;
      return v2;
    }
    v7 = 5294;
  }
  else
  {
    v7 = 5267;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v7);
  return v2;
}
