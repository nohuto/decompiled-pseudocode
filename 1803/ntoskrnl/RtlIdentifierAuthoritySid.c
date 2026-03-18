/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x140544034
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
