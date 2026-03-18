/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0012370
 * Callers:
 *     VidSchGetNodeOrdinal @ 0x1C00561F4 (VidSchGetNodeOrdinal.c)
 *     VidSchCreateContext @ 0x1C00787C0 (VidSchCreateContext.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00BBF68 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00BC1C0 (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00BD3C0 (VidSchInitializeComponentPowerManagement.c)
 *     VidSchCreateHwContext @ 0x1C00BE8F0 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 68);
}
