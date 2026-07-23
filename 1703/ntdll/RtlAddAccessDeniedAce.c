/*
 * XREFs of RtlAddAccessDeniedAce @ 0x180089FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return sub_180044698(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 1u);
}
