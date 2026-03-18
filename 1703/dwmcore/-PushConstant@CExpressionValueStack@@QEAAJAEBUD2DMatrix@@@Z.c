/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x18003393C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x18003390C (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2DMatrix *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int128 v8; // xmm1

  v4 = CExpressionValueStack::CheckAvailableStackSpace(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x28Cu);
  }
  else
  {
    ++*((_DWORD *)this + 4);
    v6 = *((_QWORD *)this + 3);
    v7 = 9LL * (unsigned int)(*((_DWORD *)this + 4) - 1);
    *(_DWORD *)(v6 + 8 * v7 + 64) = 265;
    *(_OWORD *)(v6 + 8 * v7) = *(_OWORD *)a2;
    *(_OWORD *)(v6 + 8 * v7 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v6 + 8 * v7 + 32) = *((_OWORD *)a2 + 2);
    v8 = *((_OWORD *)a2 + 3);
    *(_BYTE *)(v6 + 8 * v7 + 68) = 1;
    *(_OWORD *)(v6 + 8 * v7 + 48) = v8;
  }
  return v5;
}
