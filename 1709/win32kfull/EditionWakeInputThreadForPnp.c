/*
 * XREFs of EditionWakeInputThreadForPnp @ 0x1C01424E0
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C00FDA3C (WakeDIT.c)
 */

__int64 __fastcall EditionWakeInputThreadForPnp(int a1)
{
  unsigned int v1; // ecx

  if ( _InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
  {
    if ( !a1 )
    {
      v1 = 1024;
      return WakeDIT(v1);
    }
    if ( a1 == 1 )
    {
      v1 = 2048;
      return WakeDIT(v1);
    }
  }
  return 0LL;
}
