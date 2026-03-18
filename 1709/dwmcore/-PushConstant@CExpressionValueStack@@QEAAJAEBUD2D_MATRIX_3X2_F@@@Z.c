/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180186540
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x1800A9724 (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2D_MATRIX_3X2_F *a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v4 = CExpressionValueStack::CheckAvailableStackSpace(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x28Cu);
  }
  else
  {
    ++*((_DWORD *)this + 4);
    v6 = *((_QWORD *)this + 3);
    v7 = 9LL * (unsigned int)(*((_DWORD *)this + 4) - 1);
    *(_DWORD *)(v6 + 8 * v7 + 64) = 104;
    *(_OWORD *)(v6 + 8 * v7) = *(_OWORD *)&a2->m11;
    *(_QWORD *)(v6 + 8 * v7 + 16) = *(_QWORD *)&a2->m[2][0];
    *(_BYTE *)(v6 + 8 * v7 + 68) = 1;
  }
  return v5;
}
