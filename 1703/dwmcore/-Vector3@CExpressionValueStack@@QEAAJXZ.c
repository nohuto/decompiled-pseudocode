/*
 * XREFs of ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x180033FC8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v6 = 5452;
    goto LABEL_9;
  }
  v3 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v3 + 72LL * (v1 - 3) + 64) != 18
    || *(_DWORD *)(v3 + 72LL * (v1 - 2) + 64) != 18
    || *(_DWORD *)(v3 + 72LL * (v1 - 1) + 64) != 18 )
  {
    v6 = 5469;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v6);
    return v2;
  }
  v4 = *(_DWORD *)(v3 + 72LL * (v1 - 1));
  *(_QWORD *)(v3 + 72LL * (v1 - 3)) = _mm_unpacklo_ps(
                                        (__m128)*(unsigned int *)(v3 + 72LL * (v1 - 3)),
                                        (__m128)*(unsigned int *)(v3 + 72LL * (v1 - 2))).m128_u64[0];
  *(_DWORD *)(v3 + 72LL * (v1 - 3) + 8) = v4;
  *(_DWORD *)(v3 + 72LL * (v1 - 3) + 64) = 52;
  *(_BYTE *)(v3 + 72LL * (v1 - 3) + 68) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
