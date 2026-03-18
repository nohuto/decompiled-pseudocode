/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140774E6C
 * Callers:
 *     ViIrpCheckKernelAddressForIrp @ 0x14076EEEC (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140771D14 (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x1407767AC (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x14077C568 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x14077C990 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14077CAE0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14077CC00 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140774D80 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
