/*
 * XREFs of sub_18000EE28 @ 0x18000EE28
 * Callers:
 *     sub_18000ECC4 @ 0x18000ECC4 (sub_18000ECC4.c)
 * Callees:
 *     sub_18000EEA8 @ 0x18000EEA8 (sub_18000EEA8.c)
 */

__int64 sub_18000EE28()
{
  unsigned int HeapData_high; // ebx
  __int64 result; // rax

  HeapData_high = HIWORD(NtCurrentTeb()->HeapData);
  result = sub_18000EEA8() & 0x7F7F7F7F7F7F7F7FLL;
  qword_180159900[(unsigned __int64)HeapData_high >> 3] = result;
  return result;
}
