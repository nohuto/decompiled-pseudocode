/*
 * XREFs of NtCreateDirectoryObject @ 0x140568EDC
 * Callers:
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x1408C40AC (ExpInitializeCallbacks.c)
 *     IopCreateRootDirectories @ 0x1408C45EC (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x1408C46C8 (IopCreateUmdfDirectory.c)
 *     CreateSystemRootLink @ 0x1408C5094 (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140568EF8 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __stdcall NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
