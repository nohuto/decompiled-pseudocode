/*
 * XREFs of IopFileUtilRename @ 0x140853724
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x1408535D0 (PpLastGoodDoBootProcessing.c)
 *     PiLastGoodRevertCopyCallback @ 0x14086A8D0 (PiLastGoodRevertCopyCallback.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopFileUtilClearAttributes @ 0x1406D3ABC (IopFileUtilClearAttributes.c)
 */

__int64 __fastcall IopFileUtilRename(UNICODE_STRING *a1, UNICODE_STRING *a2, char a3)
{
  _QWORD *PoolWithTag; // rdi
  NTSTATUS v7; // esi
  int Length; // r9d
  unsigned int v10; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp+10h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2->Length + 24LL, 0x75466F49u);
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( a3 )
    IopFileUtilClearAttributes(a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 0x110080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x204022u);
  if ( v7 >= 0 )
  {
    memmove((char *)PoolWithTag + 20, a2->Buffer, a2->Length);
    PoolWithTag[1] = 0LL;
    *(_BYTE *)PoolWithTag = a3;
    Length = a2->Length;
    *((_DWORD *)PoolWithTag + 4) = Length;
    v10 = ZwSetInformationFile(FileHandle, &IoStatusBlock, PoolWithTag, Length + 24, FileRenameInformation);
    ExFreePoolWithTag(PoolWithTag, 0);
    ZwClose(FileHandle);
    return v10;
  }
  else
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v7;
  }
}
