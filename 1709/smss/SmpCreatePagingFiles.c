/*
 * XREFs of SmpCreatePagingFiles @ 0x140009518
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x140009E10 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpCreateVolumeDescriptors @ 0x140004FF0 (SmpCreateVolumeDescriptors.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000808C (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpDeallocSavedRegistryEntry @ 0x140009004 (SmpDeallocSavedRegistryEntry.c)
 *     SmpEnableSwapOnPagingFiles @ 0x140009170 (SmpEnableSwapOnPagingFiles.c)
 *     SmpProcessPagefileDescriptor @ 0x14000949C (SmpProcessPagefileDescriptor.c)
 *     SmpRecordCreatedPageFiles @ 0x1400096A4 (SmpRecordCreatedPageFiles.c)
 *     SmpCleanupStalePageFiles @ 0x1400097B4 (SmpCleanupStalePageFiles.c)
 *     SmpCreatePagingFileDescriptor @ 0x140009824 (SmpCreatePagingFileDescriptor.c)
 *     SmpCheckForCrashDump @ 0x140009A80 (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFiles @ 0x140009C10 (SmpSaveOldPageFiles.c)
 *     SmpBuildFilesStringFromList @ 0x140009D44 (SmpBuildFilesStringFromList.c)
 *     SmpCreateEmergencyPagingFile @ 0x14000FD20 (SmpCreateEmergencyPagingFile.c)
 */

char SmpCreatePagingFiles()
{
  int v0; // eax
  __int64 v1; // rcx
  PVOID *i; // rbx
  PVOID *v3; // rbx
  struct _UNICODE_STRING *v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *Buffer; // rax
  int VolumeDescriptors; // eax
  PVOID *v8; // rdi
  char v9; // bl
  int v10; // eax
  int v11; // eax
  __int16 v12; // dx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-20h]
  int SystemInformation; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  SystemInformation = 0;
  v16 = 0LL;
  BaseAddress = 0LL;
  v0 = SmpBuildFilesStringFromList(&SmpExistingPageFilesList, &v16);
  LODWORD(v1) = v0;
  if ( v0 < 0 )
  {
    v14 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v14) = 2695;
    goto LABEL_27;
  }
  SmpSaveOldPageFiles((unsigned int)v0);
  for ( i = (PVOID *)SmpExistingPageFilesList; i != &SmpExistingPageFilesList; i = (PVOID *)*i )
    SmpCheckForCrashDump(i + 2);
  SystemInformation = 2;
  NtSetSystemInformation(SystemCrashDumpStateInformation, &SystemInformation, 4u);
  v3 = (PVOID *)SmpPagingFileList;
  while ( v3 != &SmpPagingFileList )
  {
    v4 = (struct _UNICODE_STRING *)v3;
    SmpCreatePagingFileDescriptor(v3 + 2);
    v5 = *v3;
    v3 = (PVOID *)*v3;
    if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v4->Length + 8LL) != v4
      || (Buffer = v4->Buffer, (struct _UNICODE_STRING *)*Buffer != v4) )
    {
      __fastfail(3u);
    }
    *Buffer = v5;
    v5[1] = Buffer;
    SmpDeallocSavedRegistryEntry(v4);
  }
  if ( SmpNumberOfPagefileDescriptors || SmpRegistrySpecifierPresent )
  {
    VolumeDescriptors = SmpCreateVolumeDescriptors();
    v1 = (unsigned int)VolumeDescriptors;
    if ( VolumeDescriptors >= 0 )
    {
      v8 = (PVOID *)SmpPagingFileDescriptorList;
      v9 = 0;
      if ( SmpPagingFileDescriptorList == &SmpPagingFileDescriptorList )
        goto LABEL_31;
      do
      {
        v10 = SmpProcessPagefileDescriptor((__int64)v8);
        v8 = (PVOID *)*v8;
        if ( v10 >= 0 )
          v9 = 1;
      }
      while ( v8 != &SmpPagingFileDescriptorList );
      if ( !v9 )
      {
LABEL_31:
        if ( (int)SmpCreateEmergencyPagingFile(v1) < 0 )
          goto LABEL_21;
      }
      v11 = SmpCreateWorkingSetSwapPagingFile(&v19);
      if ( v11 < 0 )
      {
        if ( v11 != -1073741710 || SmpNumberOfPagefilesCreated != 1 )
          goto LABEL_21;
        v12 = 63;
      }
      else
      {
        if ( (*(_BYTE *)(v19 + 16) & 0x10) == 0 )
        {
LABEL_21:
          SmpCleanupStalePageFiles();
          LOBYTE(v13) = v9 == 0;
          LOBYTE(v14) = SmpRecordCreatedPageFiles(v13, &v16);
          goto LABEL_22;
        }
        v12 = *(_WORD *)(v19 + 28);
      }
      SmpEnableSwapOnPagingFiles((__int64 **)&SmpPagingFileDescriptorList, v12);
      goto LABEL_21;
    }
    v14 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v14) = 2777;
LABEL_27:
    *((_DWORD *)&SmpPagefileLog + 2 * v14 + 1) = v1;
    *((_QWORD *)&SmpPagefileLog + v14 + 1) = 0LL;
    goto LABEL_22;
  }
  LOBYTE(v14) = SmpCleanupStalePageFiles();
LABEL_22:
  if ( BaseAddress )
    LOBYTE(v14) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  return v14;
}
