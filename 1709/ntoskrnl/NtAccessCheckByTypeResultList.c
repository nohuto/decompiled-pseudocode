/*
 * XREFs of NtAccessCheckByTypeResultList @ 0x14025DE60
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 */

NTSTATUS __stdcall NtAccessCheckByTypeResultList(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID PrincipalSelfSid,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE_LIST ObjectTypeList,
        ULONG ObjectTypeLength,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG PrivilegeSetLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckByType(
           (__int64)SecurityDescriptor,
           PrincipalSelfSid,
           ClientToken,
           DesiredAccess,
           (__int64)ObjectTypeList,
           ObjectTypeLength,
           (__int128 *)GenericMapping,
           PrivilegeSet,
           (PERESOURCE *)PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           1);
}
