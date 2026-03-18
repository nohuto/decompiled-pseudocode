/*
 * XREFs of RtlGUIDFromString @ 0x140487DD0
 * Callers:
 *     RtlQueryPackageClaims @ 0x140088710 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1401F961C (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1401F96B8 (PiDevCfgParsePropertyKeyName.c)
 *     PipGenerateContainerID @ 0x140453598 (PipGenerateContainerID.c)
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140484D1C (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x140486324 (PiDmCacheDataDecode.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404878A0 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14048873C (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140489128 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1404E16A4 (_CmGetDeviceInterfaceClassGuid.c)
 *     _PnpIsValidGuidString @ 0x1404E2A40 (_PnpIsValidGuidString.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1404E4218 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404E6E2C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     EtwStartAutoLogger @ 0x140555730 (EtwStartAutoLogger.c)
 *     IoVolumeDeviceToGuid @ 0x140570E10 (IoVolumeDeviceToGuid.c)
 *     BiGetObjectIdentifier @ 0x14058BC30 (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x14058C244 (BiConvertRegistryDataToElement.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14059365C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405944B0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PnpIsValidGuidString @ 0x14059B500 (PnpIsValidGuidString.c)
 *     PiDcInitUpdateProperties @ 0x14059DB24 (PiDcInitUpdateProperties.c)
 *     WdipSemLoadScenarioTable @ 0x1405ADC7C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405ADF68 (WdipSemLoadNextScenario.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405AE838 (EtwpEnableAutoLoggerProviders.c)
 *     WdipSemLoadNextEndEvent @ 0x1405C9FD8 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1405CA6D0 (WdipSemLoadNextContextProvider.c)
 *     IoVolumeDeviceNameToGuid @ 0x14068D170 (IoVolumeDeviceNameToGuid.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1406997F8 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14069AE04 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x1406FC564 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140705E00 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x140719F30 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x1407349D0 (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x1407363F8 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14073655C (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140737D3C (BiGetObjectReferenceFromEfiEntry.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     EmpParseEntryTypes @ 0x1408055B4 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1408063F0 (EmpInfParseGetGuidFromName.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x140487EC0 (ScanHexFormat.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  unsigned int v3; // edx
  unsigned __int8 *Data4; // r8
  unsigned __int8 *v5; // rax
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
    *Data4++ = *v5;
    v5 += 2;
  }
  while ( v3 < 8 );
  return 0;
}
