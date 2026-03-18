/*
 * XREFs of BiGetDriveLayoutInformation @ 0x14058CA00
 * Callers:
 *     BiGetDriveLayoutBlock @ 0x14058A1D0 (BiGetDriveLayoutBlock.c)
 *     BiCreatePartitionDevice @ 0x14058C52C (BiCreatePartitionDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x14058CABC (BiIssueGetDriveLayoutIoctl.c)
 */

__int64 __fastcall BiGetDriveLayoutInformation(PCWSTR SourceString)
{
  NTSTATUS DriveLayoutIoctl; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp+20h] BYREF

  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DriveLayoutIoctl = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( DriveLayoutIoctl >= 0 )
    DriveLayoutIoctl = BiIssueGetDriveLayoutIoctl(FileHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)DriveLayoutIoctl;
}
