/*
 * XREFs of AuthzBasepSecurityAttributePresent @ 0x1402C3964
 * Callers:
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x1400600B0 (SepDetermineGlobalTableCheckNeededForQuery.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14005FB30 (AuthzBasepFindSecurityAttribute.c)
 */

bool __fastcall AuthzBasepSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  return AuthzBasepFindSecurityAttribute(a1, a2) != 0LL;
}
