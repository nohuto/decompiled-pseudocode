/*
 * XREFs of ACPIThermalLoop @ 0x1C0021600
 * Callers:
 *     ACPIThermalComplete @ 0x1C0020D80 (ACPIThermalComplete.c)
 *     ACPIThermalTMPCallback @ 0x1C0020DA0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x1C0021610 (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x1C0021DA4 (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C0090A20 (ACPIThermalWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
