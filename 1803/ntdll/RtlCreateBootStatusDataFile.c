/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800E6A70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwWriteFile @ 0x18009ABC0 (ZwWriteFile.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009B560 (ZwCreateFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800E6DA0 (RtlRestoreBootStatusDefaults.c)
 *     sub_1800E6F44 @ 0x1800E6F44 (sub_1800E6F44.c)
 */

NTSTATUS RtlCreateBootStatusDataFile(void)
{
  const WCHAR *v0; // rcx
  char v1; // bl
  const WCHAR *v2; // rdx
  int v3; // edi
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+17h] BYREF
  char Buffer; // [rsp+D0h] [rbp+67h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+77h] BYREF
  PVOID BaseAddress; // [rsp+E8h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  v1 = 0;
  BaseAddress = 0LL;
  Buffer = 1;
  if ( v0 )
  {
    v2 = v0;
  }
  else if ( (int)sub_1800E6F44(&BaseAddress) < 0 )
  {
    v2 = L"\\SystemRoot\\bootstat.dat";
    v1 = 0;
    BaseAddress = (PVOID)L"\\SystemRoot\\bootstat.dat";
  }
  else
  {
    v2 = (const WCHAR *)BaseAddress;
    v1 = 1;
  }
  RtlInitUnicodeString(&DestinationString, v2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ByteOffset.QuadPart = 67584LL;
  v3 = ZwCreateFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, &ByteOffset, 4u, 0, 2u, 0x8020u, 0LL, 0);
  if ( v3 >= 0 )
  {
    --ByteOffset.QuadPart;
    v3 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 1u, &ByteOffset, 0LL);
    if ( v3 >= 0 )
      v3 = RtlRestoreBootStatusDefaults(FileHandle);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v3;
}
