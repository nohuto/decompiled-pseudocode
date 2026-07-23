/*
 * XREFs of NtOpenKeyTransacted @ 0x14065EC70
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x14042D618 (NtOpenKeyTransactedEx.c)
 */

NTSTATUS __cdecl NtOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  return NtOpenKeyTransactedEx(KeyHandle, DesiredAccess, ObjectAttributes, 0, TransactionHandle);
}
