/*
 * XREFs of swprintf_s @ 0x14016EB70
 * Callers:
 *     RtlIpv6AddressToStringW @ 0x1401497A0 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringW @ 0x14014B670 (RtlIpv4AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x14023E9A0 (RtlEthernetAddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x14023EA10 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv6AddressToStringExW @ 0x14023EAE0 (RtlIpv6AddressToStringExW.c)
 *     SeGetTokenDeviceMap @ 0x140468818 (SeGetTokenDeviceMap.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     _PnpSetPropertyWorker @ 0x1404DB1E0 (_PnpSetPropertyWorker.c)
 *     SiGetFirmwareBootDeviceName @ 0x140569680 (SiGetFirmwareBootDeviceName.c)
 *     PnpInitializeNotifyEntry @ 0x140571770 (PnpInitializeNotifyEntry.c)
 *     BiUnloadHiveByName @ 0x14057BA0C (BiUnloadHiveByName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiAddStoreFromFile @ 0x140589778 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x140589EB0 (BiGetNtPartitionPath.c)
 *     BiGetDriveLayoutBlock @ 0x14058A1D0 (BiGetDriveLayoutBlock.c)
 *     CmpSaveBootControlSet @ 0x14058D508 (CmpSaveBootControlSet.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14059B8A4 (_CmCreateOrdinalInstanceKey.c)
 *     CmSetAcpiHwProfile @ 0x1405C97A8 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405D1584 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpAddAcpiAliasEntry @ 0x14066E13C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14066EB04 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x14066EDC8 (CmpMoveBiosAliasTable.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB220 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpUuidToString @ 0x1406FC64C (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x140718C30 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407191E4 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x140719668 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x140719858 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x14071A260 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14071AA20 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14071B354 (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x14071C0A8 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14071C230 (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x140724084 (WheapWriteTriageDump.c)
 *     BiCreateBootEntry @ 0x140736AF0 (BiCreateBootEntry.c)
 *     SiGetBiosSystemPartition @ 0x1407397F0 (SiGetBiosSystemPartition.c)
 *     CreateMiniNtBootKey @ 0x1408317D0 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x14016EBA0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
