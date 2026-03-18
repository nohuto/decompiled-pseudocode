/*
 * XREFs of PpmPerfControlActionCallback @ 0x140240870
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 */

__int64 PpmPerfControlActionCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
