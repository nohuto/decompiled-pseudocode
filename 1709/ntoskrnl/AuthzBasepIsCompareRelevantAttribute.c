/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x14058B038
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x14058AF6C (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0
      && RtlPrefixUnicodeString(&stru_1402B6780, (PCUNICODE_STRING)(a1 + 32), 1u) == 0;
}
