/*
 * XREFs of NtOpenKeyTransacted @ 0x1406EC040
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x14054C768 (NtOpenKeyTransactedEx.c)
 */

NTSTATUS __cdecl NtOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  return NtOpenKeyTransactedEx(KeyHandle, DesiredAccess, ObjectAttributes, 0, TransactionHandle);
}
