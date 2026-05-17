/*
 * XREFs of RtlGetExePath @ 0x1800504F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18003B180 (RtlQueryEnvironmentVariable.c)
 *     sub_18004CE84 @ 0x18004CE84 (sub_18004CE84.c)
 *     wcschr @ 0x18009BA10 (wcschr.c)
 */

__int64 __fastcall RtlGetExePath(const wchar_t *a1, _QWORD *a2)
{
  bool v3; // al
  __int64 v4; // rax
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v3 = wcschr(a1, 0x5Cu)
    || (unsigned int)RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 0x22uLL, 0LL, 0LL, &v6) == -1073741568;
  v4 = sub_18004CE84(&qword_18015A2E8, (__int64 (__fastcall *)(__int64, __int64))sub_180050870, !v3, 0LL);
  if ( v4 )
  {
    *a2 = v4 + 112;
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 3221225495LL;
  }
}
