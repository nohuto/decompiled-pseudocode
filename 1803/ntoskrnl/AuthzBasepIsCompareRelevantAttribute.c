/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x14057663C
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140576574 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0
      && RtlPrefixUnicodeString(&stru_1402EE1A0, (PCUNICODE_STRING)(a1 + 32), 1u) == 0;
}
