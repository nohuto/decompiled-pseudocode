/*
 * XREFs of ObOpenObjectByPointerWithTag @ 0x140758D60
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140223BFC (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointerWithTag(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PHANDLE Handle)
{
  return ObOpenObjectByPointer(
           Object,
           HandleAttributes,
           PassedAccessState,
           DesiredAccess,
           ObjectType,
           AccessMode,
           Handle);
}
