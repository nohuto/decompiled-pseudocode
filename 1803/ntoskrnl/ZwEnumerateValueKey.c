/*
 * XREFs of ZwEnumerateValueKey @ 0x1401A7720
 * Callers:
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 *     PiDevCfgCopyDeviceKey @ 0x1405D81C8 (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumValue @ 0x1405E2FEC (_RegRtlEnumValue.c)
 *     ExpSetCurrentUserUILanguage @ 0x14060E6CC (ExpSetCurrentUserUILanguage.c)
 *     PiDcInitUpdateProperties @ 0x140622D70 (PiDcInitUpdateProperties.c)
 *     RtlpPopulateLanguageConfigList @ 0x140635568 (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x140646158 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x14064C83C (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14072BF1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14072DDF0 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x14074676C (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1407F7E7C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1407F8120 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x1408C5524 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1408DF380 (PiLastGoodRevertLastKnownDirectory.c)
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
