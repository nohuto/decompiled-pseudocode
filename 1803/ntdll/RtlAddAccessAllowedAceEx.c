/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x18007B9E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  return sub_180037408(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
