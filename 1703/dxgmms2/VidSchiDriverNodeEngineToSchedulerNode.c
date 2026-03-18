/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00100E0
 * Callers:
 *     VidSchCreateContext @ 0x1C006BDA0 (VidSchCreateContext.c)
 *     VidSchGetNodeOrdinal @ 0x1C006D18C (VidSchGetNodeOrdinal.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00AAC54 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00AAEA4 (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00ABE50 (VidSchInitializeComponentPowerManagement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 64);
}
