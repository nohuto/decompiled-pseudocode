/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x14045A774
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x14045A6B0 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0
      && RtlPrefixUnicodeString(&stru_140288988, (PCUNICODE_STRING)(a1 + 32), 1u) == 0;
}
