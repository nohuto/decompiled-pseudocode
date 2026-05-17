/*
 * XREFs of RtlpDynamicFunctionTableTreeFindRoutine @ 0x180073EAC
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180073C20 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpDynamicFunctionTableTreeFindRoutine(unsigned __int64 a1, __int64 a2)
{
  if ( a1 < *(_QWORD *)(a2 - 56) )
    return 0xFFFFFFFFLL;
  else
    return a1 >= *(_QWORD *)(a2 - 48);
}
