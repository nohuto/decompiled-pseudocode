/*
 * XREFs of RtlPrefixUnicodeString @ 0x140484490
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x140035648 (SepPotentialGlobalTableAttribute.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140443CEC (RtlpProcessIFEOKeyFilter.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x14045A774 (AuthzBasepIsCompareRelevantAttribute.c)
 *     SepValidateReferencedCachedHandles @ 0x1404622D8 (SepValidateReferencedCachedHandles.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046C4F0 (SepAdtAuditObjectAccessWithContext.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140483940 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404878A0 (_CmValidateDeviceInterfaceName.c)
 *     _CmIsRootEnumeratedDevice @ 0x14048B1DC (_CmIsRootEnumeratedDevice.c)
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 *     PiNormalizeDeviceText @ 0x1404DAC60 (PiNormalizeDeviceText.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404DFC1C (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404E1878 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404E2728 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1404E7C60 (PiPnpRtlEnumeratorFilterCallback.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     SepIsMinTCB @ 0x1405454E0 (SepIsMinTCB.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14056C0E8 (_CmGetDeviceInterfacePathFormat.c)
 *     ObpIsUnsecureName @ 0x1405D7B9C (ObpIsUnsecureName.c)
 *     IopValidateJunctionTarget @ 0x14068AC90 (IopValidateJunctionTarget.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14069A874 (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 *     PopBatteryDeviceState @ 0x1406CA30C (PopBatteryDeviceState.c)
 *     SepAppContainerAceProtectionApplies @ 0x1406F8774 (SepAppContainerAceProtectionApplies.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14073A060 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14073A61C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14073AC6C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14073C458 (_CmDeleteDeviceContainerRegKeyWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rax
  wchar_t *v5; // r11
  wchar_t *v6; // r10
  signed __int64 v7; // r11
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  signed __int64 v11; // r11

  Length = String1->Length;
  Buffer = String1->Buffer;
  v5 = String2->Buffer;
  if ( String2->Length >= (unsigned int)Length )
  {
    v6 = (wchar_t *)((char *)Buffer + Length);
    if ( CaseInSensitive )
    {
      if ( Buffer < v6 )
      {
        v7 = (char *)v5 - (char *)Buffer;
        while ( 1 )
        {
          v8 = *Buffer;
          v9 = *(wchar_t *)((char *)Buffer + v7);
          if ( v8 != v9 )
          {
            if ( v8 >= 0x61 )
            {
              if ( v8 > 0x7A )
                v8 = (unsigned __int16)(v8
                                      + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v8 & 0xF)
                                                                                                + 2
                                                                                                * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v8 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v8)]]]);
              else
                v8 -= 32;
            }
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
            if ( v8 != v9 )
              break;
          }
          if ( ++Buffer >= v6 )
            return 1;
        }
        return 0;
      }
    }
    else if ( Buffer < v6 )
    {
      v11 = (char *)v5 - (char *)Buffer;
      while ( *Buffer == *(wchar_t *)((char *)Buffer + v11) )
      {
        if ( ++Buffer >= v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
