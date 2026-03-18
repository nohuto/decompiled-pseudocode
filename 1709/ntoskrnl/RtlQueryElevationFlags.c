/*
 * XREFs of RtlQueryElevationFlags @ 0x1405801E0
 * Callers:
 *     SeTokenCanImpersonate @ 0x1404CEBB0 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryElevationFlags(int *a1)
{
  int v1; // eax

  *a1 = 0;
  v1 = *a1;
  if ( (MEMORY[0xFFFFF780000002F0] & 2) != 0 )
    v1 = 1;
  *a1 = v1;
  if ( (MEMORY[0xFFFFF780000002F0] & 4) != 0 )
    *a1 |= 2u;
  if ( (MEMORY[0xFFFFF780000002F0] & 8) != 0 )
    *a1 |= 4u;
  return 0LL;
}
