/*
 * XREFs of wcschr @ 0x140160420
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14000F0D0 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x1402723AC (SmUniqueIdParseProductName.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1404490D4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14044B688 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14051D41C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x14052263C (_CmGetDeviceRegPropWorker.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140531474 (DrvDbGetDeviceIdMappedProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x140533308 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140533A0C (DrvDbGetObjectDatabaseNode.c)
 *     AslPathClean @ 0x1405417F0 (AslPathClean.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140541990 (SdbpCreateSearchPathPartsFromPath.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1405567A8 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiGetDeviceRegProperty @ 0x1405573EC (PiGetDeviceRegProperty.c)
 *     PiSwFindSwDevice @ 0x14055E74C (PiSwFindSwDevice.c)
 *     LocalGetSDDLDeliminator @ 0x14057C7F8 (LocalGetSDDLDeliminator.c)
 *     PiNormalizeDeviceText @ 0x1405854E0 (PiNormalizeDeviceText.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14058FF54 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14059449C (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     EtwpGenerateFileName @ 0x14059E648 (EtwpGenerateFileName.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405A13E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405A24F0 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     BiCreatePartitionDevice @ 0x1405B0C38 (BiCreatePartitionDevice.c)
 *     MmCallDllInitialize @ 0x1405C90B8 (MmCallDllInitialize.c)
 *     LocalpConvertStringSidToSid @ 0x1405D73CC (LocalpConvertStringSidToSid.c)
 *     SepParseElamCertResources @ 0x1405D9C34 (SepParseElamCertResources.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405EA4A0 (_CmGetMatchingDeviceListForSubkey.c)
 *     PiGetDeviceRegistryProperty @ 0x1406BF5A8 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1406C9150 (PiDevCfgResolveVariableKeyHandle.c)
 *     SdbQueryDataExTagID @ 0x14076DCDC (SdbQueryDataExTagID.c)
 *     BiDoesHiveKeyExist @ 0x140779804 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x140779D84 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407865A0 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbValidateDeviceIdName @ 0x1407876F4 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x14078776C (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x1407877D0 (DrvDbValidateDriverInfFileName.c)
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
