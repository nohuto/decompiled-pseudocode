/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x14006C420
 * Callers:
 *     SeSecurityAttributePresent @ 0x14005F990 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14005FB30 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14005FC10 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14006C17C (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindTokenAttribute @ 0x1402C36DC (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1404F0AA4 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1400C7664 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive(a1, a2);
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
