/*
 * XREFs of ZwQuerySystemInformation @ 0x14017DF80
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140005504 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140009270 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     HvlpProcessIommu @ 0x1401EEEB4 (HvlpProcessIommu.c)
 *     SmKmStoreTerminateWorker @ 0x140273B80 (SmKmStoreTerminateWorker.c)
 *     PopGetHwConfigurationSignature @ 0x140433310 (PopGetHwConfigurationSignature.c)
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     AslEnvGetProcessWowInfo @ 0x14054213C (AslEnvGetProcessWowInfo.c)
 *     SiGetSystemDeviceName @ 0x14057DA64 (SiGetSystemDeviceName.c)
 *     PspDetectComplusILImage @ 0x14058F588 (PspDetectComplusILImage.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x14059DDC0 (ExpHwidBiosIfGetFirmwareTable.c)
 *     PoInitHiberServices @ 0x1405AD774 (PoInitHiberServices.c)
 *     BiGetFirmwareType @ 0x1405B0290 (BiGetFirmwareType.c)
 *     BiGetNtPartitionPath @ 0x1405B0860 (BiGetNtPartitionPath.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x1405B1A40 (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemPartitionInformation @ 0x1405B1B68 (SiQuerySystemPartitionInformation.c)
 *     KsepGetLoadedModulesList @ 0x1405C5C54 (KsepGetLoadedModulesList.c)
 *     RtlQueryModuleInformation @ 0x1405CCA60 (RtlQueryModuleInformation.c)
 *     RtlCreateHeap @ 0x1405D3930 (RtlCreateHeap.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1405DEB00 (ExpCloudbookHardwareIDProvider.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1405DEBD0 (ExpCloudbookHardwareLockedProvider.c)
 *     RtlSystemTimeToLocalTime @ 0x1405ECD10 (RtlSystemTimeToLocalTime.c)
 *     SepInitQuerySigningPolicyExt @ 0x1405F2670 (SepInitQuerySigningPolicyExt.c)
 *     PopCheckTestsigningEnabled @ 0x1406F4ED4 (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x14071E3F0 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x14074665C (EtwpLogMemInfoWs.c)
 *     ExpFindDiskSignature @ 0x140758E6C (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14076E53C (SdbpCheckMatchingRegistryEntry.c)
 *     HdlspAddLogEntry @ 0x1407CBAE0 (HdlspAddLogEntry.c)
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 *     PopInitPlatformSettings @ 0x14084A0A4 (PopInitPlatformSettings.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1408548A8 (SeCodeIntegrityInitializePolicy.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
