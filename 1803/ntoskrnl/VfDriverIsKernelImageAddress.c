/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140815EBC
 * Callers:
 *     VfPendingShouldForce @ 0x140820C64 (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x140821CB8 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x140825800 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
