/*
 * XREFs of UpdatePerUserImmEnabling @ 0x1C0125760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UpdatePerUserImmEnabling()
{
  if ( (unsigned int)IsIMMEnabledSystem() )
    *gpsi |= 4u;
  else
    *gpsi &= ~4u;
  return 1LL;
}
