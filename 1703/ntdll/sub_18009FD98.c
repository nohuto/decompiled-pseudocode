/*
 * XREFs of sub_18009FD98 @ 0x18009FD98
 * Callers:
 *     sub_18009FCF4 @ 0x18009FCF4 (sub_18009FCF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009FD98(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 24) |= 4u;
  result = a1 + 32;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)a1 = a1 + 32;
  *(_DWORD *)(a1 + 36) = 2;
  return result;
}
