/*
 * XREFs of MiGetAggregationVm @ 0x14022A24C
 * Callers:
 *     MiGetAggregateWorkingSetSize @ 0x14022A224 (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

void *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 192) & 7) == 2 )
    return &unk_140389800;
  else
    return 0LL;
}
