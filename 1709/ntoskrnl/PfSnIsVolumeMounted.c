/*
 * XREFs of PfSnIsVolumeMounted @ 0x1404435E0
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1404412FC (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     NtCreateFile @ 0x14053C700 (NtCreateFile.c)
 */

__int64 __fastcall PfSnIsVolumeMounted(PCWSTR SourceString, int *a2, int *a3)
{
  NTSTATUS v5; // ebx
  int v6; // eax
  _BYTE FsInformation[4]; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v9; // [rsp+6Ch] [rbp-5h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+Fh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+1Fh] BYREF
  HANDLE FileHandle; // [rsp+F0h] [rbp+7Fh] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  if ( v5 >= 0 )
  {
    v5 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation);
    if ( (v5 & 0xC0000000) != 0xC0000000 )
    {
      v6 = (v9 >> 5) & 1;
      *a3 = v9 & 1;
      *a2 = v6;
      v5 = 0;
    }
    NtClose(FileHandle);
  }
  return (unsigned int)v5;
}
