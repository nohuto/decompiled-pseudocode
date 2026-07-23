/*
 * XREFs of ZwOpenSection @ 0x14017E620
 * Callers:
 *     NtGetNlsSectionPtr @ 0x1404618FC (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x140805124 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140807090 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
