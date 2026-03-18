/*
 * XREFs of RtlCompareUnicodeString @ 0x140523C80
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140016D80 (AuthzBasepCompareUnicodeStringOperands.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1400FE7B8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     FsRtlCompareNodeAndKey @ 0x1401051B4 (FsRtlCompareNodeAndKey.c)
 *     KsepCacheHwIdEqual @ 0x14012FF40 (KsepCacheHwIdEqual.c)
 *     IopEliminateBogusConflict @ 0x14020114C (IopEliminateBogusConflict.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14025E54C (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     CmpFindNameInListCellWithStatus @ 0x140479530 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x140481960 (CmpDoCompareKeyName.c)
 *     PnpCompareInstancePath @ 0x140523C50 (PnpCompareInstancePath.c)
 *     CmpCheckLexicographicalOrder @ 0x140564F40 (CmpCheckLexicographicalOrder.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14057E480 (RtlpProcessIFEOKeyFilter.c)
 *     PiCompareDDBCacheEntries @ 0x14058CB90 (PiCompareDDBCacheEntries.c)
 *     PopAvlComparePowerRequestKeys @ 0x1405961F0 (PopAvlComparePowerRequestKeys.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x14059D660 (PiSwBusRelationsCompareInstancePath.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14059F120 (ExCovReadjustUnloadedModuleEntry.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x14069C2E0 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x1406C78A0 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x1406D4FB8 (IopExecuteHardwareProfileChange.c)
 *     KsepCacheDeviceEqual @ 0x1406DB760 (KsepCacheDeviceEqual.c)
 *     PopConnectToPolicyDevice @ 0x140706CAC (PopConnectToPolicyDevice.c)
 *     SepAdtStagingEvent @ 0x14072B970 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x14072C0C4 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x140730E4C (SepRmGlobalSaclFind.c)
 *     ExpCovIsModulePresent @ 0x14075F484 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x14075F55C (ExpCovQueryHypervisorInformation.c)
 *     CmpSetSystemBiosInformation @ 0x14083B4EC (CmpSetSystemBiosInformation.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x14084A388 (KiHwPolicyFindDriverImage.c)
 * Callees:
 *     <none>
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // rax
  wchar_t *v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  wchar_t *v8; // rbx
  signed __int64 v9; // rdi
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  signed __int64 v13; // rdi
  int v14; // ecx
  int v15; // edx

  Buffer = String1->Buffer;
  v4 = String2->Buffer;
  v5 = (unsigned __int64)String1->Length >> 1;
  v6 = (unsigned __int64)String2->Length >> 1;
  v7 = v5;
  if ( v5 > v6 )
    v7 = (unsigned __int64)String2->Length >> 1;
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
