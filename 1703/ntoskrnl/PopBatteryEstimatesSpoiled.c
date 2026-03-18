/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x1406CA52C
 * Callers:
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 *     PopEstimateChargeTime @ 0x1406CADB0 (PopEstimateChargeTime.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
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
