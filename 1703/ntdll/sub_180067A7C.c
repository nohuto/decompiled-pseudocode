/*
 * XREFs of sub_180067A7C @ 0x180067A7C
 * Callers:
 *     sub_180067670 @ 0x180067670 (sub_180067670.c)
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x18003BA70 (RtlGetNtSystemRoot.c)
 *     RtlUnicodeStringToAnsiString @ 0x180043D50 (RtlUnicodeStringToAnsiString.c)
 *     sub_180067F8C @ 0x180067F8C (sub_180067F8C.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180068390 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlWow64GetProcessMachines @ 0x180068580 (RtlWow64GetProcessMachines.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _wcsnicmp @ 0x1800977C0 (_wcsnicmp.c)
 */

NTSTATUS __fastcall sub_180067A7C(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // di
  NTSTATUS result; // eax
  char *v9; // rax
  const wchar_t *NtSystemRoot; // rax
  size_t v11; // rbx
  __int64 v12; // rcx
  _WORD v13[8]; // [rsp+20h] [rbp-E0h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t String1[264]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *(_WORD *)a2;
  if ( *(_WORD *)a2 >= 0x200u )
    v4 = 512;
  result = sub_180067F8C(a1, *(_QWORD *)(a2 + 8), String1, v4);
  if ( result >= 0 )
  {
    String1[256] = 0;
    if ( !a4 )
      goto LABEL_5;
    NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
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
    if ( (int)RtlWow64GetProcessMachines(v12, v13, 0LL) >= 0
      && (SourceString.Buffer = String1,
          SourceString.MaximumLength = v4,
          SourceString.Length = v4,
          *(_DWORD *)(&DestinationString.MaximumLength + 1) = *(_DWORD *)(&SourceString.MaximumLength + 1),
          DestinationString.Buffer = (char *)&String1[v11],
          DestinationString.Length = -2 * v11 + v4,
          DestinationString.MaximumLength = DestinationString.Length,
          (int)RtlReplaceSystemDirectoryInPath(&DestinationString, 1LL, v13[0], 0LL) >= 0) )
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
