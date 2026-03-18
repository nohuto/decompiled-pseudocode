/*
 * XREFs of NtAccessCheckByType @ 0x1400BED68
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14005CD40 (SeAccessCheckByType.c)
 */

NTSTATUS __stdcall NtAccessCheckByType(
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
           (__int64)PrincipalSelfSid,
           (__int64)ClientToken,
           DesiredAccess,
           (__int64)ObjectTypeList,
           ObjectTypeLength,
           (__int64)GenericMapping,
           (__int64)PrivilegeSet,
           (__int64)PrivilegeSetLength,
           (__int64)GrantedAccess,
           (__int64)AccessStatus,
           0);
}
