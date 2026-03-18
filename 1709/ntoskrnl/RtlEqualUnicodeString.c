/*
 * XREFs of RtlEqualUnicodeString @ 0x140483080
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140016D80 (AuthzBasepCompareUnicodeStringOperands.c)
 *     SeSecurityAttributePresent @ 0x140018280 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140018420 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140018500 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepEqualUnicodeString @ 0x140018C50 (AuthzBasepEqualUnicodeString.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400FA7B0 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x1401330EC (PnpMultiSzContainsString.c)
 *     PopEmModuleAddressMatchCallback @ 0x14024BF30 (PopEmModuleAddressMatchCallback.c)
 *     KseHookQueryValueKey @ 0x14043CBB0 (KseHookQueryValueKey.c)
 *     PipFindDeviceOverrideEntry @ 0x14044E8AC (PipFindDeviceOverrideEntry.c)
 *     DrvDbFindDatabaseNode @ 0x140459D40 (DrvDbFindDatabaseNode.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404ED968 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404EDB70 (EtwpGetLoggerInfoFromContext.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14051B940 (PiPnpRtlServiceFilterCallback.c)
 *     SepIsNgenImage @ 0x14053A4C8 (SepIsNgenImage.c)
 *     SepIsMinTCB @ 0x14053AAD0 (SepIsMinTCB.c)
 *     MiUseLargeDriverPage @ 0x140542AC8 (MiUseLargeDriverPage.c)
 *     MiObtainSectionForDriver @ 0x140543848 (MiObtainSectionForDriver.c)
 *     _CmIsRootDevice @ 0x140551BE8 (_CmIsRootDevice.c)
 *     PiFindDevInstMatch @ 0x140555C60 (PiFindDevInstMatch.c)
 *     ExpHwidProcessInterface @ 0x14055F97C (ExpHwidProcessInterface.c)
 *     sub_14055FB34 @ 0x14055FB34 (sub_14055FB34.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140563E30 (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x1405641B4 (SepValidateReferencedCachedHandles.c)
 *     ObpLookupDirectoryUsingHash @ 0x14056ED60 (ObpLookupDirectoryUsingHash.c)
 *     SepIsImageInMinTcbList @ 0x140580228 (SepIsImageInMinTcbList.c)
 *     IopDeviceInterfaceFilterCallback @ 0x140585240 (IopDeviceInterfaceFilterCallback.c)
 *     EtwpLookupLoggerIdByName @ 0x14058B484 (EtwpLookupLoggerIdByName.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140596BA4 (PiUEventQueueBroadcastEventEntry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1405A0790 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x1405A096C (PiDevCfgResolveVariable.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405A13E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405A24F0 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405A3E50 (PiDevCfgLogDeviceConfigured.c)
 *     AdtpLookupDriveLetter @ 0x1405D0DD4 (AdtpLookupDriveLetter.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405D18F0 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x1405D2510 (PipQueryBindingResolution.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1405D25B4 (RtlpGetNtProductTypeFromRegistry.c)
 *     IopIsReportedAlready @ 0x1405DFBE0 (IopIsReportedAlready.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1405E2228 (PiRemoveDeferredSetInterfaceState.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1406A4F90 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpCreateNamespaceNode @ 0x1406A56CC (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1406A8C94 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PipAddRequestToEdge @ 0x1406BE7C0 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x1406BEBF8 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1406C4CA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     KsepCacheDeviceQueryData @ 0x1406DB870 (KsepCacheDeviceQueryData.c)
 *     PopBatteryDeviceState @ 0x1406FE138 (PopBatteryDeviceState.c)
 *     PspIdentityBasedJobBreakaway @ 0x140717048 (PspIdentityBasedJobBreakaway.c)
 *     ExpFindArcName @ 0x140758BA4 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x140778114 (AdtpBuildAccessesString.c)
 *     _CmClassFilterCallback @ 0x140782550 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1407828C0 (_CmServiceFilterCallback.c)
 *     VfDriverLoadImage @ 0x1407A2174 (VfDriverLoadImage.c)
 *     ViIsDriverSuspectForVerifier @ 0x1407A24EC (ViIsDriverSuspectForVerifier.c)
 *     VfUtilIsProtectedDriver @ 0x1407A6EBC (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x1407A8C08 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x1407A8FD8 (ViDriverReApplyVerifierForAll.c)
 *     VfCheckUserHandle @ 0x1407B85A8 (VfCheckUserHandle.c)
 *     VfSuspectDriversLoadCallback @ 0x1407BD64C (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1407BDA54 (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x1407BDC10 (ViSuspectDriversLookupEntry.c)
 *     ViFilterIsDeviceExcluded @ 0x1407C3048 (ViFilterIsDeviceExcluded.c)
 *     VfAddVerifierEntry @ 0x1407CA2F4 (VfAddVerifierEntry.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     CmpDoSort @ 0x140835E04 (CmpDoSort.c)
 *     PpInitGetGroupOrderIndex @ 0x140846D6C (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140846EC0 (PipLookupGroupName.c)
 *     ViInitSystemPhase0 @ 0x140848008 (ViInitSystemPhase0.c)
 *     PnpLoadBootFilterDriver @ 0x14084E29C (PnpLoadBootFilterDriver.c)
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
