/*
 * XREFs of NtOpenKeyTransacted @ 0x140687A84
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x140568A70 (NtOpenKeyTransactedEx.c)
 */

NTSTATUS __cdecl NtOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  return NtOpenKeyTransactedEx(KeyHandle, DesiredAccess, ObjectAttributes, 0, TransactionHandle);
}
