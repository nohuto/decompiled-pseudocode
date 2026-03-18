/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x140018C50
 * Callers:
 *     SeSecurityAttributePresent @ 0x140018280 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140018420 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140018500 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14001A630 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindTokenAttribute @ 0x14028DA68 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x140483BE8 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140127E8C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive(a1, a2);
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
