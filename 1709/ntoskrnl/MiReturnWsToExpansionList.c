/*
 * XREFs of MiReturnWsToExpansionList @ 0x1400147A4
 * Callers:
 *     MiAllowWorkingSetExpansion @ 0x140014724 (MiAllowWorkingSetExpansion.c)
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 *     MmInSwapProcess @ 0x140114710 (MmInSwapProcess.c)
 *     MiEmptyTargetedWorkingSet @ 0x14021D450 (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 */

_QWORD *__fastcall MiReturnWsToExpansionList(__int64 a1, int a2)
{
  __int64 v3; // rcx
  _QWORD *result; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  v3 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172));
  result = (_QWORD *)(a1 + 24);
  if ( a2 )
  {
    v5 = (_QWORD *)(v3 + 5688);
    v6 = *(_QWORD *)(v3 + 5688);
    if ( *(_QWORD **)(v6 + 8) != v5 )
      __fastfail(3u);
    *result = v6;
    *(_QWORD *)(a1 + 32) = v5;
    *(_QWORD *)(v6 + 8) = result;
    *v5 = result;
  }
  else
  {
    v8 = v3 + 5688;
    v9 = *(_QWORD **)(v8 + 8);
    if ( *v9 != v8 )
      __fastfail(3u);
    *result = v8;
    *(_QWORD *)(a1 + 32) = v9;
    *v9 = result;
    *(_QWORD *)(v8 + 8) = result;
  }
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 )
    return (_QWORD *)KeSignalGate(v7, 1LL);
  return result;
}
