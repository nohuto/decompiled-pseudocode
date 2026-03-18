/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x14057B220
 * Callers:
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x14016C8CC (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x140223BFC (DbgkCaptureLiveKernelDump.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     NtSignalAndWaitForSingleObject @ 0x140270CA0 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x140284ED0 (PspTimerDelayProcess.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
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
  return ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, Tag, (__int64)Object, (__int64)HandleInformation, 0LL);
}
