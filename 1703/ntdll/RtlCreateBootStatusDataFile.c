/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800EB2F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     wcscpy_s @ 0x1800A16D0 (wcscpy_s.c)
 *     ZwWriteFile @ 0x1800A5400 (ZwWriteFile.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateFile @ 0x1800A5DA0 (ZwCreateFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EB450 (RtlRestoreBootStatusDefaults.c)
 */

NTSTATUS RtlCreateBootStatusDataFile(void)
{
  wchar_t *v0; // rcx
  wchar_t *v1; // rdx
  NTSTATUS result; // eax
  int v3; // ebx
  char Buffer[8]; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  wchar_t Destination[264]; // [rsp+D0h] [rbp-30h] BYREF

  Buffer[0] = 1;
  if ( v0 )
  {
    v1 = v0;
  }
  else
  {
    wcscpy_s(Destination, 0x101uLL, L"\\SystemRoot\\bootstat.dat");
    v1 = Destination;
  }
  RtlInitUnicodeString(&DestinationString, v1);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ByteOffset.QuadPart = 67584LL;
  result = ZwCreateFile(
             &FileHandle,
             0x12019Fu,
             &ObjectAttributes,
             &IoStatusBlock,
             &ByteOffset,
             4u,
             0,
             2u,
             0x8020u,
             0LL,
             0);
  if ( result >= 0 )
  {
    --ByteOffset.QuadPart;
    v3 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 1u, &ByteOffset, 0LL);
    if ( v3 >= 0 )
      v3 = RtlRestoreBootStatusDefaults(FileHandle);
    ZwClose(FileHandle);
    return v3;
  }
  return result;
}
