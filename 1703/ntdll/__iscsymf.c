/*
 * XREFs of __iscsymf @ 0x180096520
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009C1BC @ 0x18009C1BC (sub_18009C1BC.c)
 */

int __cdecl _iscsymf(int C)
{
  __int64 v2; // rax
  int v3; // edx

  v2 = sub_18009C1BC();
  v3 = (unsigned __int8)C;
  if ( C == -1 )
    v3 = -1;
  return (*(_WORD *)(v2 + 2LL * v3) & 0x103) != 0 || C == 95;
}
