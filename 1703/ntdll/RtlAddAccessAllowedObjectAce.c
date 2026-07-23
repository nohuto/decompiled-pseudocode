/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x1800E7640
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E80D4 @ 0x1800E80D4 (sub_1800E80D4.c)
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
    return sub_1800E80D4(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 5);
  else
    return sub_180044698(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
