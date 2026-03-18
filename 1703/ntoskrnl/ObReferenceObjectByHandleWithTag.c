/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x1406C0DE0
 * Callers:
 *     NtResetWriteWatch @ 0x14001DB40 (NtResetWriteWatch.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401E23D8 (DbgkCaptureLiveKernelDump.c)
 *     NtSignalAndWaitForSingleObject @ 0x140226A34 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x140239B70 (PspTimerDelayProcess.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)Handle,
           DesiredAccess,
           (__int64)ObjectType,
           AccessMode,
           Tag,
           Object,
           (int *)HandleInformation,
           0LL);
}
