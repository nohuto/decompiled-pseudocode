/*
 * XREFs of PpmPerfControlActionCallback @ 0x14022D430
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 */

__int64 PpmPerfControlActionCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
