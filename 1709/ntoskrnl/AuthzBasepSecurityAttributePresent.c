/*
 * XREFs of AuthzBasepSecurityAttributePresent @ 0x14028DCE8
 * Callers:
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x140018090 (SepDetermineGlobalTableCheckNeededForQuery.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x140018420 (AuthzBasepFindSecurityAttribute.c)
 */

bool __fastcall AuthzBasepSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  return AuthzBasepFindSecurityAttribute(a1, a2) != 0LL;
}
