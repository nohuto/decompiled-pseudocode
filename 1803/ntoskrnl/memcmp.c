/*
 * XREFs of memcmp @ 0x140189130
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x140043FF0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlFindAceBySid @ 0x14005C220 (RtlFindAceBySid.c)
 *     RtlSidDominates @ 0x14005CC30 (RtlSidDominates.c)
 *     RtlSidHashLookup @ 0x14005E820 (RtlSidHashLookup.c)
 *     SepMaximumAccessCheck @ 0x14005EAA0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14005F060 (SepNormalAccessCheck.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14006C17C (AuthzBasepFindSecurityAttributeValue.c)
 *     InsertEventEntryInLookUpTable @ 0x14006F1E0 (InsertEventEntryInLookUpTable.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140099680 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     SepPotentialGlobalTableAttribute @ 0x1400A0A98 (SepPotentialGlobalTableAttribute.c)
 *     RtlAreNamesEqual @ 0x1400A6930 (RtlAreNamesEqual.c)
 *     RtlpOwnerAcesPresent @ 0x1400AAD70 (RtlpOwnerAcesPresent.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1400C7664 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1400C8880 (IopIsKnownGoodLegacyFsFilter.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x1401018A0 (SepMandatoryIntegrityCheck.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     IoRaiseInformationalHardError @ 0x140236B00 (IoRaiseInformationalHardError.c)
 *     KiDisplayBlueScreen @ 0x140243D14 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1402C3F5C (AuthzBasepCompareOctetStringOperands.c)
 *     PfSnEndProcessTrace @ 0x14048C130 (PfSnEndProcessTrace.c)
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x14048E478 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnPrefetchCacheEntryGet @ 0x14048EBF8 (PfSnPrefetchCacheEntryGet.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404A0A60 (CmpFindMatchingDescriptorCell.c)
 *     SPCallServerHandleQueryPolicy @ 0x1404AFD24 (SPCallServerHandleQueryPolicy.c)
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     ObLogSecurityDescriptor @ 0x1404C6E50 (ObLogSecurityDescriptor.c)
 *     RtlFindUnicodeSubstring @ 0x1404E1CE0 (RtlFindUnicodeSubstring.c)
 *     ExpWnfFindScopeInstance @ 0x1404F79CC (ExpWnfFindScopeInstance.c)
 *     PropertyEval @ 0x1404FDEB8 (PropertyEval.c)
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x140506EC0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140507E74 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PopEtAggregateFind @ 0x140537A74 (PopEtAggregateFind.c)
 *     SepSidInSidAndAttributes @ 0x140547488 (SepSidInSidAndAttributes.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     ExQueryLicenseValueInternal @ 0x140549360 (ExQueryLicenseValueInternal.c)
 *     RtlpInternEntryMatch @ 0x14055A338 (RtlpInternEntryMatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x14055A7D0 (FsRtlNotifyFilterReportChange.c)
 *     ConstraintEval @ 0x14056C1DC (ConstraintEval.c)
 *     MiVerifyImageHeader @ 0x14056E46C (MiVerifyImageHeader.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140584DD4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     EtwpGenerateFileName @ 0x1405878D8 (EtwpGenerateFileName.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     TraitsCompare @ 0x140591264 (TraitsCompare.c)
 *     PnpProcessTargetDeviceEvent @ 0x1405CB290 (PnpProcessTargetDeviceEvent.c)
 *     PiDmObjectProcessPropertyChange @ 0x1405D2E6C (PiDmObjectProcessPropertyChange.c)
 *     PiDcCompareUpdateProperties @ 0x1405E2A20 (PiDcCompareUpdateProperties.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1405F29E4 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PopApplyPolicy @ 0x140626324 (PopApplyPolicy.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1406300CC (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1406303C0 (RtlpCheckDynamicTimeZoneInformation.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140653570 (TtmpDisplayBurstPowerSettingCallback.c)
 *     FsRtlIsDbcsInExpression @ 0x140715DC0 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x14072E820 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140735320 (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140747B64 (AlpcpEnterStateChangeEventMessageLog.c)
 *     RtlReplaceSidInSd @ 0x140785250 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x140790F20 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140791850 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x140793DE0 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140793F60 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x1407B2A10 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x1407B2A2C (EtwpUpdateDisallowedGuids.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1407D5878 (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x1407E4690 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x1407E5BDC (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x14081D1C4 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x14082EE54 (ViCtxEqualExtendedState.c)
 *     CmpGetBiosDate @ 0x1408AFBF8 (CmpGetBiosDate.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1408B4D64 (PipCheckSystemFirmwareUpdated.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
