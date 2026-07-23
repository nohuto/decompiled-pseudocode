/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1401A7CE0
 * Callers:
 *     RtlAcquirePrivilege @ 0x140574B08 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x14057CB88 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140606ACC (BiAdjustPrivilege.c)
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
