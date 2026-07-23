/*
 * XREFs of sub_1800092CC @ 0x1800092CC
 * Callers:
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18003C228 @ 0x18003C228 (sub_18003C228.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwSetInformationFile @ 0x18009AFA0 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x18009B560 (ZwCreateFile.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800092CC(PCWSTR SourceString, __int64 a2, __int64 a3, _BYTE *a4, int a5, HANDLE *a6)
{
  ULONG CreateDisposition; // r15d
  bool v9; // di
  NTSTATUS v10; // ebx
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
  v9 = 0;
  if ( DestinationString.Length > 1u )
    v9 = SourceString[((unsigned __int64)DestinationString.Length >> 1) - 1] == 92;
  v10 = sub_18003C228(0, DestinationString.Buffer, (unsigned int)&UnicodeString, 0, 0LL);
  if ( v10 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &UnicodeString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwCreateFile(
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
    if ( v10 >= 0 )
    {
      if ( *a4 == 1 && IoStatusBlock.Information == 2 )
        *a4 = 0;
      if ( !v9 )
      {
        memset(FileInformation, 0, sizeof(FileInformation));
        FileInformation[8] = 0x2000;
        v10 = ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      }
      *a6 = FileHandle;
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v10;
}
