/*
 * XREFs of NtCreateDirectoryObject @ 0x140579AF8
 * Callers:
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 *     IopCreateUmdfDirectory @ 0x1408450BC (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140852C8C (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140854AC8 (CreateSystemRootLink.c)
 *     IopCreateRootDirectories @ 0x1408563AC (IopCreateRootDirectories.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140579B14 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __stdcall NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
