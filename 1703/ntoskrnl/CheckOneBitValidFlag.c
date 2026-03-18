/*
 * XREFs of CheckOneBitValidFlag @ 0x14023BCCC
 * Callers:
 *     LdrResGetRCConfig @ 0x14057D7AC (LdrResGetRCConfig.c)
 * Callees:
 *     <none>
 */

bool __fastcall CheckOneBitValidFlag(int a1, int a2)
{
  int v3; // ecx

  if ( (~a2 & a1) != 0 )
    return 0;
  v3 = a2 & a1;
  if ( !v3 )
    return 0;
  while ( (v3 & 1) == 0 )
    v3 >>= 1;
  return v3 <= 1;
}
