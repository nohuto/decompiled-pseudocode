/*
 * XREFs of ZwAllocateVirtualMemory @ 0x14017E240
 * Callers:
 *     RtlpExtendHeap @ 0x14000E7E4 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x14000F830 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x1400105BC (RtlpFindAndCommitPages.c)
 *     PspWow64ThunkProcessParameters @ 0x140032CC4 (PspWow64ThunkProcessParameters.c)
 *     RtlpInitializeHeapSegment @ 0x1401354FC (RtlpInitializeHeapSegment.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     RtlpStdExtendLowerWatermark @ 0x14023B6B4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x14023B79C (RtlpStdExtendUpperWatermark.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x140244D20 (RtlpHpFixedHeapCommitRoutine.c)
 *     MiCheckForUserStackOverflow @ 0x14043EBA8 (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x140445374 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x14044ED4C (PspSetupReservedUserMappings.c)
 *     PspSetupUserProcessAddressSpace @ 0x14049BA50 (PspSetupUserProcessAddressSpace.c)
 *     RtlCreateUserStack @ 0x1405165A8 (RtlCreateUserStack.c)
 *     EtwpFindUserBufferSpace @ 0x14055067C (EtwpFindUserBufferSpace.c)
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140680D30 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1406F9C38 (SepAdtCopyToLsaSharedMemory.c)
 *     ExRaiseHardError @ 0x14071ED80 (ExRaiseHardError.c)
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
