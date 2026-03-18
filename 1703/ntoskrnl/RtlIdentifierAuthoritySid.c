/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x14046EA6C
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
