/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x1407A8E84
 * Callers:
 *     VfPendingShouldForce @ 0x1407B3AB4 (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x1407B6B3C (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x1407B85A8 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
