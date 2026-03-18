/*
 * XREFs of AMLIGetNameSpaceObject @ 0x1C001BACC
 * Callers:
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0001F68 (ACPIThermalAcquireCoolingInterfaces.c)
 *     LinkNodeCrackPrt @ 0x1C000D438 (LinkNodeCrackPrt.c)
 *     ACPIDeviceRecordDependencies @ 0x1C000EC5C (ACPIDeviceRecordDependencies.c)
 *     AreDependenciesSatisfied @ 0x1C00127D4 (AreDependenciesSatisfied.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0013098 (ACPIEcInitOpRegionHandler.c)
 *     ACPIGpeBuildEventMasks @ 0x1C00136F4 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0014E10 (ACPIBuildDevicePowerNodes.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C001AA2C (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C001B848 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C0023208 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIThermalActivateConstraint @ 0x1C002339C (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0025510 (ACPIThermalGetSensorDevice.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0029B2C (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002AAD4 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C00429B4 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00433C4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C00446FC (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0049F9C (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C004FF00 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0050EBC (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C005120C (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     RegisterOperationRegionHandler @ 0x1C008DA20 (RegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C0091A00 (ACPIRootInitialize.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00A19A0 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00A1C00 (ExternalRequestBiosNameDeviceAssociation.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00A3A64 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AF81C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000CA64 (AMLIGetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObject(_BYTE *Src, __int64 *a2, __int64 *a3, int a4)
{
  size_t v8; // rbx
  _BYTE *PoolWithTag; // rdi
  KIRQL v10; // bl
  unsigned int v11; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, Src, v8);
  PoolWithTag[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = AMLIGetNameSpaceObjectNoLock(PoolWithTag, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}
