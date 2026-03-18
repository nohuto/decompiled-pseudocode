/*
 * XREFs of ACPIThermalTMPCallback @ 0x1C0020DA0
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0021610 (ACPIThermalLoopEx.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ACPIThermalUpdateTemperature @ 0x1C0021DA4 (ACPIThermalUpdateTemperature.c)
 */

__int64 __fastcall ACPIThermalTMPCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 >= 0 )
  {
    ACPIThermalUpdateTemperature(a4, *(unsigned int *)(a3 + 16));
    dword_1C00776F8 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  return ACPIThermalLoop(a4, 0x40000000LL);
}
