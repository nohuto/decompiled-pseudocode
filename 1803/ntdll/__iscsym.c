/*
 * XREFs of __iscsym @ 0x18008B760
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800913FC @ 0x1800913FC (sub_1800913FC.c)
 */

int __cdecl _iscsym(int C)
{
  char v1; // bl

  v1 = C;
  return (*(_WORD *)(sub_1800913FC() + 2LL * (unsigned __int8)C) & 0x107) != 0 || v1 == 95;
}
