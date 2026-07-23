/*
 * XREFs of ZwQueryKey @ 0x14017E200
 * Callers:
 *     BiZwQueryKey @ 0x14014CF58 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x1401F7748 (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x140265D40 (BiOpenStoreKeyFromObject.c)
 *     _RegRtlQueryInfoKey @ 0x14044A174 (_RegRtlQueryInfoKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404D98B8 (IopGetDriverNameFromKeyNode.c)
 *     PiNormalizeDeviceText @ 0x1404DAC60 (PiNormalizeDeviceText.c)
 *     RtlpValidateKeyTrust @ 0x140556FB0 (RtlpValidateKeyTrust.c)
 *     IopGetRegistryKeyInformation @ 0x140586A18 (IopGetRegistryKeyInformation.c)
 *     SepReadAndPopulateCapes @ 0x1405C5FA4 (SepReadAndPopulateCapes.c)
 *     CmpGetAcpiProfileInformation @ 0x1405C9074 (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x1405CE94C (SepLoadNgenLocations.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x14066EDC8 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     PipCallbackHasDeviceOverrides @ 0x140691ABC (PipCallbackHasDeviceOverrides.c)
 *     PiRearrangeDeviceInstances @ 0x1406A70F0 (PiRearrangeDeviceInstances.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406B0520 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1406F9DD4 (SepReadAndInsertCaps.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 *     PipInitDeviceOverrideCache @ 0x1407F8168 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
