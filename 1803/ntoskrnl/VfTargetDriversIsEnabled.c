/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140821DA0
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x1405F6E8C (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x14081DEB8 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140820C64 (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x140825800 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x14082B8DC (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x14082BD30 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14082BE80 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14082BFA0 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140821CB8 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
