/*
 * XREFs of sub_1800F546C @ 0x1800F546C
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180046220 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x180047A90 (RtlGetParentLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800F4FC0 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 */

bool __fastcall sub_1800F546C(PCWSTR SourceString)
{
  unsigned __int64 v1; // rbp
  bool v3; // zf
  __int64 v5; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = qword_18015C780 == 0;
  *(_QWORD *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) = 0LL;
  if ( v3 && (int)ZwOpenKey() >= 0 && _InterlockedCompareExchange64(&qword_18015C780, *(_QWORD *)v1, 0LL) )
    ZwClose();
  if ( !qword_18015C780 || !*SourceString )
    return 0;
  RtlInitUnicodeString((PUNICODE_STRING)(v1 + 16), SourceString);
  return (int)ZwQueryValueKey() >= 0;
}
