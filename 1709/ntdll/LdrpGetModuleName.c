/*
 * XREFs of LdrpGetModuleName @ 0x1800170B8
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x180016C80 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180017650 (LdrQueryModuleInfoFromLdrEntry.c)
 * Callees:
 *     RtlWow64GetProcessMachines @ 0x180016520 (RtlWow64GetProcessMachines.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180016640 (RtlReplaceSystemDirectoryInPath.c)
 *     LdrpReadMemory @ 0x1800175CC (LdrpReadMemory.c)
 *     RtlGetNtSystemRoot @ 0x1800179D0 (RtlGetNtSystemRoot.c)
 *     RtlUnicodeStringToAnsiString @ 0x18002E7D0 (RtlUnicodeStringToAnsiString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1800926C0 (_wcsnicmp.c)
 */

NTSTATUS __fastcall LdrpGetModuleName(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // di
  NTSTATUS result; // eax
  char *v9; // rax
  const wchar_t *NtSystemRoot; // rax
  size_t v11; // rbx
  __int64 v12; // rcx
  USHORT ProcessMachine[8]; // [rsp+20h] [rbp-E0h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t String1[264]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *(_WORD *)a2;
  if ( *(_WORD *)a2 >= 0x200u )
    v4 = 512;
  result = LdrpReadMemory(a1, *(_QWORD *)(a2 + 8), String1, v4);
  if ( result >= 0 )
  {
    String1[256] = 0;
    if ( !a4 )
      goto LABEL_5;
    NtSystemRoot = RtlGetNtSystemRoot();
    v11 = -1LL;
    do
      ++v11;
    while ( NtSystemRoot[v11] );
    if ( !v11 )
      return -1073741595;
    if ( NtSystemRoot[v11 - 1] == 92 )
      --v11;
    if ( wcsnicmp(String1, NtSystemRoot, v11) || wcsnicmp(&String1[v11], L"\\system32", 9uLL) )
      goto LABEL_5;
    if ( v11 + 16 >= 0x101 )
      return -1073741595;
    v12 = *a1;
    if ( !*a1 )
      v12 = -1LL;
    if ( RtlWow64GetProcessMachines((HANDLE)v12, ProcessMachine, 0LL) >= 0
      && (SourceString.Buffer = String1,
          SourceString.MaximumLength = v4,
          SourceString.Length = v4,
          *(_DWORD *)(&DestinationString.MaximumLength + 1) = *(_DWORD *)(&SourceString.MaximumLength + 1),
          DestinationString.Buffer = (char *)&String1[v11],
          DestinationString.Length = -2 * v11 + v4,
          DestinationString.MaximumLength = DestinationString.Length,
          (RtlReplaceSystemDirectoryInPath((PUNICODE_STRING)&DestinationString, 1u, ProcessMachine[0], 0) & 0x80000000) == 0) )
    {
LABEL_5:
      SourceString.MaximumLength = v4;
      SourceString.Buffer = String1;
      SourceString.Length = v4;
      DestinationString.Buffer = (char *)(a3 + 40);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      result = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
      if ( result >= 0 )
      {
        v9 = &DestinationString.Buffer[DestinationString.Length];
        while ( v9 > DestinationString.Buffer )
        {
          if ( *--v9 == 92 )
          {
            LOWORD(v9) = (_WORD)v9 + 1;
            break;
          }
        }
        *(_WORD *)(a3 + 38) = (_WORD)v9 - LOWORD(DestinationString.Buffer);
        return 0;
      }
    }
    else
    {
      return -1073741595;
    }
  }
  return result;
}
