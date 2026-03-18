/*
 * XREFs of ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x1801838A0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800A12A0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x18011D914 (-EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x18007E80C (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall DynArray<CExpressionValue,1>::AddAndSet(__int64 a1, unsigned int a2, __int64 a3)
{
  signed int v5; // eax
  unsigned int v6; // ebx
  _OWORD *v7; // rcx
  __int64 v8; // rax
  _OWORD *v10; // [rsp+58h] [rbp+20h] BYREF

  v5 = DynArrayImpl<1>::AddMultiple(a1, 0x48u, a2, &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xE5u);
  }
  else if ( a2 )
  {
    v7 = v10;
    v8 = a2;
    do
    {
      *v7 = *(_OWORD *)a3;
      v7 = (_OWORD *)((char *)v7 + 72);
      *(_OWORD *)((char *)v7 - 56) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)((char *)v7 - 40) = *(_OWORD *)(a3 + 32);
      *(_OWORD *)((char *)v7 - 24) = *(_OWORD *)(a3 + 48);
      *((_QWORD *)v7 - 1) = *(_QWORD *)(a3 + 64);
      --v8;
    }
    while ( v8 );
  }
  return v6;
}
