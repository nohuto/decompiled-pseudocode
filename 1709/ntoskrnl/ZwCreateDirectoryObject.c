/*
 * XREFs of ZwCreateDirectoryObject @ 0x14017ECC0
 * Callers:
 *     SeGetTokenDeviceMap @ 0x14056FDEC (SeGetTokenDeviceMap.c)
 *     ObpInitializeRootNamespace @ 0x1405B1FD8 (ObpInitializeRootNamespace.c)
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 *     ObpGetSilosRootDirectory @ 0x14078A3BC (ObpGetSilosRootDirectory.c)
 *     ExInitializeNls @ 0x140857C6C (ExInitializeNls.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
