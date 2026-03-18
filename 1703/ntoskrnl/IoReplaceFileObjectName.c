/*
 * XREFs of IoReplaceFileObjectName @ 0x14068BBB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReplaceFileObjectName(PFILE_OBJECT FileObject, PWSTR NewFileName, USHORT FileNameLength)
{
  unsigned __int16 v6; // si
  USHORT v7; // ax
  wchar_t *PoolWithTag; // rbp
  wchar_t *Buffer; // rcx
  size_t MaximumLength; // r8
  wchar_t *v12; // rcx

  if ( FileNameLength > FileObject->FileName.MaximumLength )
  {
    v6 = 56;
    if ( FileNameLength >= 0x38u )
    {
      v6 = 120;
      if ( FileNameLength >= 0x78u )
      {
        v7 = 248;
        if ( FileNameLength >= 0xF8u )
          v7 = FileNameLength;
        v6 = v7;
      }
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x6D4E6F49u);
    if ( !PoolWithTag )
      return -1073741670;
    Buffer = FileObject->FileName.Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    FileObject->FileName.Buffer = PoolWithTag;
    FileObject->FileName.MaximumLength = v6;
  }
  MaximumLength = FileObject->FileName.MaximumLength;
  v12 = FileObject->FileName.Buffer;
  FileObject->FileName.Length = FileNameLength;
  memset(v12, 0, MaximumLength);
  memmove(FileObject->FileName.Buffer, NewFileName, FileNameLength);
  return 0;
}
