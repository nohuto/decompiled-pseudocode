/*
 * XREFs of ZwOpenProcessTokenEx @ 0x14017E540
 * Callers:
 *     RtlCheckTokenCapability @ 0x14023BE40 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x14044BAB8 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x14044BCE4 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14058D208 (BiAdjustPrivilege.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess, *(_QWORD *)&HandleAttributes);
}
