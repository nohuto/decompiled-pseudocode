/*
 * XREFs of ZwQueryKey @ 0x14017DB80
 * Callers:
 *     BiZwQueryKey @ 0x140134B0C (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x1401FD62C (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x140290080 (BiOpenStoreKeyFromObject.c)
 *     IopGetRegistryKeyInformation @ 0x1405173D8 (IopGetRegistryKeyInformation.c)
 *     IopGetDriverNameFromKeyNode @ 0x14051A450 (IopGetDriverNameFromKeyNode.c)
 *     _RegRtlQueryInfoKey @ 0x14057EBC4 (_RegRtlQueryInfoKey.c)
 *     PiNormalizeDeviceText @ 0x1405854E0 (PiNormalizeDeviceText.c)
 *     RtlpValidateKeyTrust @ 0x14059074C (RtlpValidateKeyTrust.c)
 *     CmpGetAcpiProfileInformation @ 0x1405C3C84 (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x1405E64BC (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x1405EB5EC (SepReadAndPopulateCapes.c)
 *     PiRearrangeDeviceInstances @ 0x1405EC0A4 (PiRearrangeDeviceInstances.c)
 *     CmpCloneHwProfile @ 0x140698898 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1406992C0 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x1406A5E80 (VrpPostEnumerateKey.c)
 *     PipCallbackHasDeviceOverrides @ 0x1406BD80C (PipCallbackHasDeviceOverrides.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406DBCCC (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x140731814 (SepReadAndInsertCaps.c)
 *     _RegRtlCopyTreeInternal @ 0x140785B88 (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x140844E5C (PipInitDeviceOverrideCache.c)
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
