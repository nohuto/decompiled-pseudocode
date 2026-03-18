/*
 * XREFs of RtlCompareUnicodeString @ 0x1405080C0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140044640 (AuthzBasepCompareUnicodeStringOperands.c)
 *     FsRtlCompareNodeAndKey @ 0x14006DDE4 (FsRtlCompareNodeAndKey.c)
 *     KsepCacheHwIdEqual @ 0x140163140 (KsepCacheHwIdEqual.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14016F288 (PopFxFindAcpiDeviceByUniqueId.c)
 *     IopEliminateBogusConflict @ 0x14023E224 (IopEliminateBogusConflict.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14029FFE0 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     CmpFindNameInListCellWithStatus @ 0x1404A3990 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1404A9790 (CmpDoCompareKeyName.c)
 *     PnpCompareInstancePath @ 0x140508090 (PnpCompareInstancePath.c)
 *     CmpCheckLexicographicalOrder @ 0x1405504B0 (CmpCheckLexicographicalOrder.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14056CFD0 (RtlpProcessIFEOKeyFilter.c)
 *     PopAvlComparePowerRequestKeys @ 0x14057F620 (PopAvlComparePowerRequestKeys.c)
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1405E7790 (PiSwBusRelationsCompareInstancePath.c)
 *     PiCompareDDBCacheEntries @ 0x140602F70 (PiCompareDDBCacheEntries.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140605DE0 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopConnectToPolicyDevice @ 0x140626BD4 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x140652E00 (KsepCacheDeviceEqual.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140700F90 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14072BF1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14072E820 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x14073E714 (IopExecuteHardwareProfileChange.c)
 *     SepAdtStagingEvent @ 0x14078FD14 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140790464 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x140794738 (SepRmGlobalSaclFind.c)
 *     ExpCovIsModulePresent @ 0x1407C6784 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1407C685C (ExpCovQueryHypervisorInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1408AF738 (CmpSetSystemBiosInformation.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x1408BFA18 (KiHwPolicyFindDriverImage.c)
 * Callees:
 *     <none>
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  wchar_t *v7; // rbx
  char *v8; // rdi
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  char *v12; // r8
  int v13; // ecx
  int v14; // edx

  Buffer = String1->Buffer;
  v4 = (unsigned __int64)String1->Length >> 1;
  v5 = (unsigned __int64)String2->Length >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)String2->Length >> 1;
  v7 = &Buffer[v6];
  if ( CaseInSensitive )
  {
    if ( Buffer < v7 )
    {
      v8 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v9 = *Buffer;
        v10 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v8);
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
          return v4 - v5;
      }
      return v9 - v10;
    }
    return v4 - v5;
  }
  if ( Buffer >= v7 )
    return v4 - v5;
  v12 = (char *)((char *)String2->Buffer - (char *)Buffer);
  while ( 1 )
  {
    v13 = *Buffer;
    v14 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v12);
    if ( v13 != v14 )
      break;
    if ( ++Buffer >= v7 )
      return v4 - v5;
  }
  return v13 - v14;
}
