/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x14045C4F0
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
