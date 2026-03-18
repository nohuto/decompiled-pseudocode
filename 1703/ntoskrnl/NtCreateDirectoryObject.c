/*
 * XREFs of NtCreateDirectoryObject @ 0x1404423E4
 * Callers:
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 *     IopCreateRootDirectories @ 0x140820A80 (IopCreateRootDirectories.c)
 *     CreateSystemRootLink @ 0x140821624 (CreateSystemRootLink.c)
 *     ExpInitializeCallbacks @ 0x1408219B8 (ExpInitializeCallbacks.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140442400 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __stdcall NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
