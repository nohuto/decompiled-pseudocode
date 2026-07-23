/*
 * XREFs of RtlAddAuditAccessObjectAce @ 0x1800E2630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAddAuditAccessObjectAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PGUID ObjectTypeGuid,
        PGUID InheritedObjectTypeGuid,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  ULONG v9; // eax
  int v10; // r8d

  v9 = AceFlags | 0x40;
  if ( !AuditSuccess )
    v9 = AceFlags;
  v10 = v9 | 0x80;
  if ( !AuditFailure )
    v10 = v9;
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return sub_1800E2E1C(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 7);
  else
    return sub_180037408(Acl, AceRevision, v10, AccessMask, (unsigned __int8 *)Sid, 2);
}
