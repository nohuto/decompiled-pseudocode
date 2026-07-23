/*
 * XREFs of ZwOpenSection @ 0x1401A7BA0
 * Callers:
 *     NtGetNlsSectionPtr @ 0x14053EF74 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x1408A96D8 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1408AEF00 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
