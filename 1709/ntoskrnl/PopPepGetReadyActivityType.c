/*
 * XREFs of PopPepGetReadyActivityType @ 0x14001EB94
 * Callers:
 *     PopPepComponentGetWork @ 0x14001B338 (PopPepComponentGetWork.c)
 *     PopPepWork @ 0x1400FD200 (PopPepWork.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepGetReadyActivityType(__int64 a1, unsigned int a2, int a3)
{
  int **i; // rcx
  int v5; // r8d

  if ( (int)a2 > a3 )
  {
    return 6;
  }
  else
  {
    for ( i = (int **)(a1 + 8LL * (int)a2); ; ++i )
    {
      v5 = **i;
      if ( (v5 & 2) != 0 || (v5 & 8) != 0 )
        break;
      if ( (int)++a2 > a3 )
        return 6;
    }
  }
  return a2;
}
