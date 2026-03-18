/*
 * XREFs of KiForegroundTimerCallback @ 0x14002F480
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140356948, 0);
}
