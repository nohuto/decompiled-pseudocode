/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x1404DF110
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1400F97C4 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     EtwpBuildProcessEvent @ 0x1404DBDC0 (EtwpBuildProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x1404DE7F0 (MmGetSystemRoutineAddress.c)
 *     ExpQueryModuleInformation @ 0x1404DEF60 (ExpQueryModuleInformation.c)
 *     AslStringUpcaseToMultiByteN @ 0x140548148 (AslStringUpcaseToMultiByteN.c)
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x1405CCD94 (ExpConvertLdrEntryToModuleInfo.c)
 *     KsepGetModuleInfoByName @ 0x1406DB66C (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x14075D2B0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x14075DBE4 (NtSetSystemEnvironmentValue.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1407B61E0 (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspProcessDumpCommand @ 0x1407CCA70 (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x1408540D4 (IopReassignSystemRoot.c)
 * Callees:
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x14058FB50 (RtlUnicodeToUTF8N.c)
 *     RtlxUnicodeStringToOemSize @ 0x14071E040 (RtlxUnicodeStringToOemSize.c)
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
  ULONG UnicodeStringByteCount; // r9d
  wchar_t *Buffer; // r11
  ULONG Length; // edx
  char *v13; // r10
  ULONG v14; // r9d
  __int64 v15; // rbx
  ULONG i; // eax
  int v17; // ebx
  __int16 v18; // r8
  unsigned int v19; // eax
  char *StringRoutine; // rax
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-58h] BYREF
  int v23; // [rsp+34h] [rbp-54h]
  ULONG v24; // [rsp+38h] [rbp-50h]
  ULONG v25; // [rsp+40h] [rbp-48h]
  ULONG v26; // [rsp+44h] [rbp-44h]
  char *v27; // [rsp+48h] [rbp-40h]
  wchar_t *v28; // [rsp+50h] [rbp-38h]

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
  v23 = 0;
  UnicodeStringByteCount = SourceString->Length;
  Buffer = SourceString->Buffer;
  v28 = Buffer;
  Length = DestinationString->Length;
  v24 = Length;
  v13 = DestinationString->Buffer;
  v27 = v13;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( UnicodeStringByteCount )
      RtlUnicodeToUTF8N(v13, Length, &UTF8StringActualByteCount, Buffer, UnicodeStringByteCount);
    else
      UTF8StringActualByteCount = 0;
  }
  else
  {
    v14 = UnicodeStringByteCount >> 1;
    v26 = v14;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      v17 = (int)v13;
      while ( v14 && Length )
      {
        v18 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2LL * *Buffer++);
        v28 = Buffer;
        if ( HIBYTE(v18) )
        {
          v19 = Length--;
          v24 = Length;
          if ( v19 < 2 )
            break;
          *v13++ = HIBYTE(v18);
          v27 = v13;
        }
        *v13++ = v18;
        v27 = v13;
        v24 = --Length;
        v26 = --v14;
      }
      UTF8StringActualByteCount = (_DWORD)v13 - v17;
    }
    else
    {
      if ( v14 >= Length )
        v14 = Length;
      UTF8StringActualByteCount = v14;
      v15 = NlsUnicodeToAnsiData;
      for ( i = 0; ; ++i )
      {
        v25 = i;
        if ( i >= v14 )
          break;
        v13[i] = *(_BYTE *)(Buffer[i] + v15);
      }
    }
  }
  v23 = 0;
  DestinationString->Buffer[UTF8StringActualByteCount] = 0;
  return v6;
}
