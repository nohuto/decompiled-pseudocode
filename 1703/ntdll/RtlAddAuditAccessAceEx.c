/*
 * XREFs of RtlAddAuditAccessAceEx @ 0x18008DC90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  ULONG v7; // eax
  int v8; // r8d

  v7 = AceFlags | 0x40;
  if ( !AuditSuccess )
    v7 = AceFlags;
  v8 = v7 | 0x80;
  if ( !AuditFailure )
    v8 = v7;
  return sub_180044698(Acl, AceRevision, v8, AccessMask, (unsigned __int8 *)Sid, 2u);
}
