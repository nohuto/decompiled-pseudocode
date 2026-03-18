/*
 * XREFs of MiReturnWsToExpansionList @ 0x14006A984
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 *     MiAllowWorkingSetExpansion @ 0x14006A904 (MiAllowWorkingSetExpansion.c)
 *     KiInSwapProcesses @ 0x1400EB0B0 (KiInSwapProcesses.c)
 *     MiEmptyTargetedWorkingSet @ 0x1402597EC (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 */

_QWORD *__fastcall MiReturnWsToExpansionList(__int64 a1, int a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *result; // rax
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 24);
  v3 = (_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 6776LL);
  if ( a2 )
  {
    result = (_QWORD *)*v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
      __fastfail(3u);
    *v2 = result;
    *(_QWORD *)(a1 + 32) = v3;
    result[1] = v2;
    *v3 = v2;
  }
  else
  {
    result = *(_QWORD **)(*(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 6784LL);
    if ( (_QWORD *)*result != v3 )
      __fastfail(3u);
    *v2 = v3;
    *(_QWORD *)(a1 + 32) = result;
    *result = v2;
    v3[1] = v2;
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
    return (_QWORD *)KeSignalGate(v5, 1LL);
  return result;
}
