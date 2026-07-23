/*
 * XREFs of sub_1800537C0 @ 0x1800537C0
 * Callers:
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     sub_18003D6A4 @ 0x18003D6A4 (sub_18003D6A4.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwSetInformationFile @ 0x1800A57E0 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x1800A5DA0 (ZwCreateFile.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800537C0(PCWSTR SourceString, __int64 a2, __int64 a3, _BYTE *a4, int a5, HANDLE *a6)
{
  ULONG CreateDisposition; // r15d
  __int64 v9; // rcx
  bool v10; // di
  NTSTATUS v11; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-71h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-61h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-51h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-41h] BYREF
  _DWORD FileInformation[10]; // [rsp+C8h] [rbp-11h] BYREF

  *a6 = 0LL;
  CreateDisposition = 3;
  if ( *a4 != 1 )
    CreateDisposition = 5;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v10 = 0;
  if ( DestinationString.Length > 1u )
    v10 = SourceString[(DestinationString.Length >> 1) - 1] == 92;
  v11 = sub_18003D6A4(v9, 0, DestinationString.Buffer, (__int64)&UnicodeString, 0LL, 0LL);
  if ( v11 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &UnicodeString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwCreateFile(
            &FileHandle,
            0xC0100080,
            &ObjectAttributes,
            &IoStatusBlock,
            0LL,
            0x80u,
            5u,
            CreateDisposition,
            0x68u,
            0LL,
            0);
    if ( v11 >= 0 )
    {
      if ( *a4 == 1 && IoStatusBlock.Information == 2 )
        *a4 = 0;
      if ( !v10 )
      {
        memset(FileInformation, 0, sizeof(FileInformation));
        FileInformation[8] = 0x2000;
        v11 = ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      }
      *a6 = FileHandle;
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v11;
}
