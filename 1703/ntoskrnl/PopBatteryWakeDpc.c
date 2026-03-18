/*
 * XREFs of PopBatteryWakeDpc @ 0x14013DFD0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

__int64 PopBatteryWakeDpc()
{
  byte_14034B4A0 = 0;
  KeSetEvent(&stru_14034B488, 0, 0);
  _InterlockedExchange(&dword_14034B400, 0);
  return PopBatteryQueueWork(1LL);
}
