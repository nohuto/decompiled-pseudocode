/*
 * XREFs of __iscsym @ 0x1800964E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009C1BC @ 0x18009C1BC (sub_18009C1BC.c)
 */

int __cdecl _iscsym(int C)
{
  char v1; // bl

  v1 = C;
  return (*(_WORD *)(sub_18009C1BC() + 2LL * (unsigned __int8)C) & 0x107) != 0 || v1 == 95;
}
