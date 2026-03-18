/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1C0075190
 * Callers:
 *     ACPIBuildPdo @ 0x1C000BBF0 (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C00150E0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIInitResetDeviceExtension @ 0x1C0028D74 (ACPIInitResetDeviceExtension.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00751FC (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1C0094020 (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *P)
{
  if ( P[128] )
    ArbDeleteArbiterInstance(P + 136);
  ExFreePoolWithTag(P, 0);
}
