/*
 * XREFs of ZwAllocateVirtualMemory @ 0x14017DBC0
 * Callers:
 *     RtlpExtendHeap @ 0x14010CCA8 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x14010E9A0 (RtlpFindAndCommitPages.c)
 *     PspWow64ThunkProcessParameters @ 0x14012A274 (PspWow64ThunkProcessParameters.c)
 *     RtlpInitializeHeapSegment @ 0x14014F05C (RtlpInitializeHeapSegment.c)
 *     RtlpStdExtendLowerWatermark @ 0x140250F4C (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x140251034 (RtlpStdExtendUpperWatermark.c)
 *     RtlpHpFixedHeapCommitRoutine @ 0x14025C0D0 (RtlpHpFixedHeapCommitRoutine.c)
 *     PspSetupUserProcessAddressSpace @ 0x14045F718 (PspSetupUserProcessAddressSpace.c)
 *     RtlCreateUserStack @ 0x140508F24 (RtlCreateUserStack.c)
 *     EtwpFindUserBufferSpace @ 0x140532FCC (EtwpFindUserBufferSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1405713E8 (MiCheckForUserStackOverflow.c)
 *     PspSetupReservedUserMappings @ 0x14058D2BC (PspSetupReservedUserMappings.c)
 *     RtlpWow64CreateUserStack @ 0x14058D540 (RtlpWow64CreateUserStack.c)
 *     RtlCreateHeap @ 0x1405D3930 (RtlCreateHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x1406ABF00 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140731678 (SepAdtCopyToLsaSharedMemory.c)
 *     VmCreateMemoryProcess @ 0x14073D6C0 (VmCreateMemoryProcess.c)
 *     ExRaiseHardError @ 0x14075EBE0 (ExRaiseHardError.c)
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
