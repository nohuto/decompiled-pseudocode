/*
 * XREFs of MiGetAggregationVm @ 0x140264C08
 * Callers:
 *     MiGetAggregateWorkingSetSize @ 0x140264BE0 (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_1403CCDC0;
  else
    return 0LL;
}
