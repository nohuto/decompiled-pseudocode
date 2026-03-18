/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140127E8C
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140016D80 (AuthzBasepCompareUnicodeStringOperands.c)
 *     SeSecurityAttributePresent @ 0x140018280 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140018420 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140018500 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepEqualUnicodeString @ 0x140018C50 (AuthzBasepEqualUnicodeString.c)
 * Callees:
 *     memcmp @ 0x14015F370 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
