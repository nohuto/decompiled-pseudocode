/*
 * XREFs of ZwProtectVirtualMemory @ 0x14017E2C0
 * Callers:
 *     KiOpPatchCode @ 0x14020D3F4 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x14044AD7C (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x1405713E8 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        SIZE_T *NumberOfBytesToProtect,
        ULONG NewAccessProtection,
        PULONG OldAccessProtection)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
