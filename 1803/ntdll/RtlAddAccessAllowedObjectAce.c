/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x1800E2350
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E2E1C @ 0x1800E2E1C (sub_1800E2E1C.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedObjectAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PGUID ObjectTypeGuid,
        PGUID InheritedObjectTypeGuid,
        PSID Sid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return sub_1800E2E1C(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 5);
  else
    return sub_180037408(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
