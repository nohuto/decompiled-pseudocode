/*
 * XREFs of RtlStringCchPrintfW @ 0x1400DF084
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1402923F0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140459DBC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     EtwpPsProvTraceProcess @ 0x1404DCB5C (EtwpPsProvTraceProcess.c)
 *     IoWMIOpenBlock @ 0x14051FC20 (IoWMIOpenBlock.c)
 *     IoCreateDevice @ 0x140549C50 (IoCreateDevice.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14055F790 (ExpHwidSysVolIfGetDiskInfo.c)
 *     SepValidateReferencedCachedHandles @ 0x1405641B4 (SepValidateReferencedCachedHandles.c)
 *     PipMakeGloballyUniqueId @ 0x14058CC98 (PipMakeGloballyUniqueId.c)
 *     ExpCheckPortableOperatingSystem @ 0x140590B7C (ExpCheckPortableOperatingSystem.c)
 *     RtlpInitNlsSectionName @ 0x1405934AC (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x140593510 (RtlpInitNlsFileName.c)
 *     IopBootLog @ 0x14059BC30 (IopBootLog.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405A3E50 (PiDevCfgLogDeviceConfigured.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405AD678 (IopCopyBootLogRegistryToFile.c)
 *     MiSessionObjectCreate @ 0x1405B4ABC (MiSessionObjectCreate.c)
 *     _SysCtxOpenControlSet @ 0x1405C4E74 (_SysCtxOpenControlSet.c)
 *     PiDrvDbRegisterNode @ 0x1405C645C (PiDrvDbRegisterNode.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 *     IopCreateArcName @ 0x1405C8AA8 (IopCreateArcName.c)
 *     CMFFlushHitsFile @ 0x1405EE9D0 (CMFFlushHitsFile.c)
 *     PiDevCfgResolveVariableExpression @ 0x1406C78A0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1406C8A40 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1406C9AF0 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1406D1FE0 (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x140715594 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140722598 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x140731814 (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x1407343EC (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x140735534 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x140737BE0 (LocalpGetStringForCondition.c)
 *     CMFSystemThreadRoutine @ 0x1407618F0 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14076E53C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString @ 0x140771CF4 (AslGuidToString.c)
 *     AslGuidToString_UStr @ 0x140771DCC (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x1407757E4 (AslpFileQueryVersionString.c)
 *     IopCreateArcNamesDisk @ 0x1408454C4 (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x1408470D0 (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x1408540D4 (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x14015DE70 (_vsnwprintf.c)
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
