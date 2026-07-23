/*
 * XREFs of NtOpenKeyEx @ 0x140570174
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x1404AC170 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  return CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, OpenOptions, 0LL);
}
