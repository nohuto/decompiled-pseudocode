/*
 * XREFs of wcschr @ 0x14016BB40
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1401F96B8 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x14024D164 (SmUniqueIdParseProductName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14044EE88 (PiPnpRtlGetFilteredDeviceList.c)
 *     EtwpGenerateFileName @ 0x14045E0F4 (EtwpGenerateFileName.c)
 *     _CmGetDeviceRegPropWorker @ 0x140484810 (_CmGetDeviceRegPropWorker.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140486E48 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140488504 (DrvDbGetDeviceIdMappedProperty.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140489128 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _RegRtlCreateTreeTransacted @ 0x14048976C (_RegRtlCreateTreeTransacted.c)
 *     PiNormalizeDeviceText @ 0x1404DAC60 (PiNormalizeDeviceText.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1404E4920 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiGetDeviceRegProperty @ 0x14055B3C0 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14056C174 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiSwFindSwDevice @ 0x140570D30 (PiSwFindSwDevice.c)
 *     LocalGetSDDLDeliminator @ 0x14057FE9C (LocalGetSDDLDeliminator.c)
 *     MmCallDllInitialize @ 0x140586B80 (MmCallDllInitialize.c)
 *     BiCreatePartitionDevice @ 0x14058C52C (BiCreatePartitionDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14058FB54 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14059011C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     SepParseElamCertResources @ 0x14059BC24 (SepParseElamCertResources.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405A9B98 (_CmGetMatchingDeviceListForSubkey.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1405BC56C (SdbpCreateSearchPathPartsFromPath.c)
 *     AslPathClean @ 0x1405BC6D4 (AslPathClean.c)
 *     LocalpConvertStringSidToSid @ 0x1405C3DFC (LocalpConvertStringSidToSid.c)
 *     PiGetDeviceRegistryProperty @ 0x1406938D8 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14069DC50 (PiDevCfgResolveVariableKeyHandle.c)
 *     SdbQueryDataExTagID @ 0x14072AFB4 (SdbQueryDataExTagID.c)
 *     BiDoesHiveKeyExist @ 0x140735548 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x140735940 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140743E28 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x140745218 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140745290 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x1407452F4 (DrvDbValidateDriverInfFileName.c)
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
