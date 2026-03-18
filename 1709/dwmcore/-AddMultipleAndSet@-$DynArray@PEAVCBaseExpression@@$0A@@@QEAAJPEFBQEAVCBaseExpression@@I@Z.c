/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x18006B35C
 * Callers:
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x1800A9918 (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 *     ??$SetExpressionArray@UMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@PEAI@Z @ 0x18016F308 (--$SetExpressionArray@UMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V-$DynArrayIANoCtor@PEA.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CBaseExpression *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  int v6; // ebx
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h]

  v9 = a3;
  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( a3 > *(_DWORD *)(a1 + 20) )
  {
    v8 = a2;
    v6 = DynArrayImpl<0>::Grow(a1, 8u, 1, 0, (unsigned __int64 *)&v8);
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC0u);
    else
      *(_QWORD *)(*(_QWORD *)a1 + (unsigned int)(8 * (*(_DWORD *)(a1 + 24))++)) = *v8;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v4) = *a2;
    *(_DWORD *)(a1 + 24) = a3;
  }
  return (unsigned int)v6;
}
