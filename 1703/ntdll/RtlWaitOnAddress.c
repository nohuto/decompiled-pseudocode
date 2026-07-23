/*
 * XREFs of RtlWaitOnAddress @ 0x180008CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B51C @ 0x18000B51C (sub_18000B51C.c)
 */

NTSTATUS __cdecl RtlWaitOnAddress(void *Address, PVOID CompareAddress, SIZE_T AddressSize, PLARGE_INTEGER Timeout)
{
  return sub_18000B51C((_DWORD)Address, (_DWORD)CompareAddress, AddressSize, (_DWORD)Timeout, dword_180158680);
}
