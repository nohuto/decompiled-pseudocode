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
  HANDLE v4; // rbx
  HANDLE KeyHandle; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = qword_18015C780 == 0LL;
  *(_QWORD *)((unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL) = 0LL;
  if ( v3
    && ZwOpenKey(
         (PHANDLE)((unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL),
         1u,
         (POBJECT_ATTRIBUTES)&stru_180111560) >= 0
    && _InterlockedCompareExchange64((volatile signed __int64 *)&qword_18015C780, *(_QWORD *)v1, 0LL) )
  {
    ZwClose(*(HANDLE *)v1);
  }
  v4 = qword_18015C780;
  if ( !qword_18015C780 || !*SourceString )
    return 0;
  RtlInitUnicodeString((PUNICODE_STRING)(v1 + 16), SourceString);
  return ZwQueryValueKey(
           v4,
           (PUNICODE_STRING)(v1 + 16),
           KeyValuePartialInformation,
           (PVOID)(v1 + 32),
           0x78u,
           (PULONG)(v1 + 8)) >= 0;
}
