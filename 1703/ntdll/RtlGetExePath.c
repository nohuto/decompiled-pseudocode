/*
 * XREFs of RtlGetExePath @ 0x1800504F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18003B180 (RtlQueryEnvironmentVariable.c)
 *     sub_18004CE84 @ 0x18004CE84 (sub_18004CE84.c)
 *     wcschr @ 0x18009BA10 (wcschr.c)
 */

NTSTATUS __cdecl RtlGetExePath(PCWSTR DosPathName, PWSTR *SearchPathA)
{
  bool v3; // al
  __int64 v4; // rax
  ULONG_PTR ReturnLength; // [rsp+50h] [rbp+18h] BYREF

  v3 = wcschr(DosPathName, 0x5Cu)
    || RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 0x22uLL, 0LL, 0LL, &ReturnLength) == -1073741568;
  v4 = sub_18004CE84(&qword_18015A2E8, (__int64 (__fastcall *)(__int64, __int64))sub_180050870, !v3, 0LL);
  if ( v4 )
  {
    *SearchPathA = (PWSTR)(v4 + 112);
    return 0;
  }
  else
  {
    *SearchPathA = 0LL;
    return -1073741801;
  }
}
