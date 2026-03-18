/*
 * XREFs of IoReplaceFileObjectName @ 0x14071C680
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoReplaceFileObjectName(PFILE_OBJECT FileObject, PWSTR NewFileName, USHORT FileNameLength)
{
  USHORT MaximumLength; // bx
  USHORT v7; // ax
  wchar_t *PoolWithTag; // rbp
  wchar_t *Buffer; // rcx
  wchar_t *v11; // rcx

  MaximumLength = FileObject->FileName.MaximumLength;
  if ( FileNameLength > MaximumLength )
  {
    MaximumLength = 56;
    if ( FileNameLength >= 0x38u )
    {
      MaximumLength = 120;
      if ( FileNameLength >= 0x78u )
      {
        v7 = 248;
        if ( FileNameLength >= 0xF8u )
          v7 = FileNameLength;
        MaximumLength = v7;
      }
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, MaximumLength, 0x6D4E6F49u);
    if ( !PoolWithTag )
      return -1073741670;
    Buffer = FileObject->FileName.Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    FileObject->FileName.Buffer = PoolWithTag;
    FileObject->FileName.MaximumLength = MaximumLength;
  }
  v11 = FileObject->FileName.Buffer;
  FileObject->FileName.Length = FileNameLength;
  memset(v11, 0, MaximumLength);
  memmove(FileObject->FileName.Buffer, NewFileName, FileNameLength);
  return 0;
}
