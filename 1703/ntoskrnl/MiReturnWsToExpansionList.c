/*
 * XREFs of MiReturnWsToExpansionList @ 0x1400646C4
 * Callers:
 *     MmInSwapProcess @ 0x1400411F0 (MmInSwapProcess.c)
 *     MiAllowWorkingSetExpansion @ 0x140064644 (MiAllowWorkingSetExpansion.c)
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 *     MiEmptyTargetedWorkingSet @ 0x140214EA0 (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiReturnWsToExpansionList(__int64 a1, int a2)
{
  __int64 v3; // rcx
  _QWORD *result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx

  v3 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172));
  result = (_QWORD *)(a1 + 24);
  if ( a2 )
  {
    v8 = (_QWORD *)(v3 + 5552);
    v9 = *(_QWORD *)(v3 + 5552);
    if ( *(_QWORD **)(v9 + 8) != v8 )
      __fastfail(3u);
    *result = v9;
    *(_QWORD *)(a1 + 32) = v8;
    *(_QWORD *)(v9 + 8) = result;
    *v8 = result;
  }
  else
  {
    v5 = v3 + 5552;
    v6 = *(_QWORD **)(v5 + 8);
    if ( *v6 != v5 )
      __fastfail(3u);
    *result = v5;
    *(_QWORD *)(a1 + 32) = v6;
    *v6 = result;
    *(_QWORD *)(v5 + 8) = result;
  }
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 )
    return (_QWORD *)KeSignalGate(v7, 1);
  return result;
}
