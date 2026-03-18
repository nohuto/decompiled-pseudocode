/*
 * XREFs of KiForegroundTimerCallback @ 0x1400399B0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_1403B4648, 0LL, 0LL, 0LL, 0);
}
