/*
 * XREFs of bNonZeroRow @ 0x1C02345A0
 * Callers:
 *     vFindTAndB @ 0x1C0235214 (vFindTAndB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bNonZeroRow(_BYTE *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( !a3 )
    return 0LL;
  while ( !*a1 )
  {
    ++v3;
    a1 += a2;
    if ( v3 >= a3 )
      return 0LL;
  }
  return 1LL;
}
