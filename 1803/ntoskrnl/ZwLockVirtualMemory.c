/*
 * XREFs of ZwLockVirtualMemory @ 0x1401A95A0
 * Callers:
 *     SmKmVirtualLockCtxLockMemory @ 0x1402A7C70 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToLock,
        ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
