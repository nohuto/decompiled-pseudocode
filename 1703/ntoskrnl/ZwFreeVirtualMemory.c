/*
 * XREFs of ZwFreeVirtualMemory @ 0x14017E300
 * Callers:
 *     RtlpExtendHeap @ 0x14000E7E4 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x14000E878 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x14000EDEC (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14000F830 (RtlpAllocateHeap.c)
 *     SepRmDispatchDataToLsa @ 0x140148404 (SepRmDispatchDataToLsa.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     RtlpWow64CreateUserStack @ 0x140445374 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1404595F0 (PspDeleteUserStack.c)
 *     RtlCreateUserStack @ 0x1405165A8 (RtlCreateUserStack.c)
 *     PspSetupUserStack @ 0x140516848 (PspSetupUserStack.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     WbFreeMemoryBlock @ 0x140548FA4 (WbFreeMemoryBlock.c)
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x140579570 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x140680D30 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1406F9C38 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x140713524 (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x14071ED80 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
