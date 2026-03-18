/*
 * XREFs of SeDeassignSecurity @ 0x14057D4B0
 * Callers:
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     ObpAssignSecurity @ 0x140486E14 (ObpAssignSecurity.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
