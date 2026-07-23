/*
 * XREFs of ZwLockVirtualMemory @ 0x14017F980
 * Callers:
 *     SmKmVirtualLockCtxLockMemory @ 0x140274274 (SmKmVirtualLockCtxLockMemory.c)
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
