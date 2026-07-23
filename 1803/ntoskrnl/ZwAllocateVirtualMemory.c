/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1401A77C0
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x1400CA090 (PspWow64ThunkProcessParameters.c)
 *     RtlpStdExtendLowerWatermark @ 0x140286A04 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x140286AF0 (RtlpStdExtendUpperWatermark.c)
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x14028B0B0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14028B32C (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x14028BAB4 (RtlpInitializeHeapSegment.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x1402943B0 (RtlpHpFixedHeapCommitRoutine.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404E9DD0 (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x14055FF64 (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x140575C08 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x14057902C (PspSetupReservedUserMappings.c)
 *     EtwpFindUserBufferSpace @ 0x1405926E0 (EtwpFindUserBufferSpace.c)
 *     RtlCreateUserStack @ 0x1405B9D40 (RtlCreateUserStack.c)
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140710940 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140794F7C (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x1407A0840 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x1407C5960 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
