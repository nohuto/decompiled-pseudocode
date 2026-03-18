/*
 * XREFs of NtAccessCheckByType @ 0x1400244F8
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
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
  char v12; // [rsp+58h] [rbp-10h]

  v12 = 0;
  return SeAccessCheckByType(
           SecurityDescriptor,
           PrincipalSelfSid,
           ClientToken,
           DesiredAccess,
           ObjectTypeList,
           ObjectTypeLength,
           GenericMapping,
           PrivilegeSet,
           PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           v12);
}
