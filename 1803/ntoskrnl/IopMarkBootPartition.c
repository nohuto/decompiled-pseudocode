/*
 * XREFs of IopMarkBootPartition @ 0x1408B6F50
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140064E8C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140179850 (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x140179880 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14063418C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopStoreSystemPartitionInformation @ 0x1408B7144 (IopStoreSystemPartitionInformation.c)
 *     IopAssignBootDriveLetter @ 0x1408B73FC (IopAssignBootDriveLetter.c)
 */

__int64 __fastcall IopMarkBootPartition(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  __int64 v5; // r9
  NTSTATUS v6; // ebx
  PVOID *v7; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  __int64 v11; // rcx
  int v13; // edx
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  _STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  char pszFormat[24]; // [rsp+98h] [rbp-68h] BYREF
  char pszDest[256]; // [rsp+B0h] [rbp-50h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v5 = *(_QWORD *)(a1 + 184);
  strcpy(pszFormat, "\\ArcName\\%s");
  v6 = RtlStringCchPrintfA(pszDest, 0x100uLL, pszFormat, v5);
  if ( v6 >= 0 )
  {
    RtlInitAnsiString(&SourceString, pszDest);
    v6 = RtlAnsiStringToUnicodeString(a3, &SourceString, 1u);
    if ( v6 >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = a3;
      v6 = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
      if ( v6 >= 0 )
      {
        v6 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, (PVOID *)&SourceString, 0LL);
        if ( v6 >= 0 )
        {
          v7 = *(PVOID **)&SourceString.Length;
          DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                             *(_QWORD *)(*(_QWORD *)&SourceString.Length + 8LL),
                                             0x746C6644u);
          v9 = (__int64)v7[1];
          v10 = DeviceAttachmentBaseRefWithTag;
          *(_DWORD *)(v9 + 48) |= 0x100u;
          *((_DWORD *)DeviceAttachmentBaseRefWithTag + 12) |= 0x100u;
          if ( InitIsWinPEMode )
          {
            v9 = (__int64)v7[1];
            v13 = *(_DWORD *)(v9 + 52);
            if ( (v13 & 1) != 0 )
              InitWinPEModeType |= 0x200u;
            if ( (v13 & 2) != 0 )
              InitWinPEModeType |= 0x100u;
          }
          PnpHardwareConfigCreateBootDriverFlags(v9, FileHandle);
          ObfReferenceObjectWithTag(v7[1], 0x746C6644u);
          ObCloseHandle(FileHandle, 0);
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
          ObfDereferenceObjectWithTag(v10, 0x746C6644u);
          IopAssignBootDriveLetter();
          v6 = IopCreateUnicodeFromAnsiBuffer(&DestinationString, *(const CHAR **)(a1 + 208));
          if ( v6 >= 0 )
          {
            IopStoreSystemPartitionInformation(v11, &DestinationString);
            RtlFreeAnsiString(&DestinationString);
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
