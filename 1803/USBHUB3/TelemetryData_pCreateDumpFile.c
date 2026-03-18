/*
 * XREFs of TelemetryData_pCreateDumpFile @ 0x1C0075204
 * Callers:
 *     TelemetryData_pWriteDumpFile @ 0x1C0075754 (TelemetryData_pWriteDumpFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0010724 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 */

__int64 __fastcall TelemetryData_pCreateDumpFile(__int64 a1, void **a2)
{
  NTSTATUS v4; // ebx
  unsigned int v5; // edi
  wchar_t *v6; // r11
  const wchar_t *v7; // r8
  PLARGE_INTEGER AllocationSize; // [rsp+20h] [rbp-A9h]
  ULONG FileAttributes[2]; // [rsp+28h] [rbp-A1h]
  __int64 ShareAccess; // [rsp+30h] [rbp-99h]
  __int64 Disposition; // [rsp+38h] [rbp-91h]
  __int64 CreateOptions; // [rsp+40h] [rbp-89h]
  PVOID EaBuffer; // [rsp+48h] [rbp-81h]
  union _LARGE_INTEGER SystemTime; // [rsp+70h] [rbp-59h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+78h] [rbp-51h] BYREF
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+80h] [rbp-49h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-1h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+D8h] [rbp+Fh] BYREF

  v4 = -1073741823;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  RtlTimeToTimeFields(&LocalTime, &TimeFields);
  v5 = 0;
  v6 = (wchar_t *)(a1 + 656);
  while ( 1 )
  {
    LODWORD(EaBuffer) = v5;
    LODWORD(CreateOptions) = TimeFields.Minute;
    LODWORD(Disposition) = TimeFields.Hour;
    LODWORD(ShareAccess) = TimeFields.Day;
    pszFormat = L"%ws-%04u%02u%02u-%02u%02u-%02u.dmp";
    v7 = L"%ws-%04u%02u%02u-%02u%02u.dmp";
    if ( v5 )
      v7 = pszFormat;
    FileAttributes[0] = TimeFields.Month;
    LODWORD(AllocationSize) = TimeFields.Year;
    if ( RtlStringCbPrintfW(
           v6,
           0x40uLL,
           v7,
           a1 + 624,
           AllocationSize,
           *(_QWORD *)FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer) < 0 )
      break;
    if ( RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(a1 + 720), 0x208uLL, L"%ws\\%ws\\%ws", a1 + 104, a1 + 624, a1 + 656) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 720));
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = IoCreateFile(
             a2,
             0x120116u,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             0x80u,
             0,
             2u,
             0x22u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0x100u);
      if ( v4 >= 0 )
        return (unsigned int)v4;
      ++v5;
      v6 = (wchar_t *)(a1 + 656);
      if ( v5 <= 0xA )
        continue;
    }
    goto LABEL_10;
  }
  *(_WORD *)(a1 + 656) = 0;
  v4 = -1073741823;
LABEL_10:
  *(_WORD *)(a1 + 720) = 0;
  *a2 = 0LL;
  return (unsigned int)v4;
}
