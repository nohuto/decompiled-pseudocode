/*
 * XREFs of swprintf_s @ 0x14018D230
 * Callers:
 *     RtlIpv4AddressToStringW @ 0x140155EF0 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringW @ 0x14016CBB0 (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x14028C9D0 (RtlEthernetAddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x14028CA40 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv6AddressToStringExW @ 0x14028CB10 (RtlIpv6AddressToStringExW.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     SeGetTokenDeviceMap @ 0x14055FCF8 (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x140569834 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _PnpSetPropertyWorker @ 0x1405D3304 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405D3828 (_CmCreateOrdinalInstanceKey.c)
 *     PnpInitializeNotifyEntry @ 0x1405E2768 (PnpInitializeNotifyEntry.c)
 *     BiUnloadHiveByName @ 0x1405EE3C0 (BiUnloadHiveByName.c)
 *     SiGetBiosSystemPartition @ 0x1405F12FC (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x140606570 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x14060729C (BiGetNtPartitionPath.c)
 *     BiGetDriveLayoutBlock @ 0x140607674 (BiGetDriveLayoutBlock.c)
 *     CmSetAcpiHwProfile @ 0x14062CD80 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14065068C (CmpUpdateReorganizeRegistryValues.c)
 *     CmpAddAcpiAliasEntry @ 0x1406FBE6C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1406FC0D0 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1406FC834 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x1406FCAF8 (CmpMoveBiosAliasTable.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407964E0 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpUuidToString @ 0x1407978E4 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1407BF0C4 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BF674 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1407BFAFC (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1407BFF48 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1407C0A28 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407C11E8 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1407C1B1C (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x1407C2930 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407C2AB8 (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x1407CB834 (WheapWriteTriageDump.c)
 *     BiCreateBootEntry @ 0x1407E3A20 (BiCreateBootEntry.c)
 *     CreateMiniNtBootKey @ 0x1408DCEA0 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x14018D260 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
