/*
 * XREFs of AMLIDereferenceHandleEx @ 0x1C0002AF0
 * Callers:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C000A5D4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C000AB04 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000B954 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000C6C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000C860 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000C9F0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000CE60 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000D090 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C000D400 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000D5C0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000D820 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000E750 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C000E860 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000E9C0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C000EAE0 (ACPIBuildProcessGenericComplete.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C000ED50 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C000EF70 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000F370 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000FB70 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0010200 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0010660 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0010B10 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIReserveDependencies @ 0x1C0012138 (ACPIReserveDependencies.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00121F0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     AreDependenciesSatisfied @ 0x1C00123FC (AreDependenciesSatisfied.c)
 *     CmosConfigSpaceHandler @ 0x1C0017620 (CmosConfigSpaceHandler.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C0017758 (CmosConfigSpaceHandlerWorker.c)
 *     EnableDisableCMOSRegions @ 0x1C001791C (EnableDisableCMOSRegions.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001C6B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C001CAC0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001CE80 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001DBA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001DE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C001E5C0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C001E760 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C001F3EC (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C001F6C0 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIEcRemoveDevice @ 0x1C0021F20 (ACPIEcRemoveDevice.c)
 *     ACPIEcRunQueryMethod @ 0x1C00225DC (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C0024034 (ACPIFanLoop.c)
 *     ACPIFilterIrpSetPower @ 0x1C0024BB0 (ACPIFilterIrpSetPower.c)
 *     ACPIGetProcessorStatus @ 0x1C0026AB0 (ACPIGetProcessorStatus.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0028364 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C0028768 (ACPIInitDosDeviceName.c)
 *     ACPIInitRemovePowerNodes @ 0x1C0028C88 (ACPIInitRemovePowerNodes.c)
 *     ACPIInitStartDevice @ 0x1C0028FBC (ACPIInitStartDevice.c)
 *     ACPIInternalEvaluateOST @ 0x1C0029B5C (ACPIInternalEvaluateOST.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002A900 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002B29C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C002BDC4 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C002C1A0 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C002C4F0 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C002C82C (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C002CB7C (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002D138 (ACPIIoctlGetDeviceSpecificData.c)
 *     OSNotifyCreateDevice @ 0x1C002E708 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C002E808 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C002EA1C (OSNotifyCreateProcessor.c)
 *     OSNotifyDeviceCheck @ 0x1C002EB9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C002ED8C (OSNotifyDeviceEnum.c)
 *     GetOpRegionScopeWorker @ 0x1C0030D90 (GetOpRegionScopeWorker.c)
 *     GetPciAddressWorker @ 0x1C0030F70 (GetPciAddressWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C00314C0 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0031AD0 (IsPciDeviceWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00321A0 (PciConfigSpaceHandlerWorker.c)
 *     AcpiHandleInternalNotify @ 0x1C0033430 (AcpiHandleInternalNotify.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C00336B0 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0033984 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0033D28 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0035B40 (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0035EB0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C00393B0 (ACPIRootIrpQueryPower.c)
 *     ACPITableNotifyFreeObject @ 0x1C003B510 (ACPITableNotifyFreeObject.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C003BA14 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x1C003BBA4 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1C003C9E4 (ACPIThermalGetSensorDevice.c)
 *     ACPIThermalStopZoneWorker @ 0x1C003DBCC (ACPIThermalStopZoneWorker.c)
 *     AMLIIterateParentNext @ 0x1C0043E7C (AMLIIterateParentNext.c)
 *     AMLIIterateSiblingsNext @ 0x1C0043EB0 (AMLIIterateSiblingsNext.c)
 *     Simulator_RemoveNode @ 0x1C0044E08 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C0046A88 (FreeOwnedObjects.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0057900 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0057B00 (LinkNodepRunSrsWorker.c)
 *     ACPIDockIrpEject @ 0x1C0072DC0 (ACPIDockIrpEject.c)
 *     ACPIAmliEvaluateDsm @ 0x1C00747A8 (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0074918 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0074AAC (ACPIAmliEvaluatePcch.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0074CA0 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0079900 (AcpiGetIdleWakeInfo.c)
 *     ACPIEcGetGpeVector @ 0x1C007A0E4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A194 (ACPIEcGetUid.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C007AA10 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C007ACA0 (ExternalRequestBiosNameDeviceAssociation.c)
 *     ACPIInitStopDevice @ 0x1C007D3C0 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007DF7C (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C007E920 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C007E9E0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C007EAC0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C007EBA4 (ACPIQuerySpareDsm.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 *     RegisterOperationRegionHandler @ 0x1C0080D54 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C0080FE0 (UnRegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 *     ACPIThermalWorker @ 0x1C0089A40 (ACPIThermalWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C008D418 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008D5D0 (LinkNodepAddLinkNodeWorker.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0098974 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 */

__int64 __fastcall AMLIDereferenceHandleEx(volatile signed __int32 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  dword_1C00677B8 = 0;
  result = (unsigned int)gdwfAMLI;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v3 = *(_QWORD *)a1;
      if ( a1 == (volatile signed __int32 *)(v3 + 120) )
      {
        return DereferenceObjectEx(v3);
      }
      else
      {
        DereferenceObjectEx(v3);
        return HeapFree(a1);
      }
    }
  }
  return result;
}
