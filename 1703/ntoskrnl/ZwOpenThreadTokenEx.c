/*
 * XREFs of ZwOpenThreadTokenEx @ 0x14017E520
 * Callers:
 *     RtlCheckTokenCapability @ 0x14023BE40 (RtlCheckTokenCapability.c)
 *     RtlpOpenThreadToken @ 0x14044BE08 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x14058D208 (BiAdjustPrivilege.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
