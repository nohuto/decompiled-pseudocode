/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1400C7664
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140044640 (AuthzBasepCompareUnicodeStringOperands.c)
 *     SeSecurityAttributePresent @ 0x14005F990 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14005FB30 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14005FC10 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepEqualUnicodeString @ 0x14006C420 (AuthzBasepEqualUnicodeString.c)
 * Callees:
 *     memcmp @ 0x140189130 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
