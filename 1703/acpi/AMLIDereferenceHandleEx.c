/*
 * XREFs of AMLIDereferenceHandleEx @ 0x1C00142C0
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0006B64 (OSNotifyCreateProcessor.c)
 *     ACPIInitStartDevice @ 0x1C0007104 (ACPIInitStartDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C0007478 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C00097D0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0009FE0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000A270 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000A4D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000B170 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C000B9E0 (ACPIBuildProcessGenericComplete.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000BAF0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000BE90 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000C430 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000E610 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000EAF0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000ECB0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000FFF0 (ACPIBuildProcessDevicePhaseSub.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0011420 (PciConfigSpaceHandlerWorker.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C00126D0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     OSNotifyCreateDevice @ 0x1C0012860 (OSNotifyCreateDevice.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C0013D34 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C0013E44 (ACPIIoctlEvalPreProcessing.c)
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0016B14 (ACPIThermalAcquireCoolingInterfaces.c)
 *     LinkNodeCrackPrt @ 0x1C001B96C (LinkNodeCrackPrt.c)
 *     ACPIThermalActivateConstraint @ 0x1C001DB88 (ACPIThermalActivateConstraint.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C001ED90 (ACPIBuildProcessDevicePhaseHid.c)
 *     IsPciDeviceWorker @ 0x1C001F2D0 (IsPciDeviceWorker.c)
 *     GetOpRegionScopeWorker @ 0x1C001F710 (GetOpRegionScopeWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C001FBD0 (IsPciBusAsyncWorker.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0020B40 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0022BA8 (ACPIThermalGetSensorDevice.c)
 *     EnableDisableCMOSRegions @ 0x1C0024B70 (EnableDisableCMOSRegions.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C00251F4 (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C00252E0 (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIDeviceRecordDependencies @ 0x1C002576C (ACPIDeviceRecordDependencies.c)
 *     ACPIGetProcessorStatus @ 0x1C00259D4 (ACPIGetProcessorStatus.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C002686C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     OSNotifyCreateOperationRegion @ 0x1C00275F0 (OSNotifyCreateOperationRegion.c)
 *     AMLIIterateParentNext @ 0x1C0027690 (AMLIIterateParentNext.c)
 *     AreDependenciesSatisfied @ 0x1C0027C74 (AreDependenciesSatisfied.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0027CC0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0027DA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028280 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0028420 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0028DBC (ACPIBuildDevicePowerNodes.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0028E8C (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIFilterIrpSetPower @ 0x1C002A8B0 (ACPIFilterIrpSetPower.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B850 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0042FFC (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0043A04 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0044000 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0044220 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0044800 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIReserveDependencies @ 0x1C00450A0 (ACPIReserveDependencies.c)
 *     CmosConfigSpaceHandler @ 0x1C0047A60 (CmosConfigSpaceHandler.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C0047B98 (CmosConfigSpaceHandlerWorker.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049900 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0049ED0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A070 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C004ABBC (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIEcRemoveDevice @ 0x1C004C820 (ACPIEcRemoveDevice.c)
 *     ACPIEcRunQueryMethod @ 0x1C004CEE4 (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C004DF94 (ACPIFanLoop.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F6A4 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitRemovePowerNodes @ 0x1C004FB20 (ACPIInitRemovePowerNodes.c)
 *     ACPIInternalEvaluateOST @ 0x1C0050074 (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005075C (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C0050910 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0050D4C (ACPIIoctlGetDeviceSpecificData.c)
 *     OSNotifyDeviceCheck @ 0x1C005155C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C005174C (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C00539B0 (AcpiHandleInternalNotify.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C0053C20 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0054078 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0055160 (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0055310 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C0057120 (ACPIRootIrpQueryPower.c)
 *     ACPITableNotifyFreeObject @ 0x1C0057A80 (ACPITableNotifyFreeObject.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0058610 (ACPIThermalStopZoneWorker.c)
 *     Simulator_RemoveNode @ 0x1C005B900 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C005D608 (FreeOwnedObjects.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0062CA0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0062EA0 (LinkNodepRunSrsWorker.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0084D20 (LinkNodepAddLinkNodeWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C0088CC8 (LinkNodeWriteStateToHardware.c)
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C008A63C (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008A750 (ACPIAmliEvaluateOsc.c)
 *     AcpiGetIdleWakeInfo @ 0x1C008C830 (AcpiGetIdleWakeInfo.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C008EB70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     EnableDisableRegions @ 0x1C0090400 (EnableDisableRegions.c)
 *     ACPIThermalWorker @ 0x1C0090A20 (ACPIThermalWorker.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0091F2C (ACPIAmliEvaluateDsm.c)
 *     RegisterOperationRegionHandler @ 0x1C0092DAC (RegisterOperationRegionHandler.c)
 *     ACPIDockIrpEject @ 0x1C009AFB0 (ACPIDockIrpEject.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C009C5A4 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcGetGpeVector @ 0x1C009E0DC (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C009E18C (ACPIEcGetUid.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C009E9B0 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C009EC10 (ExternalRequestBiosNameDeviceAssociation.c)
 *     ACPIInitStopDevice @ 0x1C009F658 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C009FB40 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C009FF00 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C009FFC0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00A00A0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00A0184 (ACPIQuerySpareDsm.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00A0E14 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AA430 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 */

__int64 __fastcall AMLIDereferenceHandleEx(volatile signed __int32 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  dword_1C00776F8 = 0;
  result = (unsigned int)gdwfAMLI;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v4 = *(_QWORD *)a1;
      if ( a1 == (volatile signed __int32 *)(v4 + 120) )
      {
        return DereferenceObjectEx(v4, a2);
      }
      else
      {
        DereferenceObjectEx(v4, a2);
        return HeapFree(a1);
      }
    }
  }
  return result;
}
