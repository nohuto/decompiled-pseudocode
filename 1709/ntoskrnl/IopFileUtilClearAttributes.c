/*
 * XREFs of IopFileUtilClearAttributes @ 0x1406D3ABC
 * Callers:
 *     PpLastGoodDeleteFilesCallback @ 0x1406C11A0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilRename @ 0x140853724 (IopFileUtilRename.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x14086A990 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017DAE0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     memset @ 0x140192F40 (memset.c)
 */

NTSTATUS __fastcall IopFileUtilClearAttributes(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  unsigned int v3; // edi
  HANDLE FileHandle; // [rsp+30h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-11h] BYREF
  _DWORD FileInformation[10]; // [rsp+78h] [rbp+1Fh] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100180u, &ObjectAttributes, &IoStatusBlock, 3u, 0x204022u);
  if ( result >= 0 )
  {
    v2 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    if ( v2 >= 0 && (FileInformation[8] & 7) != 0 )
    {
      v3 = FileInformation[8] & 0xFFFFFFF8;
      if ( (FileInformation[8] & 0xFFFFFFF8) == 0 )
        v3 = 128;
      memset(FileInformation, 0, sizeof(FileInformation));
      FileInformation[8] = v3;
      v2 = ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    }
    ZwClose(FileHandle);
    return v2;
  }
  return result;
}
