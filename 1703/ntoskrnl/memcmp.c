/*
 * XREFs of memcmp @ 0x14016A960
 * Callers:
 *     RtlAreNamesEqual @ 0x1400071B0 (RtlAreNamesEqual.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140031888 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1400350F0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     SepPotentialGlobalTableAttribute @ 0x140035648 (SepPotentialGlobalTableAttribute.c)
 *     RtlpOwnerAcesPresent @ 0x14003E400 (RtlpOwnerAcesPresent.c)
 *     RtlSidDominates @ 0x140064060 (RtlSidDominates.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140065AF0 (AuthzBasepFindSecurityAttributeValue.c)
 *     InsertEventEntryInLookUpTable @ 0x140081DE4 (InsertEventEntryInLookUpTable.c)
 *     RtlFindAceBySid @ 0x140087F40 (RtlFindAceBySid.c)
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SepMandatoryIntegrityCheck @ 0x14008E320 (SepMandatoryIntegrityCheck.c)
 *     SepNormalAccessCheck @ 0x140090270 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x140090C10 (SepMaximumAccessCheck.c)
 *     RtlSidHashLookup @ 0x1400938C0 (RtlSidHashLookup.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140115180 (RtlpIsNameInExpressionPrivate.c)
 *     IoRaiseInformationalHardError @ 0x1401F3E30 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1401F45FC (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x1402000B4 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x140263FB4 (AuthzBasepCompareOctetStringOperands.c)
 *     FsRtlNotifyFilterReportChange @ 0x140431400 (FsRtlNotifyFilterReportChange.c)
 *     EtwpCompareGuid @ 0x140443420 (EtwpCompareGuid.c)
 *     PiDcCompareUpdateProperties @ 0x140447150 (PiDcCompareUpdateProperties.c)
 *     ConstraintEval @ 0x14044A89C (ConstraintEval.c)
 *     SepSidInSidAndAttributes @ 0x14044C020 (SepSidInSidAndAttributes.c)
 *     PfSnEndProcessTrace @ 0x140454310 (PfSnEndProcessTrace.c)
 *     EtwpGenerateFileName @ 0x14045E0F4 (EtwpGenerateFileName.c)
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x140484FD0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140486114 (PiDmObjectUpdateCachedObjectProperty.c)
 *     MiVerifyImageHeader @ 0x140494BDC (MiVerifyImageHeader.c)
 *     ExQueryLicenseValueInternal @ 0x1404A7FE0 (ExQueryLicenseValueInternal.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     PropertyEval @ 0x1404BA130 (PropertyEval.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404BFD5C (CmpFindMatchingDescriptorCell.c)
 *     PnpProcessTargetDeviceEvent @ 0x1404DA3D8 (PnpProcessTargetDeviceEvent.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404DF1FC (PiDmObjectProcessPropertyChange.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404E6E2C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     ExpWnfFindScopeInstance @ 0x1404EE260 (ExpWnfFindScopeInstance.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404F257C (EtwpSetProviderTraitsCommon.c)
 *     ObLogSecurityDescriptor @ 0x14050E5E0 (ObLogSecurityDescriptor.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140563990 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140565270 (PfSnPrefetchCacheEntryGet.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14059481C (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405A5EB4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1405A61A8 (RtlpCheckDynamicTimeZoneInformation.c)
 *     PopApplyPolicy @ 0x1405C3850 (PopApplyPolicy.c)
 *     EtwpUpdateDisallowedGuids @ 0x1405C7CC4 (EtwpUpdateDisallowedGuids.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405D5F00 (TtmpDisplayBurstPowerSettingCallback.c)
 *     FsRtlIsDbcsInExpression @ 0x140685EC0 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x14069C3A0 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406A30E0 (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406B1264 (AlpcpEnterStateChangeEventMessageLog.c)
 *     PopEtAggregateFind @ 0x1406D0644 (PopEtAggregateFind.c)
 *     RtlFindUnicodeSubstring @ 0x1406E55C0 (RtlFindUnicodeSubstring.c)
 *     RtlReplaceSidInSd @ 0x1406E9BA0 (RtlReplaceSidInSd.c)
 *     RtlpInternEntryMatch @ 0x1406EFB14 (RtlpInternEntryMatch.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1406F5B50 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1406F82A0 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1406F8418 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14072B80C (SdbpCheckMatchingRegistryEntry.c)
 *     BiExportEfiBootManager @ 0x140737628 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140738988 (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x14076E350 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x14077F934 (ViCtxEqualExtendedState.c)
 *     CmpGetBiosDate @ 0x1407F7AD0 (CmpGetBiosDate.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1407F84FC (PipCheckSystemFirmwareUpdated.c)
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
    goto mcmp30;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
mcmp30:
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
        goto mcmp_adjust8;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto mcmp_adjust16;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
mcmp_adjust16:
        Buf1 = (char *)Buf1 + 8;
mcmp_adjust8:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto mcmp70;
      }
    }
  }
  else
  {
mcmp70:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto mcmp30;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto mcmp30;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
