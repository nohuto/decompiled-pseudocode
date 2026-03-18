/*
 * XREFs of memcmp @ 0x14015F370
 * Callers:
 *     RtlpOwnerAcesPresent @ 0x1400154F0 (RtlpOwnerAcesPresent.c)
 *     SepPotentialGlobalTableAttribute @ 0x1400155EC (SepPotentialGlobalTableAttribute.c)
 *     RtlFindAceBySid @ 0x140019110 (RtlFindAceBySid.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14001A630 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlSidHashLookup @ 0x14006A190 (RtlSidHashLookup.c)
 *     SepMaximumAccessCheck @ 0x14007D5C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14007DC40 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SepMandatoryIntegrityCheck @ 0x14007EFF0 (SepMandatoryIntegrityCheck.c)
 *     RtlSidDominates @ 0x140087AD0 (RtlSidDominates.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     InsertEventEntryInLookUpTable @ 0x1400BA53C (InsertEventEntryInLookUpTable.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400E5B10 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x1401021D0 (RtlAreNamesEqual.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140127E8C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     IoRaiseInformationalHardError @ 0x1401F9810 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1401FA17C (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x140206534 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140267F20 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14028E2E0 (AuthzBasepCompareOctetStringOperands.c)
 *     FsRtlNotifyFilterReportChange @ 0x14044CD00 (FsRtlNotifyFilterReportChange.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140452FF8 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140453714 (PfSnPrefetchCacheEntryGet.c)
 *     PfSnEndProcessTrace @ 0x140455060 (PfSnEndProcessTrace.c)
 *     PopEtAggregateFind @ 0x1404585D8 (PopEtAggregateFind.c)
 *     RtlpInternEntryMatch @ 0x1404594E0 (RtlpInternEntryMatch.c)
 *     SepSidInSidAndAttributes @ 0x14045AC68 (SepSidInSidAndAttributes.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404773FC (CmpFindMatchingDescriptorCell.c)
 *     RtlFindUnicodeSubstring @ 0x1404774F0 (RtlFindUnicodeSubstring.c)
 *     TraitsCompare @ 0x14048EA54 (TraitsCompare.c)
 *     ObLogSecurityDescriptor @ 0x1404BFD80 (ObLogSecurityDescriptor.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     MiVerifyImageHeader @ 0x1404FB054 (MiVerifyImageHeader.c)
 *     ExpWnfFindScopeInstance @ 0x140503550 (ExpWnfFindScopeInstance.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405232C0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140524280 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectProcessPropertyChange @ 0x140528FC4 (PiDmObjectProcessPropertyChange.c)
 *     PropertyEval @ 0x140529FE0 (PropertyEval.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     SPCallServerHandleQueryPolicy @ 0x140536700 (SPCallServerHandleQueryPolicy.c)
 *     ExQueryLicenseValueInternal @ 0x140537F50 (ExQueryLicenseValueInternal.c)
 *     PnpProcessTargetDeviceEvent @ 0x14054DF70 (PnpProcessTargetDeviceEvent.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14054F964 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     ConstraintEval @ 0x140580B24 (ConstraintEval.c)
 *     PiDcCompareUpdateProperties @ 0x140584950 (PiDcCompareUpdateProperties.c)
 *     EtwpGenerateFileName @ 0x14059E648 (EtwpGenerateFileName.c)
 *     PopApplyPolicy @ 0x1405B9210 (PopApplyPolicy.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405C25EC (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1405C28E0 (RtlpCheckDynamicTimeZoneInformation.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1405E6FC0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405EA090 (TtmpDisplayBurstPowerSettingCallback.c)
 *     FsRtlIsDbcsInExpression @ 0x1406B12D0 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x1406C78A0 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406CDBB4 (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406DCE44 (AlpcpEnterStateChangeEventMessageLog.c)
 *     RtlReplaceSidInSd @ 0x140721AB0 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x14072CC70 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x14072D59C (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x14072FE70 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x14072FFF0 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x140751C10 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x140751C2C (EtwpUpdateDisallowedGuids.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14076E53C (SdbpCheckMatchingRegistryEntry.c)
 *     BiExportEfiBootManager @ 0x14077BC44 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x14077D100 (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x1407B0018 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x1407C1914 (ViCtxEqualExtendedState.c)
 *     CmpGetBiosDate @ 0x14083B9BC (CmpGetBiosDate.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140845294 (PipCheckSystemFirmwareUpdated.c)
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
