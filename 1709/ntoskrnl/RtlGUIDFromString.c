/*
 * XREFs of RtlGUIDFromString @ 0x140525090
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14000F0D0 (PiDevCfgParsePropertyKeyName.c)
 *     RtlQueryPackageClaims @ 0x140019A60 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1401FF578 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1404522D8 (PiDevCfgConvertPropertyFromValue.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1405180E4 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14051C8E0 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14051D41C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x14051E570 (_CmValidateDeviceInterfaceName.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140522B4C (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x140524640 (PiDmCacheDataDecode.c)
 *     _PnpIsValidGuidString @ 0x1405263AC (_PnpIsValidGuidString.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14054F964 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     IoVolumeDeviceToGuid @ 0x140560600 (IoVolumeDeviceToGuid.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140571004 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PipGenerateContainerID @ 0x140593694 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405A0C10 (PiDevCfgResolveVariableDeviceProperty.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405A48C8 (_PnpGetGenericStorePropertyKeys.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405A8348 (EtwpEnableAutoLoggerProviders.c)
 *     EtwStartAutoLogger @ 0x1405A90A0 (EtwStartAutoLogger.c)
 *     WdipSemLoadNextContextProvider @ 0x1405A9B4C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1405A9DC4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadScenarioTable @ 0x1405AA0BC (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405AA3A8 (WdipSemLoadNextScenario.c)
 *     BiGetObjectIdentifier @ 0x1405AFE70 (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x1405B0050 (BiConvertRegistryDataToElement.c)
 *     PiDcInitUpdateProperties @ 0x1405C5CF0 (PiDcInitUpdateProperties.c)
 *     PnpIsValidGuidString @ 0x1405E9788 (PnpIsValidGuidString.c)
 *     IoVolumeDeviceNameToGuid @ 0x1406B9220 (IoVolumeDeviceNameToGuid.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1406C6A28 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x140733F54 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14073F4D4 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x1407597CC (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x140778C58 (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x14077A8C4 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14077AA54 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14077C3A8 (BiGetObjectReferenceFromEfiEntry.c)
 *     EmpParseEntryTypes @ 0x140833920 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140834760 (EmpInfParseGetGuidFromName.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x140525170 (ScanHexFormat.c)
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
