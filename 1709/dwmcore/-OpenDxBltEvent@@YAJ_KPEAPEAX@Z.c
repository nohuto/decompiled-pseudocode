/*
 * XREFs of ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x1801C8210
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800AB6B0 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001EA4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDxBltEvent(__int64 a1, void **a2)
{
  BOOLEAN v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  void *v7; // rcx
  NTSTATUS v8; // ebx
  HANDLE v9; // rax
  DWORD v10; // r9d
  unsigned int RestartScan; // [rsp+20h] [rbp-E0h]
  void *FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Context; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE Buffer[560]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  FileHandle = 0LL;
  Context = 0;
  v4 = 1;
  v5 = StringCchPrintfW(SourceString, 0x104uLL, (size_t *)L"%s%I64x", L"DwmDxBltEvent_", a1);
  v6 = v5;
  if ( v5 < 0 )
  {
    RestartScan = 93;
  }
  else
  {
    do
    {
      v9 = OpenEventW(2u, 0, SourceString);
      if ( v9 )
      {
        *a2 = v9;
        goto LABEL_21;
      }
      v7 = FileHandle;
      if ( !FileHandle )
      {
        v5 = StringCchPrintfW(
               SourceString,
               0x104uLL,
               (size_t *)L"\\Sessions\\%u\\AppContainerNamedObjects",
               NtCurrentPeb()->SessionId);
        v6 = v5;
        if ( v5 < 0 )
        {
          RestartScan = 123;
          goto LABEL_19;
        }
        RtlInitUnicodeString(&DestinationString, SourceString);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v8 = NtOpenDirectoryObject(&FileHandle, 1u, &ObjectAttributes);
        if ( v8 < 0 )
        {
          RestartScan = 132;
LABEL_14:
          v6 = v8 | 0x10000000;
          v10 = v6;
          goto LABEL_20;
        }
        v7 = FileHandle;
      }
      v8 = NtQueryDirectoryObject(v7, Buffer, 0x228u, 1u, v4, &Context, 0LL);
      if ( v8 == -2147483622 )
        v8 = -1073741772;
      if ( v8 < 0 )
      {
        RestartScan = 151;
        goto LABEL_14;
      }
      v4 = 0;
      v5 = StringCchPrintfW(
             SourceString,
             0x104uLL,
             (size_t *)L"AppContainerNamedObjects\\%wZ\\%s%I64x",
             Buffer,
             L"DwmDxBltEvent_",
             a1);
      v6 = v5;
    }
    while ( v5 >= 0 );
    RestartScan = 163;
  }
LABEL_19:
  v10 = v5;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021C4C0, 2u, v10, RestartScan);
LABEL_21:
  if ( FileHandle )
    CloseHandle(FileHandle);
  return v6;
}
