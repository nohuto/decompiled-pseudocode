/*
 * XREFs of RtlAddAccessAllowedAce @ 0x18007A8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return sub_180037408(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 0);
}
