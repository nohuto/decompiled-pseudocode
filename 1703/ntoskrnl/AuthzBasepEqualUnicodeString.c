/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x140089584
 * Callers:
 *     AuthzBasepFindSecurityAttributeValue @ 0x140065AF0 (AuthzBasepFindSecurityAttributeValue.c)
 *     SeSecurityAttributePresent @ 0x14008A320 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14008A4C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14008A590 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepFindTokenAttribute @ 0x140263734 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1404F786C (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const void **a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive(a1, (__int64)a2);
  else
    return RtlEqualUnicodeString((PCUNICODE_STRING)a1, a2, 1u);
}
