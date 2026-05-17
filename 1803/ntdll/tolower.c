/*
 * XREFs of tolower @ 0x180090AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800913FC @ 0x1800913FC (sub_1800913FC.c)
 */

int __cdecl tolower(int C)
{
  __int64 v2; // rax
  int v3; // edx

  v2 = sub_1800913FC();
  v3 = (unsigned __int8)C;
  if ( C == -1 )
    v3 = -1;
  if ( (*(_BYTE *)(v2 + 2LL * v3) & 1) != 0 )
    C += 32;
  return C;
}
