/*
 * XREFs of BiGetPhysicalDriveName @ 0x1407E2904
 * Callers:
 *     BiGetDriveLayoutBlock @ 0x140607674 (BiGetDriveLayoutBlock.c)
 *     BiCreatePartitionDevice @ 0x140609914 (BiCreatePartitionDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1407E2A48 (BiGetVolumeDiskExtentsInformation.c)
 */

__int64 __fastcall BiGetPhysicalDriveName(PCWSTR SourceString, wchar_t **a2)
{
  NTSTATUS v3; // ebx
  int VolumeDiskExtentsInformation; // eax
  unsigned int *v5; // rdi
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rsi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B8h] [rbp+38h]

  FileHandle = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v3 >= 0 )
  {
    VolumeDiskExtentsInformation = BiGetVolumeDiskExtentsInformation(FileHandle);
    v5 = (unsigned int *)P;
    v3 = VolumeDiskExtentsInformation;
    if ( VolumeDiskExtentsInformation >= 0 )
    {
      if ( *(_DWORD *)P == 1 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x3EuLL, 0x4B444342u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          v3 = RtlStringCbPrintfW(PoolWithTag, 0x3EuLL, L"\\??\\PhysicalDrive%lu", v5[2]);
          if ( v3 < 0 )
            ExFreePoolWithTag(v7, 0x4B444342u);
          else
            *a2 = v7;
        }
        else
        {
          v3 = -1073741670;
        }
      }
      else
      {
        v3 = -1073741637;
      }
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4B444342u);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
