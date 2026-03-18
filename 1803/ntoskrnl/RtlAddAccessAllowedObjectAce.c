/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x140783B10
 * Callers:
 *     LocalGetAclForString @ 0x140601100 (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x140784238 (RtlpAddKnownObjectAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedObjectAce(
        PACL pAcl,
        ULONG dwAceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        GUID *ObjectTypeGuid,
        GUID *InheritedObjectTypeGuid,
        PSID pSid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(pAcl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, pSid, 5);
  else
    return RtlpAddKnownAce(pAcl, dwAceRevision, AceFlags, AccessMask, (unsigned __int8 *)pSid, 0);
}
