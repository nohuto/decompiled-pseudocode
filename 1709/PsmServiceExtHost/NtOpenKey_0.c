/*
 * XREFs of NtOpenKey_0 @ 0x180026472
 * Callers:
 *     RtlpTestHookInitialize @ 0x1800258C0 (RtlpTestHookInitialize.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtOpenKey_0(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return NtOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
