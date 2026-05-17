/*
 * XREFs of sub_1800950C4 @ 0x1800950C4
 * Callers:
 *     sub_180095014 @ 0x180095014 (sub_180095014.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800950C4(__int64 a1)
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
