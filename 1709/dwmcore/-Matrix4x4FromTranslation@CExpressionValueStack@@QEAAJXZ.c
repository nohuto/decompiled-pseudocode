/*
 * XREFs of ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJXZ @ 0x1800A9390
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromTranslation(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v6; // [rsp+20h] [rbp-60h]
  __int128 v7; // [rsp+60h] [rbp-20h]
  __int128 v8; // [rsp+70h] [rbp-10h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v6 = 6093;
LABEL_7:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v6);
    return v2;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = (unsigned int)(v1 - 1);
  if ( *(_DWORD *)(v3 + 72 * v4 + 64) != 52 )
  {
    v6 = 6106;
    goto LABEL_7;
  }
  *(_QWORD *)&v7 = 0LL;
  *(_QWORD *)&v8 = *(_QWORD *)(v3 + 72 * v4);
  DWORD2(v8) = *(_DWORD *)(v3 + 72 * v4 + 8);
  *(_OWORD *)(v3 + 72 * v4) = 0x3F800000uLL;
  *(_OWORD *)(v3 + 72 * v4 + 16) = 0x3F80000000000000uLL;
  *((_QWORD *)&v7 + 1) = 1065353216LL;
  HIDWORD(v8) = 1065353216;
  *(_OWORD *)(v3 + 72 * v4 + 32) = v7;
  *(_DWORD *)(v3 + 72 * v4 + 64) = 265;
  *(_OWORD *)(v3 + 72 * v4 + 48) = v8;
  *(_BYTE *)(v3 + 72 * v4 + 68) = 1;
  return v2;
}
