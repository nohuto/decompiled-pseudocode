/*
 * XREFs of PpmPerfControlActionCallback @ 0x140277ED0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 */

__int64 PpmPerfControlActionCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
