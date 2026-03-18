/*
 * XREFs of NtCreateKey @ 0x14042DEB0
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x140807090 (CmpInitializeMachineDependentConfiguration.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     CmpCreateControlSet @ 0x14081E0AC (CmpCreateControlSet.c)
 *     CmpInitializeHardwareConfiguration @ 0x14081E6D8 (CmpInitializeHardwareConfiguration.c)
 *     CmpAddAliasEntry @ 0x140831E58 (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x140832250 (CmpSetNetworkValue.c)
 * Callees:
 *     CmCreateKey @ 0x14042DEF0 (CmCreateKey.c)
 */

NTSTATUS __stdcall NtCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  return CmCreateKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
