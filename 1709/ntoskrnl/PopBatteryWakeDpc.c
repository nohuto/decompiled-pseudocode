/*
 * XREFs of PopBatteryWakeDpc @ 0x1402423D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x14014745C (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  byte_140365A20 = 0;
  KeSetEvent(&stru_140365A08, 0, 0);
  _InterlockedExchange(&dword_140365980, 0);
  PopBatteryQueueWork(1u);
}
