/*
 * XREFs of KiForegroundTimerCallback @ 0x1400E34F0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140371448, 0LL, 0LL, 0LL, 0);
}
