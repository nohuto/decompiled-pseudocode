/*
 * XREFs of RtlGUIDFromString @ 0x140508E70
 * Callers:
 *     RtlQueryPackageClaims @ 0x14006E850 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x14023BFAC (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14023C034 (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14028E630 (RtlRaiseCustomSystemEventTrigger.c)
 *     IoVolumeDeviceToGuid @ 0x140495D70 (IoVolumeDeviceToGuid.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140504998 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 *     _CmValidateDeviceInterfaceName @ 0x140505D30 (_CmValidateDeviceInterfaceName.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140506908 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x140507D4C (PiDmCacheDataDecode.c)
 *     _PnpIsValidGuidString @ 0x14050A93C (_PnpIsValidGuidString.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14050AE00 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140565484 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140584DD4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1405BE6D8 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405DA1C0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405DB02C (_PnpGetGenericStorePropertyKeys.c)
 *     PipGenerateContainerID @ 0x1405E6814 (PipGenerateContainerID.c)
 *     PnpIsValidGuidString @ 0x1405E8AC4 (PnpIsValidGuidString.c)
 *     BiGetObjectIdentifier @ 0x140609058 (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x140609628 (BiConvertRegistryDataToElement.c)
 *     PiDcInitUpdateProperties @ 0x140622D70 (PiDcInitUpdateProperties.c)
 *     EtwpEnableAutoLoggerProviders @ 0x14062A638 (EtwpEnableAutoLoggerProviders.c)
 *     _CmSplitDevicePanelId @ 0x1406371E4 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140638910 (_CmDevicePanelEnumSubkeyCallback.c)
 *     WdipSemLoadNextEndEvent @ 0x140639574 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14063986C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140639AE4 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140639ECC (WdipSemLoadNextScenario.c)
 *     EtwStartAutoLogger @ 0x14063DF10 (EtwStartAutoLogger.c)
 *     IoVolumeDeviceNameToGuid @ 0x14071DDF0 (IoVolumeDeviceNameToGuid.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14072BBA4 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14072BF1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14072D4C4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x1407977FC (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1407A1848 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x1407C06C0 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x1407E18C4 (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x1407E32B0 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1407E3440 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1407E4DF4 (BiGetObjectReferenceFromEfiEntry.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     EmpParseEntryTypes @ 0x1408A9B4C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1408AA96C (EmpInfParseGetGuidFromName.c)
 *     PipResetDevice @ 0x1408DF0B8 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x140508F50 (ScanHexFormat.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  unsigned int v3; // ecx
  unsigned __int8 *Data4; // rdx
  unsigned __int8 *v5; // r8
  __int64 v7; // [rsp+70h] [rbp-28h] BYREF
  __int64 v8; // [rsp+78h] [rbp-20h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       GuidString->Buffer,
                       GuidString->Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       &Guid->Data2,
                       &Guid->Data3,
                       &v7,
                       (char *)&v7 + 2,
                       (char *)&v7 + 4,
                       (char *)&v7 + 6,
                       &v8,
                       (char *)&v8 + 2,
                       (char *)&v8 + 4,
                       (char *)&v8 + 6) == -1 )
    return -1073741811;
  v3 = 0;
  Data4 = Guid->Data4;
  v5 = (unsigned __int8 *)&v7;
  do
  {
    ++v3;
    *Data4 = *v5;
    v5 += 2;
    ++Data4;
  }
  while ( v3 < 8 );
  return 0;
}
