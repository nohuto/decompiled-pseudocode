/*
 * XREFs of MiComputeDriverProtection @ 0x1405A2590
 * Callers:
 *     MiProtectSystemImage @ 0x1405A22B8 (MiProtectSystemImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeDriverProtection(int a1, int a2)
{
  unsigned int v2; // r9d

  v2 = ((unsigned int)a2 >> 28) & 2 | 1;
  if ( (a2 & 0x40000000) == 0 )
    v2 = ((unsigned int)a2 >> 28) & 2;
  if ( a2 < 0 )
  {
    if ( a1 == 1 )
    {
      v2 = v2 & 2 | 5;
    }
    else
    {
      if ( (v2 & 2) != 0 )
        return 6;
      v2 = 4;
    }
  }
  if ( !v2 )
    return 24;
  return v2;
}
