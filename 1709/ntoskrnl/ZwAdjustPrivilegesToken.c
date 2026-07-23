/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x14017E0E0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1405859DC (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x140592024 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x1405B17BC (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
