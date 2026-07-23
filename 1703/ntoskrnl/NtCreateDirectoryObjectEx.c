/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1404423D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl NtCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, ShadowDirectoryHandle, Flags);
}
