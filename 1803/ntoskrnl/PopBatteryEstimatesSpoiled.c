/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x140763BD8
 * Callers:
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 *     PopEstimateChargeTime @ 0x1407644D4 (PopEstimateChargeTime.c)
 * Callees:
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 */

char PopBatteryEstimatesSpoiled()
{
  char v0; // bl

  if ( (unsigned __int64)PopEstimateSpoiledUntilTime < MEMORY[0xFFFFF78000000008] )
    return 0;
  v0 = 1;
  DbgPrintEx(0x92u, 3u, "Battery estimate suppressed\n");
  return v0;
}
