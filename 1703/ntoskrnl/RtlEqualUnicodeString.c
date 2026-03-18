/*
 * XREFs of RtlEqualUnicodeString @ 0x1404F7D80
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140067040 (RtlDeriveCapabilitySidsFromName.c)
 *     AuthzBasepEqualUnicodeString @ 0x140089584 (AuthzBasepEqualUnicodeString.c)
 *     SeSecurityAttributePresent @ 0x14008A320 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14008A4C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14008A590 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1401157FC (AuthzBasepCompareUnicodeStringOperands.c)
 *     PnpMultiSzContainsString @ 0x14014FC94 (PnpMultiSzContainsString.c)
 *     PopEmModuleAddressMatchCallback @ 0x140236D20 (PopEmModuleAddressMatchCallback.c)
 *     PipFindDeviceOverrideEntry @ 0x14044655C (PipFindDeviceOverrideEntry.c)
 *     IopDeviceInterfaceFilterCallback @ 0x140447190 (IopDeviceInterfaceFilterCallback.c)
 *     DrvDbFindDatabaseNode @ 0x14044C7CC (DrvDbFindDatabaseNode.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140461F4C (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1404622D8 (SepValidateReferencedCachedHandles.c)
 *     ExpHwidProcessInterface @ 0x1404631DC (ExpHwidProcessInterface.c)
 *     sub_140463398 @ 0x140463398 (sub_140463398.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140464DF0 (PiUEventQueueBroadcastEventEntry.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     MiUseLargeDriverPage @ 0x1404B0F54 (MiUseLargeDriverPage.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     _CmIsRootDevice @ 0x1404E645C (_CmIsRootDevice.c)
 *     SepIsImageInMinTcbList @ 0x1404F70A4 (SepIsImageInMinTcbList.c)
 *     ObpLookupDirectoryUsingHash @ 0x1404F7410 (ObpLookupDirectoryUsingHash.c)
 *     MiObtainSectionForDriver @ 0x1404F7528 (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     SepIsNgenImage @ 0x140545D34 (SepIsNgenImage.c)
 *     EtwpLookupLoggerIdByName @ 0x14054F2BC (EtwpLookupLoggerIdByName.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140551788 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140551A2C (EtwpAcquireLoggerContextByLoggerName.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14058E87C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14059011C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgResolveVariable @ 0x140594210 (PiDevCfgResolveVariable.c)
 *     PiFindDevInstMatch @ 0x14059CC04 (PiFindDevInstMatch.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405AAA10 (_CmDeviceClassesSubkeyCallback.c)
 *     AdtpLookupDriveLetter @ 0x1405ABED0 (AdtpLookupDriveLetter.c)
 *     IopIsReportedAlready @ 0x1405B0350 (IopIsReportedAlready.c)
 *     PipQueryBindingResolution @ 0x1405BF204 (PipQueryBindingResolution.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1405D1394 (PiRemoveDeferredSetInterfaceState.c)
 *     KsepCacheDeviceQueryData @ 0x1405D8F44 (KsepCacheDeviceQueryData.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14067A844 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpCreateNamespaceNode @ 0x14067AF54 (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14067DC08 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PipAddRequestToEdge @ 0x140692B10 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x140692F48 (PipDeleteBindingId.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1406970F0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140698E74 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PopBatteryDeviceState @ 0x1406CA30C (PopBatteryDeviceState.c)
 *     PspAssignSiloSystemRootPath @ 0x1406DE660 (PspAssignSiloSystemRootPath.c)
 *     PspIdentityBasedJobBreakaway @ 0x1406E0D48 (PspIdentityBasedJobBreakaway.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1406EBB90 (RtlpGetNtProductTypeFromRegistry.c)
 *     SepAppContainerAceProtectionApplies @ 0x1406F8774 (SepAppContainerAceProtectionApplies.c)
 *     ExpFindArcName @ 0x1407193A4 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x140733FA4 (AdtpBuildAccessesString.c)
 *     _CmClassFilterCallback @ 0x14073E0A0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x14073E410 (_CmServiceFilterCallback.c)
 *     VfDriverLoadImage @ 0x140761DB4 (VfDriverLoadImage.c)
 *     ViIsDriverSuspectForVerifier @ 0x14076250C (ViIsDriverSuspectForVerifier.c)
 *     VfUtilIsProtectedDriver @ 0x1407652EC (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140767064 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x14076742C (ViDriverReApplyVerifierForAll.c)
 *     VfCheckUserHandle @ 0x1407767AC (VfCheckUserHandle.c)
 *     VfSuspectDriversLoadCallback @ 0x14077B740 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x14077BB48 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x14077BD04 (ViSuspectDriversLookupEntry.c)
 *     ViFilterIsDeviceExcluded @ 0x140780E98 (ViFilterIsDeviceExcluded.c)
 *     VfAddVerifierEntry @ 0x140787E8C (VfAddVerifierEntry.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 *     PnpLoadBootFilterDriver @ 0x1407F6F4C (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x1407FA084 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x1407FA1E8 (PipLookupGroupName.c)
 *     CmpDoSort @ 0x14080DB70 (CmpDoSort.c)
 *     ViInitSystemPhase0 @ 0x140812964 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  wchar_t *Buffer; // r9
  wchar_t *v6; // r10
  wchar_t *v7; // rdx
  signed __int64 v8; // r10
  unsigned int v9; // r8d
  unsigned int v10; // r11d

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
