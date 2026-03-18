/*
 * XREFs of VfTargetDriversIsEnabled @ 0x1407B6C28
 * Callers:
 *     ViIrpCheckKernelAddressForIrp @ 0x1407B0D0C (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x1407B3AB4 (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x1407B85A8 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x1407BE490 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x1407BE8D0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1407BEA20 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1407BEB40 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1407B6B3C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
