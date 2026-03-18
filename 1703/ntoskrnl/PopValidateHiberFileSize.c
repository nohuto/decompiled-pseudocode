/*
 * XREFs of PopValidateHiberFileSize @ 0x14057B598
 * Callers:
 *     PopResizeHiberFile @ 0x14057B45C (PopResizeHiberFile.c)
 *     PopSetHiberFileSize @ 0x1406C9BD4 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1406C9CDC (PopSetHiberFileType.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017E160 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14017E860 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall PopValidateHiberFileSize(__int64 a1, _QWORD *a2)
{
  NTSTATUS v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  HANDLE FileHandle; // [rsp+38h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-31h] BYREF
  _BYTE FsInformation[16]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v13; // [rsp+90h] [rbp+Fh]
  int v14; // [rsp+98h] [rbp+17h]
  int v15; // [rsp+9Ch] [rbp+1Bh]
  _QWORD FileInformation[3]; // [rsp+A0h] [rbp+1Fh] BYREF

  if ( FileObject )
  {
    v4 = ZwQueryInformationFile(PopHiberInfo, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
    if ( v4 < 0 )
    {
LABEL_13:
      v7 = 0LL;
      goto LABEL_10;
    }
    v5 = FileInformation[0];
  }
  else
  {
    v5 = 0LL;
  }
  ObjectAttributes.ObjectName = &IoArcBootDeviceName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v4 < 0 )
    goto LABEL_13;
  v4 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 0x20u, FileFsFullSizeInformation);
  ZwClose(FileHandle);
  if ( v4 < 0 )
    goto LABEL_13;
  v4 = -1073741823;
  v6 = v13 * (unsigned int)(v15 * v14) - 0x10000000;
  if ( v6 >= a1 - v5 )
    v4 = 0;
  v7 = v6 + v5;
  if ( v6 + v5 <= 0 )
    v7 = 0LL;
LABEL_10:
  if ( a2 )
    *a2 = v7;
  return (unsigned int)v4;
}
