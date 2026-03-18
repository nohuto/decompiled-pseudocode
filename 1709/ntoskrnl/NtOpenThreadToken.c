/*
 * XREFs of NtOpenThreadToken @ 0x1404C5C90
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x1404C5CB0 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}
