/*
 * XREFs of ZwOpenSection @ 0x14017DFA0
 * Callers:
 *     NtGetNlsSectionPtr @ 0x140593170 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x1408334A0 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x14083ACD8 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
