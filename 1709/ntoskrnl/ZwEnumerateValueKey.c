/*
 * XREFs of ZwEnumerateValueKey @ 0x14017DB20
 * Callers:
 *     RtlpQueryRegistryValues @ 0x140520470 (RtlpQueryRegistryValues.c)
 *     _RegRtlEnumValue @ 0x140588538 (_RegRtlEnumValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 *     RtlpPopulateLanguageConfigList @ 0x1405BD0E0 (RtlpPopulateLanguageConfigList.c)
 *     PiDcInitUpdateProperties @ 0x1405C5CF0 (PiDcInitUpdateProperties.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405DACFC (PipApplyFunctionToServiceInstances.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405DD320 (ExpSetCurrentUserUILanguage.c)
 *     SepLoadNgenLocations @ 0x1405E64BC (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1406C72F4 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1406DBBD0 (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14078B9BC (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14078BC60 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x140853670 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x14086A990 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
