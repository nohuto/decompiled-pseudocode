/*
 * XREFs of RtlStringCchPrintfW @ 0x14003DA94
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140268090 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IopBootLog @ 0x14045B6F8 (IopBootLog.c)
 *     RtlpInitNlsFileName @ 0x140461778 (RtlpInitNlsFileName.c)
 *     RtlpInitNlsSectionName @ 0x140461C50 (RtlpInitNlsSectionName.c)
 *     SepValidateReferencedCachedHandles @ 0x1404622D8 (SepValidateReferencedCachedHandles.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14046291C (ExpHwidSysVolIfGetDiskInfo.c)
 *     IoCreateDevice @ 0x1404A1F50 (IoCreateDevice.c)
 *     ExpCheckPortableOperatingSystem @ 0x1405578EC (ExpCheckPortableOperatingSystem.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 *     IoWMIOpenBlock @ 0x140584340 (IoWMIOpenBlock.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405926B4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     EtwpPsProvTraceProcess @ 0x140595350 (EtwpPsProvTraceProcess.c)
 *     IopCreateArcName @ 0x14059C120 (IopCreateArcName.c)
 *     PiDrvDbRegisterNode @ 0x14059E02C (PiDrvDbRegisterNode.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 *     PipMakeGloballyUniqueId @ 0x1405C146C (PipMakeGloballyUniqueId.c)
 *     _SysCtxOpenControlSet @ 0x1405CD4A0 (_SysCtxOpenControlSet.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 *     AslGuidToString @ 0x1405D71E8 (AslGuidToString.c)
 *     PiDevCfgResolveVariableExpression @ 0x14069C3A0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14069D540 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14069E5F0 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1406A7358 (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x1406DF114 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1406EA6A0 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1406F9DD4 (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x1406FC9F4 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1406FDB1C (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x140700190 (LocalpGetStringForCondition.c)
 *     CMFFlushHitsFile @ 0x14072162C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140721D50 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14072B80C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x14072E32C (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x140731670 (AslpFileQueryVersionString.c)
 *     IopCreateArcNamesDisk @ 0x1407F872C (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x14082144C (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x140169530 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v4; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v4;
}
