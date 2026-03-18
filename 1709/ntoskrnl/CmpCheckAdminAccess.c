/*
 * XREFs of CmpCheckAdminAccess @ 0x1406913A0
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140569AAC (CmpVEExecuteCreateLogic.c)
 *     CmpVEPerformOpenAccessCheck @ 0x140569CE0 (CmpVEPerformOpenAccessCheck.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     SeAccessCheckFromState @ 0x140025160 (SeAccessCheckFromState.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpBuildAdminInformation @ 0x140690E6C (CmpBuildAdminInformation.c)
 */

__int64 __fastcall CmpCheckAdminAccess(ACCESS_MASK DesiredAccess, PSECURITY_DESCRIPTOR SecurityDescriptor, bool *a3)
{
  int v6; // ebx
  bool v7; // si
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-30h] BYREF
  PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation[2]; // [rsp+60h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+A8h] [rbp+20h] BYREF

  Privileges = 0LL;
  v6 = CmpBuildAdminInformation(PrimaryTokenInformation);
  if ( v6 >= 0 )
  {
    v7 = SeAccessCheckFromState(
           SecurityDescriptor,
           PrimaryTokenInformation[0],
           0LL,
           DesiredAccess,
           0,
           &Privileges,
           (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
           1,
           &GrantedAccess,
           &AccessStatus) != 0;
    if ( Privileges )
      ExFreePoolWithTag(Privileges, 0);
    ExFreePoolWithTag(PrimaryTokenInformation[0], 0);
    *a3 = v7;
  }
  return (unsigned int)v6;
}
