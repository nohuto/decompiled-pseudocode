/*
 * XREFs of RtlAddAuditAccessAce @ 0x18008E680
 * Callers:
 *     <none>
 * Callees:
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessAce(
        PACL Acl,
        ULONG AceRevision,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  int v7; // r8d

  v7 = (AuditSuccess != 0 ? 0x40 : 0) | 0x80;
  if ( !AuditFailure )
    v7 = AuditSuccess != 0 ? 0x40 : 0;
  return sub_180044698(Acl, AceRevision, v7, AccessMask, (unsigned __int8 *)Sid, 2u);
}
