/*
 * XREFs of ACPIThermalLoop @ 0x1C0024074
 * Callers:
 *     ACPIThermalComplete @ 0x1C00237E0 (ACPIThermalComplete.c)
 *     ACPIThermalTMPCallback @ 0x1C0023800 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x1C002408C (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x1C0024810 (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C0092A10 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C002408C (ACPIThermalLoopEx.c)
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
