/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1401A7AA0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140287190 (RtlCheckTokenCapability.c)
 *     RtlpOpenThreadToken @ 0x140574E58 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x140606ACC (BiAdjustPrivilege.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
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
