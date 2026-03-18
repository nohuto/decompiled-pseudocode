/*
 * XREFs of RtlPrefixUnicodeString @ 0x1405059D0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x1400A0A98 (SepPotentialGlobalTableAttribute.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1404D7D40 (SepAdtAuditObjectAccessWithContext.c)
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 *     SepIsMinTCB @ 0x1404F4270 (SepIsMinTCB.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14050333C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140503C50 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405055A0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x140505D30 (_CmValidateDeviceInterfaceName.c)
 *     _CmIsRootEnumeratedDevice @ 0x14050CE64 (_CmIsRootEnumeratedDevice.c)
 *     SepValidateReferencedCachedHandles @ 0x14053FA28 (SepValidateReferencedCachedHandles.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14056CFD0 (RtlpProcessIFEOKeyFilter.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x14057663C (AuthzBasepIsCompareRelevantAttribute.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x140585E70 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140586C28 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1405C21AC (_CmGetDeviceInterfacePathFormat.c)
 *     PiNormalizeDeviceText @ 0x1405E47BC (PiNormalizeDeviceText.c)
 *     IopBuildFullDriverPath @ 0x1405FB6D4 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x1405FB93C (IopQueryRegistryKeySystemPath.c)
 *     IopValidateJunctionTarget @ 0x14071B5BC (IopValidateJunctionTarget.c)
 *     PiCreateDirectoryRootAndPath @ 0x140724C64 (PiCreateDirectoryRootAndPath.c)
 *     PiCreateRegistryPath @ 0x140724DC8 (PiCreateRegistryPath.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14072CF24 (PiDevCfgMakeServiceBootStart.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14073DB74 (PiDrvDbResolveSystemFilePath.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 *     ObpIsUnsecureName @ 0x140758618 (ObpIsUnsecureName.c)
 *     PopBatteryDeviceState @ 0x1407639B8 (PopBatteryDeviceState.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1407E72C8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1407E7910 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1407E7FC8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407E9948 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1407EC744 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1407ED0A4 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rax
  wchar_t *v5; // rbx
  char *v6; // rdi
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  char *v10; // r8

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length >= (unsigned int)Length )
  {
    v5 = (wchar_t *)((char *)Buffer + Length);
    if ( CaseInSensitive )
    {
      if ( Buffer < v5 )
      {
        v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
        while ( 1 )
        {
          v7 = *Buffer;
          v8 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v6);
          if ( v7 != v8 )
          {
            if ( v7 >= 0x61 )
            {
              if ( v7 > 0x7A )
                v7 = (unsigned __int16)(v7
                                      + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v7 & 0xF)
                                                                                                + 2
                                                                                                * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v7 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v7)]]]);
              else
                v7 -= 32;
            }
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
            if ( v7 != v8 )
              break;
          }
          if ( ++Buffer >= v5 )
            return 1;
        }
        return 0;
      }
    }
    else if ( Buffer < v5 )
    {
      v10 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v10) )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
