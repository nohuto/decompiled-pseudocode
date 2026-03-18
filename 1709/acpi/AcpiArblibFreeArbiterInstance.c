/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1C009FA80
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C00228C0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x1C0022C94 (ACPIBuildPdo.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004F564 (ACPIInitResetDeviceExtension.c)
 *     AcpiArblibInitializeArbiter @ 0x1C009FAEC (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1C00A90F0 (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *P)
{
  if ( P[128] )
    ArbDeleteArbiterInstance(P + 136);
  ExFreePoolWithTag(P, 0);
}
