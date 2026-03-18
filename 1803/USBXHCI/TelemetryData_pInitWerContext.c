/*
 * XREFs of TelemetryData_pInitWerContext @ 0x1C005DEBC
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C005DB50 (TelemetryData_SubmitReport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C000D628 (RtlStringCbPrintfW.c)
 *     RegRetrieveValueInfo @ 0x1C005E2D4 (RegRetrieveValueInfo.c)
 */

__int64 __fastcall TelemetryData_pInitWerContext(__int64 a1)
{
  int v2; // ebx
  PVOID v3; // rbx
  unsigned int v4; // eax
  size_t v5; // r8
  __int64 v6; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  void *KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  void *FileHandle; // [rsp+80h] [rbp-80h] BYREF
  int v13; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v14; // [rsp+90h] [rbp-70h]
  struct _UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES v19; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t pszDest[264]; // [rsp+130h] [rbp+30h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&v19, 0, sizeof(v19));
  v13 = 2883628;
  v14 = L"LiveKernelReportsPath";
  ValueName.Buffer = L"LiveKernelReportsPath";
  *(_DWORD *)&ValueName.Length = 2883628;
  memset(pszDest, 0, 0x208uLL);
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0
    && (P = 0LL, v2 = RegRetrieveValueInfo(KeyHandle, &ValueName), ZwClose(KeyHandle), v2 >= 0)
    && (v3 = P) != 0LL
    && *((_DWORD *)P + 1) == 1 )
  {
    v4 = *((_DWORD *)P + 2);
    v5 = 518LL;
    if ( v4 <= 0x206 )
      v5 = v4;
    v6 = a1 + 104;
    memmove((void *)(a1 + 104), (char *)P + 12, v5);
    ExFreePoolWithTag(v3, 0x74614454u);
  }
  else
  {
    v6 = a1 + 104;
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(a1 + 104), 0x208uLL, L"%ws", L"\\SystemRoot\\LiveKernelReports");
  }
  *(_WORD *)(a1 + 622) = 0;
  v7 = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%ws\\%ws", v6, a1 + 624);
  if ( v7 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, pszDest);
    v19.Length = 48;
    v19.RootDirectory = 0LL;
    v19.Attributes = 576;
    v19.ObjectName = &DestinationString;
    *(_OWORD *)&v19.SecurityDescriptor = 0LL;
    v8 = IoCreateFile(
           &FileHandle,
           0x10000000u,
           &v19,
           &IoStatusBlock,
           0LL,
           0x80u,
           3u,
           2u,
           1u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x100u);
    v7 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741771 || IoStatusBlock.Information == 4 )
        return 0;
    }
    else
    {
      ZwClose(FileHandle);
    }
  }
  return (unsigned int)v7;
}
