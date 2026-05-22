/*
 * XREFs of StopAndEndInertia @ 0x180005A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 StopAndEndInertia()
{
  if ( (gdwMitConfig & 4) != 0 )
    return MITStopAndEndInertia();
  else
    return 0LL;
}
