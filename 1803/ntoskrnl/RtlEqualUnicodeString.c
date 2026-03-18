/*
 * XREFs of RtlEqualUnicodeString @ 0x1404C91A0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140044640 (AuthzBasepCompareUnicodeStringOperands.c)
 *     SeSecurityAttributePresent @ 0x14005F990 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14005FB30 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14005FC10 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepEqualUnicodeString @ 0x14006C420 (AuthzBasepEqualUnicodeString.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14009FD90 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x140163168 (PnpMultiSzContainsString.c)
 *     PopEmModuleAddressMatchCallback @ 0x140281EB0 (PopEmModuleAddressMatchCallback.c)
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     SepIsMinTCB @ 0x1404F4270 (SepIsMinTCB.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14053F64C (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x14053FA28 (SepValidateReferencedCachedHandles.c)
 *     ObpLookupDirectoryUsingHash @ 0x140558498 (ObpLookupDirectoryUsingHash.c)
 *     SepIsImageInMinTcbList @ 0x14056EA44 (SepIsImageInMinTcbList.c)
 *     IopDeviceInterfaceFilterCallback @ 0x140573630 (IopDeviceInterfaceFilterCallback.c)
 *     DrvDbFindDatabaseNode @ 0x14057511C (DrvDbFindDatabaseNode.c)
 *     SepIsNgenImage @ 0x14057689C (SepIsNgenImage.c)
 *     _CmIsRootDevice @ 0x140586738 (_CmIsRootDevice.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14058B16C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpLookupLoggerIdByName @ 0x14058DBC4 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14058E3AC (EtwpAcquireLoggerContextByLoggerName.c)
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405D60B0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405D749C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405DA154 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveVariable @ 0x1405DA3E0 (PiDevCfgResolveVariable.c)
 *     PipFindDeviceOverrideEntry @ 0x1405DE35C (PipFindDeviceOverrideEntry.c)
 *     ExpHwidProcessInterface @ 0x1405E34B0 (ExpHwidProcessInterface.c)
 *     sub_1405E366C @ 0x1405E366C (sub_1405E366C.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1405E54D8 (PiUEventQueueBroadcastEventEntry.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1405F0D00 (PiPnpRtlServiceFilterCallback.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1405F1140 (RtlpGetNtProductTypeFromRegistry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1405F2760 (PiDevCfgResolveMultiSzValue.c)
 *     PiFindDevInstMatch @ 0x1405F79D4 (PiFindDevInstMatch.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     MiObtainSectionForDriver @ 0x1405FA21C (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 *     IopQueryRegistryKeySystemPath @ 0x1405FB93C (IopQueryRegistryKeySystemPath.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140605260 (PiRemoveDeferredSetInterfaceState.c)
 *     KsepCacheDeviceQueryData @ 0x14061DDA0 (KsepCacheDeviceQueryData.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140637FB0 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x14063BA2C (PipQueryBindingResolution.c)
 *     AdtpLookupDriveLetter @ 0x14063D58C (AdtpLookupDriveLetter.c)
 *     IopIsReportedAlready @ 0x140648750 (IopIsReportedAlready.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1407095E8 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpCreateNamespaceNode @ 0x140709D4C (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x14070B60C (VrpPreLoadKey.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14070D34C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PipAddRequestToEdge @ 0x14072382C (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x140723AA4 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072B048 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     KseHookQueryValueKey @ 0x140746E60 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1407639B8 (PopBatteryDeviceState.c)
 *     PspIdentityBasedJobBreakaway @ 0x14077AFF0 (PspIdentityBasedJobBreakaway.c)
 *     ExpFindArcName @ 0x1407BF834 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x1407E0E98 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x1407E6C80 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x1407EB5F0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1407EB960 (_CmServiceFilterCallback.c)
 *     VfDriverLoadImage @ 0x14080EEBC (VfDriverLoadImage.c)
 *     ViIsDriverSuspectForVerifier @ 0x14080F52C (ViIsDriverSuspectForVerifier.c)
 *     VfUtilIsProtectedDriver @ 0x14081403C (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140815C38 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x140816010 (ViDriverReApplyVerifierForAll.c)
 *     VfCheckUserHandle @ 0x140825800 (VfCheckUserHandle.c)
 *     VfSuspectDriversLoadCallback @ 0x14082A9EC (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x14082AE04 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x14082AFC8 (ViSuspectDriversLookupEntry.c)
 *     ViFilterIsDeviceExcluded @ 0x1408305C8 (ViFilterIsDeviceExcluded.c)
 *     VfAddVerifierEntry @ 0x140837854 (VfAddVerifierEntry.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 *     CmpCreateHardwareProfiles @ 0x1408AE8A8 (CmpCreateHardwareProfiles.c)
 *     PnpLoadBootFilterDriver @ 0x1408B3768 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x1408B6C10 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x1408B6D64 (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x1408B7D44 (CmGetSystemDriverList.c)
 *     CmpDoSort @ 0x1408B8608 (CmpDoSort.c)
 *     ViInitSystemPhase0 @ 0x1408C58B4 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  wchar_t *Buffer; // r9
  wchar_t *v6; // r10
  wchar_t *v7; // rdi
  signed __int64 v8; // r10
  unsigned int v9; // r11d
  unsigned int v10; // ebx

  Length = String1->Length;
  if ( (_DWORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v6 = String2->Buffer;
  v7 = (wchar_t *)((char *)Buffer + Length);
  if ( (unsigned int)Length >= 8 )
  {
    while ( *(_QWORD *)Buffer == *(_QWORD *)v6 )
    {
      LODWORD(Length) = Length - 8;
      if ( !(_DWORD)Length )
        return 1;
      Buffer += 4;
      v6 += 4;
      if ( (unsigned int)Length < 8 )
        break;
    }
  }
  if ( !CaseInSensitive )
  {
    if ( Buffer < v7 )
    {
      while ( *Buffer == *v6 )
      {
        ++Buffer;
        ++v6;
        if ( Buffer >= v7 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  if ( Buffer >= v7 )
    return 1;
  v8 = (char *)v6 - (char *)Buffer;
  while ( 1 )
  {
    v9 = *Buffer;
    v10 = *(wchar_t *)((char *)Buffer + v8);
    if ( v9 != v10 )
    {
      if ( v9 >= 0x61 )
      {
        if ( v9 > 0x7A )
          v9 = (unsigned __int16)(v9
                                + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v9 & 0xF)
                                                                                          + 2
                                                                                          * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v9 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v9)]]]);
        else
          v9 -= 32;
      }
      if ( v10 >= 0x61 )
      {
        if ( v10 > 0x7A )
          v10 = (unsigned __int16)(v10
                                 + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v10 & 0xF)
                                                                                           + 2
                                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v10 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v10)]]]);
        else
          v10 -= 32;
      }
      if ( v9 != v10 )
        break;
    }
    if ( ++Buffer >= v7 )
      return 1;
  }
  return 0;
}
