/*
 * XREFs of ZwQuerySystemInformation @ 0x14017E600
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053800 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14012D7F0 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     HvlpProcessIommu @ 0x1401E9CAC (HvlpProcessIommu.c)
 *     SmKmStoreTerminateWorker @ 0x14024E070 (SmKmStoreTerminateWorker.c)
 *     PopGetHwConfigurationSignature @ 0x14040BD00 (PopGetHwConfigurationSignature.c)
 *     PspDetectComplusILImage @ 0x1404494A4 (PspDetectComplusILImage.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x14045CC90 (ExpHwidBiosIfGetFirmwareTable.c)
 *     PfpPrivSourceEnum @ 0x140498F88 (PfpPrivSourceEnum.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     SiGetSystemDeviceName @ 0x14056951C (SiGetSystemDeviceName.c)
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 *     RtlQueryModuleInformation @ 0x140580100 (RtlQueryModuleInformation.c)
 *     SiQuerySystemPartitionInformation @ 0x140589644 (SiQuerySystemPartitionInformation.c)
 *     BiGetNtPartitionPath @ 0x140589EB0 (BiGetNtPartitionPath.c)
 *     BiGetFirmwareType @ 0x14058BE44 (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x14058D3D4 (BiGetCurrentBootEntryIdentifier.c)
 *     KsepGetLoadedModulesList @ 0x14059D950 (KsepGetLoadedModulesList.c)
 *     PoInitHiberServices @ 0x1405A913C (PoInitHiberServices.c)
 *     AslEnvGetProcessWowInfo @ 0x1405BC038 (AslEnvGetProcessWowInfo.c)
 *     RtlSystemTimeToLocalTime @ 0x1405D2530 (RtlSystemTimeToLocalTime.c)
 *     SepInitQuerySigningPolicyExt @ 0x1405D5FF0 (SepInitQuerySigningPolicyExt.c)
 *     PnpGetStableSystemBootTime @ 0x140695AE0 (PnpGetStableSystemBootTime.c)
 *     PopDripsWatchdogTakeAction @ 0x1406D4DDC (PopDripsWatchdogTakeAction.c)
 *     RtlLocalTimeToSystemTime @ 0x1406E5D30 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x14070B538 (EtwpLogMemInfoWs.c)
 *     ExpFindDiskSignature @ 0x140719668 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14072B80C (SdbpCheckMatchingRegistryEntry.c)
 *     HdlspAddLogEntry @ 0x14078E008 (HdlspAddLogEntry.c)
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 *     PopInitPlatformSettings @ 0x140819EF8 (PopInitPlatformSettings.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1408233B0 (SeCodeIntegrityInitializePolicy.c)
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
