/*
 * XREFs of ZwQueryKey @ 0x1401A7780
 * Callers:
 *     BiZwQueryKey @ 0x1401643EC (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x14023A428 (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1402C5CF0 (BiOpenStoreKeyFromObject.c)
 *     RtlpValidateKeyTrust @ 0x14057D5D4 (RtlpValidateKeyTrust.c)
 *     IopGetRegistryKeyInformation @ 0x1405D953C (IopGetRegistryKeyInformation.c)
 *     PiNormalizeDeviceText @ 0x1405E47BC (PiNormalizeDeviceText.c)
 *     _RegRtlQueryInfoKey @ 0x1405E4B7C (_RegRtlQueryInfoKey.c)
 *     PiRearrangeDeviceInstances @ 0x1405F6A14 (PiRearrangeDeviceInstances.c)
 *     IopGetDriverNameFromKeyNode @ 0x1405F76D4 (IopGetDriverNameFromKeyNode.c)
 *     CmpGetAcpiProfileInformation @ 0x14062D44C (CmpGetAcpiProfileInformation.c)
 *     SepReadAndPopulateCapes @ 0x140631A88 (SepReadAndPopulateCapes.c)
 *     SepLoadNgenLocations @ 0x14064C83C (SepLoadNgenLocations.c)
 *     CmpCloneHwProfile @ 0x1406FC0D0 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1406FCAF8 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x14070A514 (VrpPostEnumerateKey.c)
 *     PipCallbackHasDeviceOverrides @ 0x1407227BC (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14073C89C (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x140746868 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x140795114 (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407ABDF4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x1407F09B8 (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x1408B5318 (PipInitDeviceOverrideCache.c)
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
