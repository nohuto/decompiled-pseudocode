/*
 * XREFs of ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x18017F0BC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     powf_0 @ 0x1800D53A8 (powf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Pow(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // eax
  float v8; // xmm6_4
  unsigned int v10; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v10 = 4959;
LABEL_10:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v10);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = 9LL * (v1 - 2);
  v6 = 9LL * (v1 - 1);
  v7 = *(_DWORD *)(v4 + 8 * v5 + 64);
  if ( v7 != *(_DWORD *)(v4 + 8 * v6 + 64) )
  {
    v10 = 4983;
    goto LABEL_10;
  }
  if ( v7 != 18 )
  {
    v10 = 5017;
    goto LABEL_10;
  }
  v8 = powf_0(*(float *)(v4 + 8 * v5), *(float *)(v4 + 8 * v6));
  if ( _isnan(v8) )
  {
    v10 = 5003;
    goto LABEL_10;
  }
  *(float *)(v4 + 8 * v5) = v8;
  *(_DWORD *)(v4 + 8 * v5 + 64) = 18;
  *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
  --*((_DWORD *)this + 4);
  return v2;
}
