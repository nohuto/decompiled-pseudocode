/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x180078ED0
 * Callers:
 *     ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800548F0 (-RegisterSourcesForOwner@CExpression@@UEAAJXZ.c)
 *     ??$SetExpressionArray@UMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@PEAI@Z @ 0x1801973F8 (--$SetExpressionArray@UMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V-$DynArrayIANoCtor@PEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<CBaseExpression *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // r8d
  int v5; // ebx
  _QWORD *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v4 = v2 + 1;
  v5 = v2 + 1 < v2 ? 0x80070216 : 0;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    v7 = a2;
    v5 = DynArrayImpl<0>::Grow(a1, 8, 1, 0, (__int64)&v7);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC0u);
    else
      *(_QWORD *)(*(_QWORD *)a1 + (unsigned int)(8 * (*(_DWORD *)(a1 + 24))++)) = *v7;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * v2) = *a2;
    *(_DWORD *)(a1 + 24) = v4;
  }
  return (unsigned int)v5;
}
