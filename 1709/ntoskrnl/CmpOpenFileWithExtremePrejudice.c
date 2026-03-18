/*
 * XREFs of CmpOpenFileWithExtremePrejudice @ 0x140694600
 * Callers:
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     ZwQueryAttributesFile @ 0x14017E060 (ZwQueryAttributesFile.c)
 *     ZwCreateFile @ 0x14017E360 (ZwCreateFile.c)
 *     memset @ 0x140192F40 (memset.c)
 */

int __fastcall CmpOpenFileWithExtremePrejudice(
        PHANDLE FileHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FileAttributes,
        ULONG CreateOptions)
{
  int result; // eax
  NTSTATUS v10; // ebx
  HANDLE FileHandlea; // [rsp+60h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlocka; // [rsp+68h] [rbp-70h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+78h] [rbp-60h] BYREF

  memset(&FileInformation, 0, sizeof(FileInformation));
  *FileHandle = 0LL;
  result = ZwQueryAttributesFile(ObjectAttributes, &FileInformation);
  if ( result >= 0 )
  {
    FileInformation.FileAttributes &= ~1u;
    result = ZwOpenFile(&FileHandlea, 0x100u, ObjectAttributes, &IoStatusBlocka, 7u, 0x4000u);
    if ( result >= 0 )
    {
      v10 = ZwSetInformationFile(FileHandlea, &IoStatusBlocka, &FileInformation, 0x28u, FileBasicInformation);
      ZwClose(FileHandlea);
      if ( v10 >= 0 )
        return ZwCreateFile(
                 FileHandle,
                 3u,
                 ObjectAttributes,
                 IoStatusBlock,
                 0LL,
                 FileAttributes,
                 0,
                 1u,
                 CreateOptions,
                 0LL,
                 0);
      else
        return v10;
    }
  }
  return result;
}
