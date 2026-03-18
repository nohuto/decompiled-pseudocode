/*
 * XREFs of NtAccessCheck @ 0x14006899C
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
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
  char v9; // [rsp+58h] [rbp-10h]

  v9 = 0;
  return SeAccessCheckByType(
           SecurityDescriptor,
           0LL,
           ClientToken,
           DesiredAccess,
           0LL,
           0,
           GenericMapping,
           PrivilegeSet,
           ReturnLength,
           GrantedAccess,
           AccessStatus,
           v9);
}
