/*
 * XREFs of ACPIThermalLoop @ 0x1C003CE74
 * Callers:
 *     ACPIThermalComplete @ 0x1C003BF70 (ACPIThermalComplete.c)
 *     ACPIThermalLoopEx @ 0x1C003CE8C (ACPIThermalLoopEx.c)
 *     ACPIThermalTMPCallback @ 0x1C003DDA0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalUpdateTemperature @ 0x1C003DF1C (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C0089A40 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C003CE8C (ACPIThermalLoopEx.c)
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
