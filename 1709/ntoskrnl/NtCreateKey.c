/*
 * XREFs of NtCreateKey @ 0x1404E2C5C
 * Callers:
 *     CmpInitializeHardwareConfiguration @ 0x14083AA64 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x14083ACD8 (CmpInitializeMachineDependentConfiguration.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 *     CmpCreateControlSet @ 0x14083D05C (CmpCreateControlSet.c)
 *     CmpAddAliasEntry @ 0x140868D4C (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x140869144 (CmpSetNetworkValue.c)
 * Callees:
 *     CmCreateKey @ 0x1404E2CA0 (CmCreateKey.c)
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
  return CmCreateKey(KeyHandle, DesiredAccess, ObjectAttributes, TitleIndex, Class, CreateOptions, Disposition, 0LL);
}
