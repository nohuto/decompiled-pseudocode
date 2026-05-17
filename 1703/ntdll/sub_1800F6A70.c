/*
 * XREFs of sub_1800F6A70 @ 0x1800F6A70
 * Callers:
 *     sub_180069CA0 @ 0x180069CA0 (sub_180069CA0.c)
 *     sub_180069F00 @ 0x180069F00 (sub_180069F00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F6A70(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  _WORD *v3; // r9

  v2 = a2 - 1;
  v3 = (_WORD *)(a1 + 2LL * (int)(a2 - 1));
  if ( (int)(a2 - 1) < 0 )
    return a2;
  while ( *v3 != 64 )
  {
    --v3;
    if ( (--v2 & 0x80000000) != 0 )
      return a2;
  }
  return v2 + 1;
}
