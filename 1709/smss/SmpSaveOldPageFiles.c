/*
 * XREFs of SmpSaveOldPageFiles @ 0x140009C10
 * Callers:
 *     SmpCreatePagingFiles @ 0x140009518 (SmpCreatePagingFiles.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140001C54 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000C86D (memset_0.c)
 *     SmpDeletePagingFile @ 0x14000FE0C (SmpDeletePagingFile.c)
 *     SmpQueryPathFromRegistry @ 0x140010E14 (SmpQueryPathFromRegistry.c)
 *     SmpSaveOldPageFile @ 0x140011194 (SmpSaveOldPageFile.c)
 */

void SmpSaveOldPageFiles()
{
  struct _UNICODE_STRING *v0; // r14
  __int64 v1; // rcx
  NTSTATUS v2; // ebx
  unsigned int i; // esi
  char v4; // al
  int PathFromRegistry; // eax
  const UNICODE_STRING *v6; // rdi
  unsigned int v7; // edi
  unsigned int v8; // ebx
  USHORT Length; // ax
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v13[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v15[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING v16; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v17[16]; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v21[4]; // [rsp+F8h] [rbp-10h] BYREF
  PVOID BaseAddress[32]; // [rsp+108h] [rbp+0h]
  wchar_t pszDest[64]; // [rsp+208h] [rbp+100h] BYREF

  LODWORD(v13[0]) = 10092696;
  v13[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\MachineCrash";
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"SavePageFileContents";
  LODWORD(v15[0]) = 2359330;
  v15[1] = L"SavedPageFilePath";
  *(_DWORD *)&v16.Length = 1966108;
  v16.Buffer = L"SavedPageFiles";
  v0 = 0LL;
  memset_0(v21, 0, 0x108uLL);
  Handle = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( SmpUseDedicatedDumpFile )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0
      && NtQueryValueKey(
           SmpCrashDumpKey,
           &ValueName,
           KeyValuePartialInformationAlign64,
           KeyValueInformation,
           0x10u,
           &ResultLength) >= 0
      && KeyValueInformation[0] == 4 )
    {
      v4 = SmpSavePageFiles;
      if ( KeyValueInformation[2] == 1 )
        v4 = 1;
      SmpSavePageFiles = v4;
    }
  }
  if ( SmpSavePageFiles )
  {
    PathFromRegistry = SmpQueryPathFromRegistry(v1, v15, 0LL, v17);
    v6 = (const UNICODE_STRING *)SmpExistingPageFilesList;
    v0 = (struct _UNICODE_STRING *)v17;
    if ( PathFromRegistry < 0 )
      v0 = 0LL;
    while ( v6 != (const UNICODE_STRING *)&SmpExistingPageFilesList )
    {
      v2 = SmpSaveOldPageFile(v6 + 1);
      if ( v2 < 0 )
        goto LABEL_4;
      v6 = *(const UNICODE_STRING **)&v6->Length;
    }
    v2 = RtlStringCbPrintfW(pszDest, 0x80uLL, L"\\??\\%c:\\%s", (unsigned __int16)SmpOsVolumeLetter, L"swapfile.sys");
    if ( v2 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      SmpSaveOldPageFile(&DestinationString);
      v7 = v21[1] + 2 * (v21[0] + 1);
      if ( v7 <= 0xFFFF )
      {
        Destination.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v7);
        if ( Destination.Buffer )
        {
          v8 = 0;
          Destination.MaximumLength = v7;
          if ( v21[0] )
          {
            do
            {
              RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&v21[4 * v8++ + 2]);
              Length = Destination.Length + 2;
              Destination.Length += 2;
            }
            while ( v8 < v21[0] );
          }
          else
          {
            Length = Destination.Length;
          }
          Destination.Buffer[(unsigned __int64)Length >> 1] = 0;
          Destination.Length += 2;
          v2 = NtSetValueKey(SmpCrashDumpKey, &v16, 0, 7u, Destination.Buffer, v7);
          if ( v2 >= 0 )
            NtFlushKey(SmpCrashDumpKey);
        }
        else
        {
          v2 = -1073741670;
        }
      }
      else
      {
        v2 = -1073741562;
      }
    }
  }
  else
  {
    v2 = 0;
  }
LABEL_4:
  if ( Handle )
    NtClose(Handle);
  for ( i = 0; i < v21[0]; ++i )
  {
    if ( BaseAddress[2 * i] )
    {
      if ( v2 < 0 )
        SmpDeletePagingFile(&v21[4 * i + 2]);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress[2 * i]);
    }
  }
  if ( Destination.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
  if ( v0 )
    RtlFreeUnicodeString(v0);
}
