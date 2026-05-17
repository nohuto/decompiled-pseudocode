/*
 * XREFs of __iscsymf @ 0x18008B7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800913FC @ 0x1800913FC (sub_1800913FC.c)
 */

int __cdecl _iscsymf(int C)
{
  __int64 v2; // rax
  int v3; // edx

  v2 = sub_1800913FC();
  v3 = (unsigned __int8)C;
  if ( C == -1 )
    v3 = -1;
  return (*(_WORD *)(v2 + 2LL * v3) & 0x103) != 0 || C == 95;
}
