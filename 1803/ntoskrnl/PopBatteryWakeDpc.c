/*
 * XREFs of PopBatteryWakeDpc @ 0x140156240
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x14016CA8C (PopBatteryQueueWork.c)
 */

__int64 PopBatteryWakeDpc()
{
  byte_1403AA380 = 0;
  KeSetEvent(&stru_1403AA368, 0, 0);
  _InterlockedExchange(&dword_1403AA2E0, 0);
  return PopBatteryQueueWork(1LL);
}
