/*
 * XREFs of RtlCreateUnicodeString @ 0x1404C1CA0
 * Callers:
 *     PipGenerateContainerID @ 0x140453598 (PipGenerateContainerID.c)
 *     IopBootLog @ 0x14045B6F8 (IopBootLog.c)
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     EtwpRealtimeCreateLogfile @ 0x14054FF60 (EtwpRealtimeCreateLogfile.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x140551AE8 (EtwpCaptureString.c)
 *     EtwStartAutoLogger @ 0x140555730 (EtwStartAutoLogger.c)
 *     EtwpQueryRegistryCallback @ 0x140556ED0 (EtwpQueryRegistryCallback.c)
 *     PiDevCfgQueryDriverNode @ 0x14058F3B8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgResolveVariable @ 0x140594210 (PiDevCfgResolveVariable.c)
 *     PiDrvDbCreateNode @ 0x14059E128 (PiDrvDbCreateNode.c)
 *     PiGetDefaultMessageString @ 0x1405AD2F8 (PiGetDefaultMessageString.c)
 *     DrvDbCreateDatabaseNode @ 0x1405CD648 (DrvDbCreateDatabaseNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14066EB04 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14069AE04 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14069B1C8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140744354 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PipInitDeviceOverrideCache @ 0x1407F8168 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
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
