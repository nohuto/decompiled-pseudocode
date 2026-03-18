/*
 * XREFs of RtlCompareUnicodeString @ 0x140427380
 * Callers:
 *     FsRtlCompareNodeAndKey @ 0x14000CD4C (FsRtlCompareNodeAndKey.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1401157FC (AuthzBasepCompareUnicodeStringOperands.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14015EFF8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     KsepCacheHwIdEqual @ 0x140164E30 (KsepCacheHwIdEqual.c)
 *     IopEliminateBogusConflict @ 0x1401FB444 (IopEliminateBogusConflict.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140246E14 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x14041CCF0 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x140426E70 (PiSwBusRelationsCompareInstancePath.c)
 *     PiCompareDDBCacheEntries @ 0x140426EA0 (PiCompareDDBCacheEntries.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140443CEC (RtlpProcessIFEOKeyFilter.c)
 *     CmpFindNameInListCellWithStatus @ 0x140490670 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1404D2F90 (CmpDoCompareKeyName.c)
 *     CmpFindSubKeyInRoot @ 0x1405016A0 (CmpFindSubKeyInRoot.c)
 *     CmpCompareInIndex @ 0x140501AE0 (CmpCompareInIndex.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmpCheckRegistry2 @ 0x140505E80 (CmpCheckRegistry2.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140585CD8 (ExCovReadjustUnloadedModuleEntry.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PopConnectToPolicyDevice @ 0x1405D67E8 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x1405DAA40 (KsepCacheDeviceEqual.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14069C3A0 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x1406AA0D8 (IopExecuteHardwareProfileChange.c)
 *     SepAdtStagingEvent @ 0x1406F3EE0 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1406F462C (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x1406F93F8 (SepRmGlobalSaclFind.c)
 *     ExpCovIsModulePresent @ 0x14071F614 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x14071F6EC (ExpCovQueryHypervisorInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1407F75EC (CmpSetSystemBiosInformation.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x140819DA8 (KiHwPolicyFindDriverImage.c)
 * Callees:
 *     <none>
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // rax
  wchar_t *v4; // r11
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  wchar_t *v8; // r10
  signed __int64 v9; // r11
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  signed __int64 v13; // r11
  int v14; // ecx
  int v15; // edx

  Buffer = String1->Buffer;
  v4 = String2->Buffer;
  v5 = (unsigned __int64)String1->Length >> 1;
  v6 = (unsigned __int64)String2->Length >> 1;
  v7 = v6;
  if ( v5 <= v6 )
    v7 = v5;
  v8 = &Buffer[v7];
  if ( CaseInSensitive )
  {
    if ( Buffer < v8 )
    {
      v9 = (char *)v4 - (char *)Buffer;
      while ( 1 )
      {
        v10 = *Buffer;
        v11 = *(wchar_t *)((char *)Buffer + v9);
        if ( v10 != v11 )
        {
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
          if ( v11 >= 0x61 )
          {
            if ( v11 > 0x7A )
              v11 = (unsigned __int16)(v11
                                     + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v11 & 0xF)
                                                                                               + 2
                                                                                               * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v11 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v11)]]]);
            else
              v11 -= 32;
          }
          if ( v10 != v11 )
            break;
        }
        if ( ++Buffer >= v8 )
          return v5 - v6;
      }
      return v10 - v11;
    }
    return v5 - v6;
  }
  if ( Buffer >= v8 )
    return v5 - v6;
  v13 = (char *)v4 - (char *)Buffer;
  while ( 1 )
  {
    v14 = *Buffer;
    v15 = *(wchar_t *)((char *)Buffer + v13);
    if ( v14 != v15 )
      break;
    if ( ++Buffer >= v8 )
      return v5 - v6;
  }
  return v14 - v15;
}
