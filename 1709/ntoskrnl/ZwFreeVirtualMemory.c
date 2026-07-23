/*
 * XREFs of ZwFreeVirtualMemory @ 0x14017DC80
 * Callers:
 *     RtlpExtendHeap @ 0x14010CCA8 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x14010CD3C (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x14010D2BC (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 *     SepRmDispatchDataToLsa @ 0x14014C374 (SepRmDispatchDataToLsa.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     PspSetupUserStack @ 0x140508E04 (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x140508F24 (RtlCreateUserStack.c)
 *     WbFreeMemoryBlock @ 0x14057631C (WbFreeMemoryBlock.c)
 *     RtlpWow64CreateUserStack @ 0x14058D540 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1405979E8 (PspDeleteUserStack.c)
 *     RtlCreateHeap @ 0x1405D3930 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1405DD020 (RtlDestroyHeap.c)
 *     DbgkUserReportWorkRoutine @ 0x1406ABF00 (DbgkUserReportWorkRoutine.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140731678 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1407522E0 (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x14075EBE0 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
