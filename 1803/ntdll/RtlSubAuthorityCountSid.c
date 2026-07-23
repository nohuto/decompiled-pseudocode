/*
 * XREFs of RtlSubAuthorityCountSid @ 0x180076550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PUCHAR __cdecl RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
