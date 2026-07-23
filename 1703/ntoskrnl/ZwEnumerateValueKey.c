/*
 * XREFs of ZwEnumerateValueKey @ 0x14017E1A0
 * Callers:
 *     _RegRtlEnumValue @ 0x140445A14 (_RegRtlEnumValue.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 *     ExpSetCurrentUserUILanguage @ 0x140587598 (ExpSetCurrentUserUILanguage.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     PipApplyFunctionToServiceInstances @ 0x14059C6CC (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x14059DB24 (PiDcInitUpdateProperties.c)
 *     RtlpPopulateLanguageConfigList @ 0x1405B7448 (RtlpPopulateLanguageConfigList.c)
 *     SepLoadNgenLocations @ 0x1405CE94C (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14069B6D4 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1406B0424 (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140749258 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1407494FC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x14080CC70 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140833870 (PiLastGoodRevertLastKnownDirectory.c)
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
