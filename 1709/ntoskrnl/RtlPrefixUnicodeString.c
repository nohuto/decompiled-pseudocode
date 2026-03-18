/*
 * XREFs of RtlPrefixUnicodeString @ 0x1405223F0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x1400155EC (SepPotentialGlobalTableAttribute.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14044B5FC (_CmGetDeviceInterfacePathFormat.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14046BB0C (SepAdtAuditObjectAccessWithContext.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14051CAB4 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x14051D800 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x14051E570 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140521660 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmIsRootEnumeratedDevice @ 0x1405275DC (_CmIsRootEnumeratedDevice.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x140528880 (PiPnpRtlEnumeratorFilterCallback.c)
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 *     SepIsMinTCB @ 0x14053AAD0 (SepIsMinTCB.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140550AC4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     SepValidateReferencedCachedHandles @ 0x1405641B4 (SepValidateReferencedCachedHandles.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14057E480 (RtlpProcessIFEOKeyFilter.c)
 *     PiNormalizeDeviceText @ 0x1405854E0 (PiNormalizeDeviceText.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x14058B038 (AuthzBasepIsCompareRelevantAttribute.c)
 *     IopValidateJunctionTarget @ 0x1406B68DC (IopValidateJunctionTarget.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1406C6478 (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 *     ObpIsUnsecureName @ 0x1406EF138 (ObpIsUnsecureName.c)
 *     PopBatteryDeviceState @ 0x1406FE138 (PopBatteryDeviceState.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14077E748 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14077ED08 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14077F360 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140780B78 (_CmDeleteDeviceContainerRegKeyWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rax
  wchar_t *v5; // rdi
  wchar_t *v6; // rbx
  signed __int64 v7; // rdi
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  signed __int64 v11; // rdi

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
