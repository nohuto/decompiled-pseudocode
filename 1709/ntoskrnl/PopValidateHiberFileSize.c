/*
 * XREFs of PopValidateHiberFileSize @ 0x1406FC634
 * Callers:
 *     PopResizeHiberFile @ 0x1406FC068 (PopResizeHiberFile.c)
 *     PopSetHiberFileSize @ 0x1406FC350 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1406FC45C (PopSetHiberFileType.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017DAE0 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14017E1E0 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall PopValidateHiberFileSize(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rdi
  NTSTATUS v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rbx
  HANDLE FileHandle; // [rsp+30h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-51h] BYREF
  _BYTE FsInformation[16]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v15; // [rsp+88h] [rbp-11h]
  int v16; // [rsp+90h] [rbp-9h]
  int v17; // [rsp+94h] [rbp-5h]
  _QWORD FileInformation[3]; // [rsp+98h] [rbp-1h] BYREF

  v6 = 0LL;
  if ( FileObject )
  {
    v7 = ZwQueryInformationFile(PopHiberInfo, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
    if ( v7 < 0 )
    {
LABEL_3:
      v8 = 0LL;
      goto LABEL_12;
    }
    v9 = FileInformation[0];
  }
  else
  {
    v9 = 0LL;
  }
  ObjectAttributes.ObjectName = &IoArcBootDeviceName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v7 < 0 )
    goto LABEL_3;
  v7 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 0x20u, FileFsFullSizeInformation);
  ZwClose(FileHandle);
  if ( v7 < 0 )
    goto LABEL_3;
  v7 = -1073741823;
  v6 = v15 * (unsigned int)(v17 * v16);
  v8 = v6 - 0x10000000 + v9;
  if ( v6 - 0x10000000 >= a1 - v9 )
    v7 = 0;
  if ( v8 <= 0 )
    v8 = 0LL;
LABEL_12:
  if ( a2 )
    *a2 = v8;
  if ( a3 )
    *a3 = v6;
  return (unsigned int)v7;
}
