/*
 * XREFs of ACPIThermalTMPCallback @ 0x1C003DDA0
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C003CE8C (ACPIThermalLoopEx.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIThermalLoop @ 0x1C003CE74 (ACPIThermalLoop.c)
 *     ACPIThermalUpdateTemperature @ 0x1C003DF1C (ACPIThermalUpdateTemperature.c)
 */

__int64 __fastcall ACPIThermalTMPCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 >= 0 )
  {
    ACPIThermalUpdateTemperature(a4, *(unsigned int *)(a3 + 16));
    dword_1C00677B8 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  return ACPIThermalLoop(a4, 0x40000000LL);
}
