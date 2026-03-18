/*
 * XREFs of RtlCreateUnicodeString @ 0x1404DF560
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140443CDC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     RtlConvertSidToUnicodeString @ 0x140489090 (RtlConvertSidToUnicodeString.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x1404EDA2C (EtwpCaptureString.c)
 *     PiGetDefaultMessageString @ 0x140517098 (PiGetDefaultMessageString.c)
 *     EtwpRealtimeCreateLogfile @ 0x140532AB0 (EtwpRealtimeCreateLogfile.c)
 *     PipGenerateContainerID @ 0x140593694 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariable @ 0x1405A096C (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryDriverNode @ 0x1405A1890 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405A3E50 (PiDevCfgLogDeviceConfigured.c)
 *     EtwStartAutoLogger @ 0x1405A90A0 (EtwStartAutoLogger.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405AD678 (IopCopyBootLogRegistryToFile.c)
 *     DrvDbCreateDatabaseNode @ 0x1405C5178 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbCreateNode @ 0x1405C6554 (PiDrvDbCreateNode.c)
 *     EtwpQueryRegistryCallback @ 0x1405D1830 (EtwpQueryRegistryCallback.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140698FFC (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1406C6A28 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406C6DE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 *     PipInitDeviceOverrideCache @ 0x140844E5C (PipInitDeviceOverrideCache.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
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
