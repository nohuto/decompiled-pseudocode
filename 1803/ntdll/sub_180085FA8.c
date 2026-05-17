/*
 * XREFs of sub_180085FA8 @ 0x180085FA8
 * Callers:
 *     RtlGetParentLocaleName @ 0x180031240 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180037850 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x1800F2550 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

bool __fastcall sub_180085FA8(PCWSTR SourceString)
{
  _QWORD *v1; // rbp
  bool v3; // zf
  __int64 v4; // rbx
  __int64 v6; // [rsp+50h] [rbp+0h] BYREF

  v1 = (_QWORD *)((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL);
  v3 = qword_18015D3F8 == 0;
  *(_QWORD *)((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) = 0LL;
  if ( v3
    && (int)ZwOpenKey((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL, 1LL, &unk_1801108E0) >= 0
    && _InterlockedCompareExchange64(&qword_18015D3F8, *v1, 0LL) )
  {
    ZwClose(*v1);
  }
  v4 = qword_18015D3F8;
  if ( !qword_18015D3F8 || !*SourceString )
    return 0;
  RtlInitUnicodeString((PUNICODE_STRING)v1 + 1, SourceString);
  return (int)ZwQueryValueKey(v4, v1 + 2, 2LL, v1 + 4, 120, v1 + 1) >= 0;
}
