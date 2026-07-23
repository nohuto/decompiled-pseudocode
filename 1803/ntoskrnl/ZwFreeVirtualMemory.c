/*
 * XREFs of ZwFreeVirtualMemory @ 0x1401A7880
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1400C7BA4 (SepRmDispatchDataToLsa.c)
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x14028AAE4 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x14028B0B0 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x14028B55C (RtlpFreeHeap.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     WbFreeMemoryBlock @ 0x14053A648 (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x140575C08 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x140580B4C (PspDeleteUserStack.c)
 *     PspSetupUserStack @ 0x1405B9C34 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1405B9D40 (RtlCreateUserStack.c)
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1405F0AA0 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140710940 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140794F7C (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1407B2FDC (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x1407C5960 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
