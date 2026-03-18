/*
 * XREFs of MiGetAggregationVm @ 0x14021EEB8
 * Callers:
 *     MiGetAggregateWorkingSetSize @ 0x14021EE90 (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

void *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 192) & 7) == 2 )
    return &unk_14036D540;
  else
    return 0LL;
}
