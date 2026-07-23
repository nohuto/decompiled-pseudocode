/*
 * XREFs of ZwQuerySystemInformation @ 0x1401A7B80
 * Callers:
 *     AdminlessTelemetryEnabled @ 0x14005E210 (AdminlessTelemetryEnabled.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14007CFB0 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400CC190 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SeAccessCheckWithHint @ 0x1400D47B0 (SeAccessCheckWithHint.c)
 *     InSMode @ 0x140100C70 (InSMode.c)
 *     HvlpProcessIommu @ 0x14022D424 (HvlpProcessIommu.c)
 *     RtlpHpHeapCreate @ 0x140294F54 (RtlpHpHeapCreate.c)
 *     SmKmStoreTerminateWorker @ 0x1402A7610 (SmKmStoreTerminateWorker.c)
 *     PopGetHwConfigurationSignature @ 0x140477654 (PopGetHwConfigurationSignature.c)
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     PfpPrivSourceEnum @ 0x140538648 (PfpPrivSourceEnum.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x140549BD0 (ExpCloudbookHardwareLockedProvider.c)
 *     SiGetSystemDeviceName @ 0x1405695B4 (SiGetSystemDeviceName.c)
 *     PspDetectComplusILImage @ 0x1405741B4 (PspDetectComplusILImage.c)
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1405E9920 (ExpHwidBiosIfGetFirmwareTable.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     BiGetNtPartitionPath @ 0x14060729C (BiGetNtPartitionPath.c)
 *     BiGetFirmwareType @ 0x14060926C (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x14060A27C (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemInformationString @ 0x14060A3B4 (SiQuerySystemInformationString.c)
 *     RtlQueryModuleInformation @ 0x14060C3C0 (RtlQueryModuleInformation.c)
 *     AslEnvGetProcessWowInfo @ 0x14061F1C4 (AslEnvGetProcessWowInfo.c)
 *     KsepGetLoadedModulesList @ 0x1406235DC (KsepGetLoadedModulesList.c)
 *     PoInitHiberServices @ 0x140624CC8 (PoInitHiberServices.c)
 *     RtlSystemTimeToLocalTime @ 0x140650B30 (RtlSystemTimeToLocalTime.c)
 *     SepInitQuerySigningPolicyExt @ 0x140655780 (SepInitQuerySigningPolicyExt.c)
 *     PnpGetStableSystemBootTime @ 0x140727610 (PnpGetStableSystemBootTime.c)
 *     PiIsHVCIEnabled @ 0x1407281EC (PiIsHVCIEnabled.c)
 *     PopCheckTestsigningEnabled @ 0x14075D244 (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x1407819F0 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x1407A8264 (EtwpLogMemInfoWs.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1407BE2B0 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x1407BFAFC (ExpFindDiskSignature.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1407BFCEC (ExpFirmwareAccessAppContainerCheck.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1407D568C (SdbpCheckMatchingRegistryEntry.c)
 *     HdlspAddLogEntry @ 0x140838AE0 (HdlspAddLogEntry.c)
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1408C6BB0 (SeCodeIntegrityInitializePolicy.c)
 *     PopInitPlatformSettings @ 0x1408C7854 (PopInitPlatformSettings.c)
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
