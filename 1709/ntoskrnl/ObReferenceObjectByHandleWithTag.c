/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x140594210
 * Callers:
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     NtResetWriteWatch @ 0x14003D7F0 (NtResetWriteWatch.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401E659C (DbgkCaptureLiveKernelDump.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402391E0 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x14024EB40 (PspTimerDelayProcess.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
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
           HandleInformation,
           0LL);
}
