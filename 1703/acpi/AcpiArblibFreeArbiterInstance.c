/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1C009CAB0
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0006410 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x1C00089D4 (ACPIBuildPdo.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004FC10 (ACPIInitResetDeviceExtension.c)
 *     AcpiArblibInitializeArbiter @ 0x1C009CB1C (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1C00A6650 (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *a1)
{
  if ( a1[128] )
    ArbDeleteArbiterInstance(a1 + 136);
  ExFreePoolWithTag(a1, 0);
}
