/*
 * XREFs of ACPIThermalAcquireCoolingInterfaces @ 0x1C003BA14
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0028FBC (ACPIInitStartDevice.c)
 *     ACPIProcessorStartDevice @ 0x1C0036300 (ACPIProcessorStartDevice.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C0076420 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C007B250 (ACPIFanStartDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C0087530 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C003BD1C (ACPIThermalAssocaiteConstraint.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C003D444 (ACPIThermalQueryCoolingInterfaces.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
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
