/*
 * XREFs of tolower @ 0x18009B810
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009C1BC @ 0x18009C1BC (sub_18009C1BC.c)
 */

int __cdecl tolower(int C)
{
  __int64 v2; // rax
  int v3; // edx

  v2 = sub_18009C1BC();
  v3 = (unsigned __int8)C;
  if ( C == -1 )
    v3 = -1;
  if ( (*(_BYTE *)(v2 + 2LL * v3) & 1) != 0 )
    C += 32;
  return C;
}
