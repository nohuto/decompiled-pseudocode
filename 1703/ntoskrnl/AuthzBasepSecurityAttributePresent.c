/*
 * XREFs of AuthzBasepSecurityAttributePresent @ 0x1402639B8
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140089FD0 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14008A4C0 (AuthzBasepFindSecurityAttribute.c)
 */

bool __fastcall AuthzBasepSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  return AuthzBasepFindSecurityAttribute(a1, a2) != 0LL;
}
