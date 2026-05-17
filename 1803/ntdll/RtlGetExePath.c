/*
 * XREFs of RtlGetExePath @ 0x1800814A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180022780 (RtlQueryEnvironmentVariable.c)
 *     sub_18002534C @ 0x18002534C (sub_18002534C.c)
 *     wcschr @ 0x180090C50 (wcschr.c)
 */

__int64 __fastcall RtlGetExePath(const wchar_t *a1, _QWORD *a2)
{
  _BOOL8 v3; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v3 = !wcschr(a1, 0x5Cu)
    && (unsigned int)RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 0x22uLL, 0LL, 0LL, &v6) != -1073741568;
  v4 = sub_18002534C(&qword_18015B2E8, (__int64 (__fastcall *)(__int64, __int64))sub_18006DCE0, v3, 0LL);
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
