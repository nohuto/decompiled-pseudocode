/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x180081980
 * Callers:
 *     <none>
 * Callees:
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  return sub_180044698(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
