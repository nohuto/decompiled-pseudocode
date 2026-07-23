/*
 * XREFs of NtOpenKeyEx @ 0x14043C30C
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  return CmOpenKey((_DWORD)KeyHandle, DesiredAccess, (_DWORD)ObjectAttributes, OpenOptions, 0LL);
}
