/*
 * XREFs of NtAccessCheck @ 0x14005EA3C
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14005CD40 (SeAccessCheckByType.c)
 */

NTSTATUS __stdcall NtAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG ReturnLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckByType(
           (__int64)SecurityDescriptor,
           0LL,
           (__int64)ClientToken,
           DesiredAccess,
           0LL,
           0,
           (__int64)GenericMapping,
           (__int64)PrivilegeSet,
           (__int64)ReturnLength,
           (__int64)GrantedAccess,
           (__int64)AccessStatus,
           0);
}
