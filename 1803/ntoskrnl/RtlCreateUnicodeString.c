/*
 * XREFs of RtlCreateUnicodeString @ 0x140518CB0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140517C80 (RtlConvertSidToUnicodeString.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x14058BA4C (EtwpCaptureString.c)
 *     EtwpRealtimeCreateLogfile @ 0x14058E69C (EtwpRealtimeCreateLogfile.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405D60B0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x1405D8B48 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgResolveVariable @ 0x1405DA3E0 (PiDevCfgResolveVariable.c)
 *     PipGenerateContainerID @ 0x1405E6814 (PipGenerateContainerID.c)
 *     PiDrvDbCreateNode @ 0x140622B38 (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x140623BE8 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxCreateNode @ 0x1406241F8 (_PnpCtxCreateNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x140624BCC (IopCopyBootLogRegistryToFile.c)
 *     EtwpQueryRegistryCallback @ 0x14063B130 (EtwpQueryRegistryCallback.c)
 *     EtwStartAutoLogger @ 0x14063DF10 (EtwStartAutoLogger.c)
 *     PiGetDefaultMessageString @ 0x140645B40 (PiGetDefaultMessageString.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1406FC834 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14072D4C4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072D8D8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14073D35C (PiDrvDbQuerySystemPathWin32.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1407F2F8C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PipInitDeviceOverrideCache @ 0x1408B5318 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1408B7BC8 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePool @ 0x1402EA010 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  wchar_t *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  DestinationString->Buffer = StringRoutine;
  if ( !StringRoutine )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(StringRoutine, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
