/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x1406E8680
 * Callers:
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x1406E8CF4 (RtlpAddKnownObjectAce.c)
 */

NTSTATUS __stdcall RtlAddAccessDeniedObjectAce(
        PACL pAcl,
        ULONG dwAceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        GUID *ObjectTypeGuid,
        GUID *InheritedObjectTypeGuid,
        PSID pSid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(pAcl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, pSid, 6);
  else
    return RtlpAddKnownAce(pAcl, dwAceRevision, AceFlags, AccessMask, (unsigned __int8 *)pSid, 1u);
}
