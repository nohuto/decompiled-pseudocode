/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1401A7AC0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140287190 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x140574B08 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x140574D34 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140606ACC (BiAdjustPrivilege.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
