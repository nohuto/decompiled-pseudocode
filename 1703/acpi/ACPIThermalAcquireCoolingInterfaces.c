/*
 * XREFs of ACPIThermalAcquireCoolingInterfaces @ 0x1C0016B14
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0007104 (ACPIInitStartDevice.c)
 *     ACPIProcessorStartDevice @ 0x1C0022DD0 (ACPIProcessorStartDevice.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C009D3C0 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C009EDC0 (ACPIFanStartDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00A3C90 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C001DCE8 (ACPIThermalQueryCoolingInterfaces.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0028F58 (ACPIThermalAssocaiteConstraint.c)
 */

__int64 __fastcall ACPIThermalAcquireCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rdi
  KIRQL v4; // r14
  __int64 *v5; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  *(_BYTE *)(a1 + 616) = 1;
  v3 = (__int64 *)AcpiThermalUnclaimedConstraintList;
  v4 = v2;
  while ( v3 != &AcpiThermalUnclaimedConstraintList )
  {
    v5 = v3 - 2;
    v3 = (__int64 *)*v3;
    AMLIGetNameSpaceObject(v5 + 7);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v4);
  return 3221225659LL;
}
