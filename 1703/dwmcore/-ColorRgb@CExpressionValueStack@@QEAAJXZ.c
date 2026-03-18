/*
 * XREFs of ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x18017CF94
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorRgb(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  float v4; // xmm0_4
  unsigned int v6; // [rsp+20h] [rbp-28h]
  float v7[6]; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 4 )
  {
    v6 = 5586;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v6);
    return v2;
  }
  v3 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v3 + 72LL * (v1 - 4) + 64) != 18
    || *(_DWORD *)(v3 + 72LL * (v1 - 3) + 64) != 18
    || *(_DWORD *)(v3 + 72LL * (v1 - 2) + 64) != 18
    || *(_DWORD *)(v3 + 72LL * (v1 - 1) + 64) != 18 )
  {
    v6 = 5605;
    goto LABEL_9;
  }
  v7[0] = fmaxf(fminf(*(float *)(v3 + 72LL * (v1 - 3)), 255.0), 0.0) / 255.0;
  v4 = fminf(*(float *)(v3 + 72LL * (v1 - 2)), 255.0);
  v7[2] = fmaxf(fminf(*(float *)(v3 + 72LL * (v1 - 1)), 255.0), 0.0) / 255.0;
  *(_DWORD *)(v3 + 72LL * (v1 - 4) + 64) = 70;
  *(_BYTE *)(v3 + 72LL * (v1 - 4) + 68) = 1;
  v7[1] = fmaxf(v4, 0.0) / 255.0;
  v7[3] = fmaxf(fminf(*(float *)(v3 + 72LL * (v1 - 4)), 255.0), 0.0) / 255.0;
  *(_OWORD *)(v3 + 72LL * (v1 - 4)) = *(_OWORD *)v7;
  *((_DWORD *)this + 4) -= 3;
  return v2;
}
