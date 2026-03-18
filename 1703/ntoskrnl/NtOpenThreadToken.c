/*
 * XREFs of NtOpenThreadToken @ 0x140510650
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x140510670 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}
