/*
 * XREFs of EditionWakeInputThreadForPnp @ 0x1C013B7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionWakeInputThreadForPnp(int a1)
{
  if ( !_InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
    return 0LL;
  if ( !a1 )
    return WakeDIT(0x1000u);
  if ( a1 == 1 )
    return WakeDIT(0x800u);
  else
    return 0LL;
}
