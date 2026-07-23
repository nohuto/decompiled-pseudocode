/*
 * XREFs of RtlWaitOnAddress @ 0x1800494C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004AABC @ 0x18004AABC (sub_18004AABC.c)
 */

NTSTATUS __cdecl RtlWaitOnAddress(void *Address, PVOID CompareAddress, SIZE_T AddressSize, PLARGE_INTEGER Timeout)
{
  return sub_18004AABC((_DWORD)Address, (_DWORD)CompareAddress, AddressSize, (_DWORD)Timeout, dword_1801596D8);
}
