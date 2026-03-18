/*
 * XREFs of memset @ 0x1C0004540
 * Callers:
 *     ACPIMapNamedTable @ 0x1C00018C0 (ACPIMapNamedTable.c)
 *     RtlStringCbPrintfExW @ 0x1C0001B90 (RtlStringCbPrintfExW.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C00020B0 (ACPIGetConvertToHardwareIDWide.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     FreeData @ 0x1C0003150 (FreeData.c)
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     GetObjectPathNoLock @ 0x1C00037FC (GetObjectPathNoLock.c)
 *     NewContext @ 0x1C0003A74 (NewContext.c)
 *     InitContext @ 0x1C0003B5C (InitContext.c)
 *     RtlStringCchPrintfExW @ 0x1C00097B4 (RtlStringCchPrintfExW.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0009CE0 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C000A374 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C000A5D4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceRequest @ 0x1C000AA00 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C000AB04 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C000BF54 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C000C080 (ACPIBuildPowerResourceRequest.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000C6C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000C860 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000D090 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000DC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C000ED50 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C000EF70 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000F370 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000FB70 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0010660 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildRunMethodRequest @ 0x1C00111B8 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0011404 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00117C0 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C001192C (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C0011B7C (ACPIBuildThermalZoneRequest.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0013AA8 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C0015444 (RtlStringExHandleOtherFlagsW.c)
 *     CmosConfigSpaceHandler @ 0x1C0017620 (CmosConfigSpaceHandler.c)
 *     EnableDisableCMOSRegions @ 0x1C001791C (EnableDisableCMOSRegions.c)
 *     ACPIDetectDockDevices @ 0x1C0017A8C (ACPIDetectDockDevices.c)
 *     ACPIDetectEjectDevices @ 0x1C0018144 (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018844 (ACPIDetectPdoDevices.c)
 *     AcpiHandleDeviceFirmwareLock @ 0x1C0018F00 (AcpiHandleDeviceFirmwareLock.c)
 *     PerformHandlerInvocation @ 0x1C00195CC (PerformHandlerInvocation.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001A5DC (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C001C3C0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001C6B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C001CAC0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001CC30 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001CE80 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001DE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C001E0A0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001E1E0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C001E5C0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C001E760 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     AcpiDeviceResetInterface @ 0x1C00209A0 (AcpiDeviceResetInterface.c)
 *     ACPIEcOpRegionHandler @ 0x1C0021960 (ACPIEcOpRegionHandler.c)
 *     ACPIEcCreateEcData @ 0x1C0021C3C (ACPIEcCreateEcData.c)
 *     ACPIEcLogError @ 0x1C002281C (ACPIEcLogError.c)
 *     ACPIWriteEventLogEntry @ 0x1C0023138 (ACPIWriteEventLogEntry.c)
 *     ACPIFanFSTCallback @ 0x1C0023CF0 (ACPIFanFSTCallback.c)
 *     ACPIFanLoop @ 0x1C0024034 (ACPIFanLoop.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0025548 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C00259C0 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0025E58 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C00260AC (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C00263C8 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C00264B8 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetProcessorIDWide @ 0x1C0026634 (ACPIGetProcessorIDWide.c)
 *     ACPIGetWorkerForData @ 0x1C0026E90 (ACPIGetWorkerForData.c)
 *     RtlStringCchPrintfExA @ 0x1C00272B4 (RtlStringCchPrintfExA.c)
 *     RtlStringExHandleOtherFlagsA @ 0x1C0027464 (RtlStringExHandleOtherFlagsA.c)
 *     ACPIGpeClearEventMasks @ 0x1C00277EC (ACPIGpeClearEventMasks.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C0027A00 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIGpeInstallRemoveIndexErrorWorker @ 0x1C0027D30 (ACPIGpeInstallRemoveIndexErrorWorker.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0027F10 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C00297F4 (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C0029B5C (ACPIInternalEvaluateOST.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002A2C4 (ACPIInternalQueryExtendedAddress.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002A900 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlAcquireGlobalLock @ 0x1C002B1CC (ACPIIoctlAcquireGlobalLock.c)
 *     ACPIIoctlEnumChildren @ 0x1C002BA70 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C002BCBC (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C002C1A0 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C002C4F0 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C002C82C (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C002CB7C (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C002CEAC (ACPIIoctlGetDeviceInformation.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002D628 (AcpiIoctlArgumentToPackageObjV1.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C002D86C (AcpiIoctlArgumentToPackageObjV2.c)
 *     GetOpRegionScope @ 0x1C0030CC8 (GetOpRegionScope.c)
 *     GetPciAddress @ 0x1C0030EAC (GetPciAddress.c)
 *     IsPciBusAsync @ 0x1C00313DC (IsPciBusAsync.c)
 *     IsPciDevice @ 0x1C00319D8 (IsPciDevice.c)
 *     PciConfigInternal @ 0x1C0031FCC (PciConfigInternal.c)
 *     PciConfigSpaceHandler @ 0x1C0032090 (PciConfigSpaceHandler.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00321A0 (PciConfigSpaceHandlerWorker.c)
 *     AcpiAllocateNativeMethodOutputBuffer @ 0x1C0032BB0 (AcpiAllocateNativeMethodOutputBuffer.c)
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C00330B0 (AcpiConvertPackageArgumentToPackageObj.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C00332D8 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiDispatchNativeMethodEvalRequest @ 0x1C0033384 (AcpiDispatchNativeMethodEvalRequest.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C0033774 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0033984 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0033D28 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0035B40 (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0035EB0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C0037154 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C003865C (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C0038D98 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIThermalGetSensorDevice @ 0x1C003C9E4 (ACPIThermalGetSensorDevice.c)
 *     ACPIThermalLoopEx @ 0x1C003CE8C (ACPIThermalLoopEx.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C003D444 (ACPIThermalQueryCoolingInterfaces.c)
 *     ACPIVectorConnect @ 0x1C003F860 (ACPIVectorConnect.c)
 *     ACPIVectorGetEntry @ 0x1C003FCEC (ACPIVectorGetEntry.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C003FE88 (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C004066C (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0040BA4 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0041080 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C0041654 (ACPIWakeInitializePmeRouting.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C00417F8 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C0042620 (AcpiRecordBlackboxInformationWorker.c)
 *     ACPIWmiRegisterGuids @ 0x1C0042AE8 (ACPIWmiRegisterGuids.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C0043464 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0043638 (AMLIEvalPkgDataElement.c)
 *     Simulator_AllocAndInitTestData @ 0x1C004446C (Simulator_AllocAndInitTestData.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0044F0C (AMLICreateNativeNamespaceObject.c)
 *     PerformNativeMethodCall @ 0x1C0045688 (PerformNativeMethodCall.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0045A38 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0045CFC (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0045DF0 (AMLICreateOverrideObjectDep.c)
 *     CopyObjBuffer @ 0x1C0046368 (CopyObjBuffer.c)
 *     FindNSObj @ 0x1C0046440 (FindNSObj.c)
 *     MoveObjData @ 0x1C0047124 (MoveObjData.c)
 *     NewObjOwner @ 0x1C00472E8 (NewObjOwner.c)
 *     PerformMutexDriverCallbacks @ 0x1C00478C8 (PerformMutexDriverCallbacks.c)
 *     RegRSAccess @ 0x1C0047BD4 (RegRSAccess.c)
 *     AddObjSymbol @ 0x1C00484B0 (AddObjSymbol.c)
 *     DebugRunMethod @ 0x1C0048C60 (DebugRunMethod.c)
 *     SetLogSize @ 0x1C0049390 (SetLogSize.c)
 *     Debugger @ 0x1C0049678 (Debugger.c)
 *     NewGlobalHeap @ 0x1C004995C (NewGlobalHeap.c)
 *     NewLocalHeap @ 0x1C0049A10 (NewLocalHeap.c)
 *     LoadFieldUnitDDB @ 0x1C004A5F4 (LoadFieldUnitDDB.c)
 *     NewNameSpaceObject @ 0x1C004A874 (NewNameSpaceObject.c)
 *     BankField @ 0x1C004A930 (BankField.c)
 *     CreateXField @ 0x1C004ADAC (CreateXField.c)
 *     Field @ 0x1C004AFF0 (Field.c)
 *     IndexField @ 0x1C004B180 (IndexField.c)
 *     InitEvent @ 0x1C004B37C (InitEvent.c)
 *     InitMutex @ 0x1C004B434 (InitMutex.c)
 *     Method @ 0x1C004B510 (Method.c)
 *     OpRegion @ 0x1C004B730 (OpRegion.c)
 *     PowerRes @ 0x1C004B8B0 (PowerRes.c)
 *     Processor @ 0x1C004BA20 (Processor.c)
 *     ReadField @ 0x1C004D4C0 (ReadField.c)
 *     PushCall @ 0x1C004E600 (PushCall.c)
 *     PushTerm @ 0x1C004E810 (PushTerm.c)
 *     Buffer @ 0x1C004FE30 (Buffer.c)
 *     Concat @ 0x1C004FFA0 (Concat.c)
 *     Match_32 @ 0x1C0051B04 (Match_32.c)
 *     Match_64 @ 0x1C0051C24 (Match_64.c)
 *     Package @ 0x1C00522C0 (Package.c)
 *     ConvertToBuffer @ 0x1C0053A14 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C0053B54 (ConvertToDDBHandle.c)
 *     ConvertToInteger @ 0x1C0053BE8 (ConvertToInteger.c)
 *     ConvertToString @ 0x1C0053CB8 (ConvertToString.c)
 *     ParseField @ 0x1C0054C68 (ParseField.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     LinkNodeRestoreHardwareState @ 0x1C00577A0 (LinkNodeRestoreHardwareState.c)
 *     LinkNodepRunSrsAsync @ 0x1C0057A54 (LinkNodepRunSrsAsync.c)
 *     OSOpenUnicodeHandle @ 0x1C00718BC (OSOpenUnicodeHandle.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0071964 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C0071B48 (ACPIBusIrpQueryHardwareId.c)
 *     WppTraceCallback @ 0x1C0074560 (WppTraceCallback.c)
 *     ACPIAmliEvaluateDsm @ 0x1C00747A8 (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0074918 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0074AAC (ACPIAmliEvaluatePcch.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0074CA0 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0076E60 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0077554 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00779AC (ACPIBusIrpQueryInstanceId.c)
 *     ACPICMExperienceButtonWorker @ 0x1C0078F20 (ACPICMExperienceButtonWorker.c)
 *     AcpiRegisterDeviceFirmwareLockHandler @ 0x1C0079484 (AcpiRegisterDeviceFirmwareLockHandler.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C0079F34 (ACPIEcConnectGpioInterrupt.c)
 *     ACPIEcGetGpeVector @ 0x1C007A0E4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A194 (ACPIEcGetUid.c)
 *     QueryExternalTranslatorInterface @ 0x1C007AE44 (QueryExternalTranslatorInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C007C884 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIBusIommuBusInterface @ 0x1C007CC94 (ACPIBusIommuBusInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C007CE6C (ACPIEjectPnpLocationInterface.c)
 *     ACPIInitMultiString @ 0x1C007D26C (ACPIInitMultiString.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C007D7F0 (ACPIInternalGetDeviceCapabilities.c)
 *     ACPIInternalGrowBuffer @ 0x1C007D86C (ACPIInternalGrowBuffer.c)
 *     EnableDisableIPMIRegions @ 0x1C007DF7C (EnableDisableIPMIRegions.c)
 *     ACPIProcessHardwareInformation @ 0x1C007E17C (ACPIProcessHardwareInformation.c)
 *     ACPIMatchHardwareAddress @ 0x1C007E4A4 (ACPIMatchHardwareAddress.c)
 *     ACPIMatchHardwareId @ 0x1C007E598 (ACPIMatchHardwareId.c)
 *     ACPIEjectPartitionUnitInterface @ 0x1C007E748 (ACPIEjectPartitionUnitInterface.c)
 *     ACPIEvaluateSpareDsm @ 0x1C007E80C (ACPIEvaluateSpareDsm.c)
 *     ACPIModuleGetSpareProperties @ 0x1C007E9E0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C007EAC0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C007EBA4 (ACPIQuerySpareDsm.c)
 *     ACPIPccInitialize @ 0x1C007EC60 (ACPIPccInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1C007EEB4 (ACPIPccLegacyInitialize.c)
 *     AcpiPccAcquireSubspace @ 0x1C007F080 (AcpiPccAcquireSubspace.c)
 *     AcpiPccExecuteCommand @ 0x1C007F100 (AcpiPccExecuteCommand.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C007F340 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C007F52C (AcpiQueryPciDeviceChassisLabel.c)
 *     AcpiQueryPciBusInterface @ 0x1C007F9CC (AcpiQueryPciBusInterface.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C007FF58 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C0080160 (ACPIPepPlatformEntryExitNotify.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C00805F4 (AcpiSetupNativeMethodInterface.c)
 *     RegisterOperationRegionHandler @ 0x1C0080D54 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C0080FE0 (UnRegisterOperationRegionHandler.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C0081B14 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSCreateHandle @ 0x1C0082140 (OSCreateHandle.c)
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C0083A6C (PnpBiosUpdateResourceListWithSidebandResources.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C0083C28 (PnpIoResourceListToCmResourceList.c)
 *     PnpiAddSidebandResources @ 0x1C0083E18 (PnpiAddSidebandResources.c)
 *     PnpiGrowResourceDescriptor @ 0x1C0085A98 (PnpiGrowResourceDescriptor.c)
 *     PnpiGrowResourceList @ 0x1C0085B80 (PnpiGrowResourceList.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0085C6C (PnpiUpdateForceActiveBothInterrupts.c)
 *     PnpiUpdateResourceList @ 0x1C0085FAC (PnpiUpdateResourceList.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0088B20 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIThermalBuildConstraints @ 0x1C0088E6C (ACPIThermalBuildConstraints.c)
 *     ACPIThermalStartDevice @ 0x1C00895C0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C0089A40 (ACPIThermalWorker.c)
 *     ACPICreatePhysicalDeviceLocationDescriptor @ 0x1C008B268 (ACPICreatePhysicalDeviceLocationDescriptor.c)
 *     ACPIGetUsedDebuggingDevices @ 0x1C008B3D8 (ACPIGetUsedDebuggingDevices.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008B638 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C008B9B8 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIConnectWakeInterrupt @ 0x1C008BF2C (ACPIConnectWakeInterrupt.c)
 *     PcisuppInitializePciRouting @ 0x1C008C690 (PcisuppInitializePciRouting.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C008CBC8 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqLibAllocateMessageTarget @ 0x1C008CDE0 (IrqLibAllocateMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C008D6B0 (IrqTransGetInterruptVector.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C008D95C (IrqTranslatepQueryDeviceIrql.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C008DA58 (IrqPolicyGetDevicePolicy.c)
 *     ProcessorAddInstance @ 0x1C008E0EC (ProcessorAddInstance.c)
 *     ProcessorpIndexInstance @ 0x1C008F040 (ProcessorpIndexInstance.c)
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbGetDeviceIrql @ 0x1C00906A0 (IrqArbGetDeviceIrql.c)
 *     IrqArbPreprocessEntry @ 0x1C0090B20 (IrqArbPreprocessEntry.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C0090D44 (IrqArbUpdateInterruptProperties.c)
 *     IrqArbpQueryConflictIsa @ 0x1C009183C (IrqArbpQueryConflictIsa.c)
 *     IrqArbpSetDeviceProperties @ 0x1C00918EC (IrqArbpSetDeviceProperties.c)
 *     IcAddGicInstance @ 0x1C0091D5C (IcAddGicInstance.c)
 *     IcAddSecondaryIcInstance @ 0x1C0091E38 (IcAddSecondaryIcInstance.c)
 *     IcClearPossibleData @ 0x1C00921E0 (IcClearPossibleData.c)
 *     IcUpdateControllers @ 0x1C0092990 (IcUpdateControllers.c)
 *     ArbBootAllocation @ 0x1C0093940 (ArbBootAllocation.c)
 *     ArbQueryConflict @ 0x1C0094AA0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C0094E30 (ArbRetestAllocation.c)
 *     ArbpBuildAllocationStack @ 0x1C0095428 (ArbpBuildAllocationStack.c)
 *     DriverEntry @ 0x1C0098174 (DriverEntry.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0098974 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIDispatchAddDevice @ 0x1C0099120 (ACPIDispatchAddDevice.c)
 *     ACPIInitReadRegistryKeys @ 0x1C0099B04 (ACPIInitReadRegistryKeys.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1C009A594 (ACPILoadAddDynamicDataBlockTable.c)
 *     ACPILoadProcessRSDT @ 0x1C009A99C (ACPILoadProcessRSDT.c)
 *     ACPIRegDumpAcpiTable @ 0x1C009AE2C (ACPIRegDumpAcpiTable.c)
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C009BE08 (AMLILoadDDB.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C009C064 (Simulator_NotifyTablesAreLoaded.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C009C330 (InitIllegalIOAddressListFromHAL.c)
 *     IrqLibpSetSciConnectionData @ 0x1C009CA50 (IrqLibpSetSciConnectionData.c)
 *     ProcessorInitGlobalState @ 0x1C009CE90 (ProcessorInitGlobalState.c)
 *     IcAddApicInstance @ 0x1C009CF50 (IcAddApicInstance.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
