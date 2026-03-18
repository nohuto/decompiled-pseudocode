/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00110F0
 * Callers:
 *     VidSchCreateContext @ 0x1C0072270 (VidSchCreateContext.c)
 *     VidSchGetNodeOrdinal @ 0x1C0072874 (VidSchGetNodeOrdinal.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00B3568 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00B37B8 (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00B4810 (VidSchInitializeComponentPowerManagement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 64);
}
