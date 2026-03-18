/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x1404C1180
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14006FCD0 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x14041B230 (ExpSystemErrorHandler2.c)
 *     AslStringUpcaseToMultiByteN @ 0x1404B5C40 (AslStringUpcaseToMultiByteN.c)
 *     MmGetSystemRoutineAddress @ 0x1404C0520 (MmGetSystemRoutineAddress.c)
 *     ExpQueryModuleInformation @ 0x1404C0FD0 (ExpQueryModuleInformation.c)
 *     EtwpBuildProcessEvent @ 0x1404ED1D0 (EtwpBuildProcessEvent.c)
 *     ObCreateObjectTypeEx @ 0x14059EB6C (ObCreateObjectTypeEx.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x1405BD7A4 (ExpConvertLdrEntryToModuleInfo.c)
 *     KsepGetModuleInfoByName @ 0x1406B003C (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x14071D9A0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x14071E2D0 (NtSetSystemEnvironmentValue.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x140774424 (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspProcessDumpCommand @ 0x14078EF40 (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x14082144C (IopReassignSystemRoot.c)
 * Callees:
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
 *     RtlUnicodeToMultiByteN @ 0x1404C1260 (RtlUnicodeToMultiByteN.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406E5B30 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // r14d
  ULONG v7; // eax
  unsigned __int16 v8; // cx
  unsigned __int16 MaximumLength; // ax
  int v10; // ebx
  char *StringRoutine; // rax
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  if ( (_BYTE)NlsMbCodePageTag )
    v7 = RtlxUnicodeStringToOemSize(SourceString);
  else
    v7 = ((unsigned int)SourceString->Length + 2) >> 1;
  if ( v7 > 0xFFFF )
    return -1073741584;
  v8 = v7 - 1;
  DestinationString->Length = v7 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v7;
    StringRoutine = (char *)ExpAllocateStringRoutine(v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v8 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  v10 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          DestinationString->Length,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v10 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  else
  {
    DestinationString->Buffer[BytesInMultiByteString] = 0;
    return v6;
  }
  return v10;
}
