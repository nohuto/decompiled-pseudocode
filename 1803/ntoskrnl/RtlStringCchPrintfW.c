/*
 * XREFs of RtlStringCchPrintfW @ 0x14009F42C
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1402C7F20 (DrvDbGetConfigurationSubKeyCallback.c)
 *     EtwpPsProvTraceProcess @ 0x1404F7F94 (EtwpPsProvTraceProcess.c)
 *     RtlpInitNlsFileName @ 0x14053EAEC (RtlpInitNlsFileName.c)
 *     RtlpInitNlsSectionName @ 0x14053F2B0 (RtlpInitNlsSectionName.c)
 *     SepValidateReferencedCachedHandles @ 0x14053FA28 (SepValidateReferencedCachedHandles.c)
 *     IoCreateDevice @ 0x140541590 (IoCreateDevice.c)
 *     ExpCheckPortableOperatingSystem @ 0x14057EC4C (ExpCheckPortableOperatingSystem.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405CC920 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IoWMIOpenBlock @ 0x1405D5840 (IoWMIOpenBlock.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405D60B0 (PiDevCfgLogDeviceConfigured.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x1405E3818 (ExpHwidSysVolIfGetDiskInfo.c)
 *     IopBootLog @ 0x1405F6E00 (IopBootLog.c)
 *     IopCreateArcName @ 0x1406031D8 (IopCreateArcName.c)
 *     PipMakeGloballyUniqueId @ 0x140603F8C (PipMakeGloballyUniqueId.c)
 *     MiSessionObjectCreate @ 0x14060A7FC (MiSessionObjectCreate.c)
 *     AslGuidToString @ 0x14061FDD0 (AslGuidToString.c)
 *     IoCreateDriver @ 0x140621240 (IoCreateDriver.c)
 *     PiDrvDbRegisterNode @ 0x140622A40 (PiDrvDbRegisterNode.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140623F40 (PiDrvDbRegisterNodeCallback.c)
 *     _SysCtxOpenControlSet @ 0x140624574 (_SysCtxOpenControlSet.c)
 *     IopCopyBootLogRegistryToFile @ 0x140624BCC (IopCopyBootLogRegistryToFile.c)
 *     PiDevCfgResolveVariableExpression @ 0x14072E820 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14072FA50 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140730B10 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x140739AEC (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x140779724 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140785D38 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x140795114 (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x140797C50 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x140798D60 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x14079B478 (LocalpGetStringForCondition.c)
 *     CMFFlushHitsFile @ 0x1407C8998 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C92E0 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1407D568C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x1407D8E24 (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x1407DE540 (AslpFileQueryVersionString.c)
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 *     IopCreateArcNamesDisk @ 0x1408C4C90 (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x1408C612C (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x140187B70 (_vsnwprintf.c)
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
