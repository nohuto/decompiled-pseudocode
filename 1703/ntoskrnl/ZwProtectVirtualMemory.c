/*
 * XREFs of ZwProtectVirtualMemory @ 0x14017E940
 * Callers:
 *     KiOpPatchCode @ 0x140206A50 (KiOpPatchCode.c)
 *     MiCheckForUserStackOverflow @ 0x14043EBA8 (MiCheckForUserStackOverflow.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405493C8 (WbMakeUserDataPagesKernelWritable.c)
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
