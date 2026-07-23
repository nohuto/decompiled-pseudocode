/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x14017F340
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1405A28B8 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x1405A2A54 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1405A2CF4 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140747700 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
