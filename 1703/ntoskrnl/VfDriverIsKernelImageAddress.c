/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x1407672E0
 * Callers:
 *     VfPendingShouldForce @ 0x140771D14 (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x140774D80 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x1407767AC (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
