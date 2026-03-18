/*
 * XREFs of wcschr @ 0x14018A5C0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14023C034 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x1402A66D0 (SmUniqueIdParseProductName.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140501AF4 (DrvDbGetObjectDatabaseNode.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140504998 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405083FC (_CmGetDeviceRegPropWorker.c)
 *     PiGetDeviceRegProperty @ 0x1405261D8 (PiGetDeviceRegProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x140587028 (_RegRtlCreateTreeTransacted.c)
 *     EtwpGenerateFileName @ 0x1405878D8 (EtwpGenerateFileName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1405BE3C8 (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1405C2238 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiSwFindSwDevice @ 0x1405C8F4C (PiSwFindSwDevice.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405D749C (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1405D7A7C (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1405D9CD8 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405DA154 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiNormalizeDeviceText @ 0x1405E47BC (PiNormalizeDeviceText.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1405F52DC (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     LocalGetSDDLDeliminator @ 0x140601A3C (LocalGetSDDLDeliminator.c)
 *     BiCreatePartitionDevice @ 0x140609914 (BiCreatePartitionDevice.c)
 *     MmCallDllInitialize @ 0x140611478 (MmCallDllInitialize.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14061F6FC (SdbpCreateSearchPathPartsFromPath.c)
 *     AslPathClean @ 0x14061F85C (AslPathClean.c)
 *     SepParseElamCertResources @ 0x140633A74 (SepParseElamCertResources.c)
 *     _CmSplitDevicePanelId @ 0x1406371E4 (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140637390 (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x14064184C (LocalpConvertStringSidToSid.c)
 *     PiGetDeviceRegistryProperty @ 0x140724398 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140730170 (PiDevCfgResolveVariableKeyHandle.c)
 *     EtwpCovSampSplitSegments @ 0x1407B6F78 (EtwpCovSampSplitSegments.c)
 *     SdbQueryDataExTagID @ 0x1407D4E20 (SdbQueryDataExTagID.c)
 *     BiDoesHiveKeyExist @ 0x1407E2370 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x1407E2758 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407F1384 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407F2A34 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x1407F3E74 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x1407F3EEC (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x1407F3F50 (DrvDbValidateDriverInfFileName.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
