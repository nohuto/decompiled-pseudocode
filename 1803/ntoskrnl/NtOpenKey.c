/*
 * XREFs of NtOpenKey @ 0x14055EA60
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x1408BACD4 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x1408C91B8 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x1405AD380 (CmOpenKey.c)
 */

NTSTATUS __stdcall NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey((_DWORD)KeyHandle, DesiredAccess, (_DWORD)ObjectAttributes, 0, 0LL);
}
