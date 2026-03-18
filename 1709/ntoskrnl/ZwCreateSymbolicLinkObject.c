/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x14017EFE0
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x14056FDEC (SeGetTokenDeviceMap.c)
 *     IoCreateSymbolicLink @ 0x140596170 (IoCreateSymbolicLink.c)
 *     ObpInitializeRootNamespace @ 0x1405B1FD8 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1405B2414 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x1406B7540 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407159B0 (PspSiloInitializeSystemRootSymlink.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING Name)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SymbolicLinkHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
