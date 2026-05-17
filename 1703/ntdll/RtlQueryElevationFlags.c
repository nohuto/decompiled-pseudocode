/*
 * XREFs of RtlQueryElevationFlags @ 0x180084D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryElevationFlags(int *a1)
{
  int v1; // eax

  *a1 = 0;
  v1 = *a1;
  if ( (MEMORY[0x7FFE02F0] & 2) != 0 )
    v1 = 1;
  *a1 = v1;
  if ( (MEMORY[0x7FFE02F0] & 4) != 0 )
    *a1 |= 2u;
  if ( (MEMORY[0x7FFE02F0] & 8) != 0 )
    *a1 |= 4u;
  return 0LL;
}
