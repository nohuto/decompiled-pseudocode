/*
 * XREFs of AslDoesFileExistNtPath @ 0x1407D933C
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 */

__int64 __fastcall AslDoesFileExistNtPath(PCWSTR SourceString)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+18h] BYREF

  v1 = 0;
  IoStatusBlock.Pointer = 0LL;
  FileHandle = 0LL;
  IoStatusBlock.Information = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v2 >= 0 )
  {
    v1 = 1;
    ZwClose(FileHandle);
  }
  else if ( v2 == -1073741757 || v2 == -1073741790 )
  {
    return 1;
  }
  return v1;
}
