/*
 * XREFs of SeDeassignSecurity @ 0x14056A020
 * Callers:
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x1404D5B78 (ObpAssignSecurity.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x14064F024 (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeDeassignSecurity(PSECURITY_DESCRIPTOR *SecurityDescriptor)
{
  PSECURITY_DESCRIPTOR v2; // rcx

  v2 = *SecurityDescriptor;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *SecurityDescriptor = 0LL;
  return 0;
}
