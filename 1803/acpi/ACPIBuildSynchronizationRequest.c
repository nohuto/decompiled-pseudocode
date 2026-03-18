/*
 * XREFs of ACPIBuildSynchronizationRequest @ 0x1C00117A4
 * Callers:
 *     ACPIDockIrpStartDevice @ 0x1C0073C90 (ACPIDockIrpStartDevice.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00117C0 (ACPIBuildSynchronizationRequestInternal.c)
 */

__int64 __fastcall ACPIBuildSynchronizationRequest(int a1, int a2, int a3, int a4, char a5)
{
  return ACPIBuildSynchronizationRequestInternal(a1, a2, a3, a4, a5);
}
