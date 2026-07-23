/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x1800838D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedAceEx(PACL Acl, ULONG AceRevision, ULONG AceFlags, ACCESS_MASK AccessMask, PSID Sid)
{
  return sub_180037408(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 1);
}
