/*
 * XREFs of swprintf_s @ 0x140163370
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x14012CC90 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x14012CD70 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x140131500 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1401315A0 (RtlIpv4AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x140254BD0 (RtlEthernetAddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     _PnpSetPropertyWorker @ 0x14053034C (_PnpSetPropertyWorker.c)
 *     SeGetTokenDeviceMap @ 0x14056FDEC (SeGetTokenDeviceMap.c)
 *     SiGetFirmwareBootDeviceName @ 0x14057DBD8 (SiGetFirmwareBootDeviceName.c)
 *     PnpInitializeNotifyEntry @ 0x140586388 (PnpInitializeNotifyEntry.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1405A7C54 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiAddStoreFromFile @ 0x1405ADFA4 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x1405B0860 (BiGetNtPartitionPath.c)
 *     BiGetDriveLayoutBlock @ 0x1405B110C (BiGetDriveLayoutBlock.c)
 *     CmSetAcpiHwProfile @ 0x1405C35C0 (CmSetAcpiHwProfile.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405D6894 (_CmCreateOrdinalInstanceKey.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405EC790 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpAddAcpiAliasEntry @ 0x140698634 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140698898 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140698FFC (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x1406992C0 (CmpMoveBiosAliasTable.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140732C08 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpUuidToString @ 0x14073403C (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x140758430 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407589E4 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x140758E6C (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14075905C (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x140759AFC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14075A2BC (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14075ABF0 (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x14075B948 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14075BAD0 (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x140763B4C (WheapWriteTriageDump.c)
 *     BiUnloadHiveByName @ 0x140779940 (BiUnloadHiveByName.c)
 *     BiCreateBootEntry @ 0x14077B040 (BiCreateBootEntry.c)
 *     SiGetBiosSystemPartition @ 0x14077E0A0 (SiGetBiosSystemPartition.c)
 *     CreateMiniNtBootKey @ 0x1408686C8 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1401633A0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
